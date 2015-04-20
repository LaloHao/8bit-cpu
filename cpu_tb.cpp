#include "Vcpu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#define EXEC 8

int clk = 0;
VerilatedVcdC *gtkw = new VerilatedVcdC;
Vcpu *cpu = new Vcpu;

void exec(int instruction)
{
  static int i;
  static int t = EXEC;
  cpu->instruction = instruction;
  // t += 4*((instruction >= 0x00) && (instruction <= 0x0A));
  for (i = 0; i < t; i++)
    {
      gtkw->dump(clk);
      cpu->clk = !cpu->clk;
      cpu->eval();
      clk++;
    }
}

void end()
{
  static int i;
  cpu->rst = 1;
  for (i = 0; i < 2; i++)
    {
      gtkw->dump(clk);
      cpu->clk = !cpu->clk;
      cpu->eval();
      clk++;
    }
  cpu->rst = 0;
  cpu->instruction = 0x70;
  for (i = 0; i < EXEC*2; i++)
    {
      gtkw->dump(clk);
      cpu->clk = !cpu->clk;
      cpu->eval();
      clk++;
    }
}

int main(int argc, char **argv, char **env)
{
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);
  cpu->trace (gtkw, 99);
  gtkw->open ("cpu.vcd");
  
  exec(0x81); // mov a, 1
  exec(0x15); // ld r5, a
  exec(0x82); // mov a, 2
  exec(0x14); // ld r5, a
  exec(0x05); // ld a, r5
  exec(0x16); // ld r6, a
  exec(0x04); // ld a, r4
  exec(0x03); // ld a, r3
  exec(0x05); // ld a, r5
  exec(0x20); // and a, r0
  exec(0x04); // ld a, r4
  exec(0x24); // and a, r0
  exec(0x34); // add a, r4
  exec(0x44); // sub a, r4
  exec(0x80); // mov a, 0
  exec(0x5A); // jz A
  exec(0x81); // mov a, 1
  exec(0x5A); // jz A
  exec(0x5A); // jz A
  exec(0x5A); // jz A
  exec(0x6A); // jmp A
  exec(0x85); // mov a, 5
  exec(0x10); // ld r1, a
  exec(0x81); // mov a, r1
  exec(0x20); // and a, r0 
  exec(0x95); // nand a, r5
  exec(0xB0); // nor a, r0
  exec(0xA4); // or a, r4
  exec(0xC0); // xor a, r0
  exec(0xD0); // xnor a, r0
  exec(0xE0); // not a
  end();      // 
  
  if(Verilated::gotFinish())
    exit(0);
  gtkw->close();
  exit(0);

  return 0;
}

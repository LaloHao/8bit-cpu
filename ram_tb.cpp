#include "Vram.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#define WRITE 1
#define READ 0

int main(int argc, char **argv, char **env)
{
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);
  VerilatedVcdC *gtkw = new VerilatedVcdC;

  int clk, i, j; 
  Vram *ram = new Vram;
  ram->trace(gtkw, 99);
  gtkw->open("ram.vcd");
  
  clk = 0;
  ram->rw = WRITE;
  i = j = 0;
  while(!ram->data[15])
    {
      gtkw->dump(clk);
      if(j%2)
        i++;  
      ram->datain = i;
      ram->addr = i;
      ram->clk = !ram->clk;
      ram->eval();
      clk++;
      j++;
    }
  for(j = 1; j <=2; j++)
    {    
      gtkw->dump(clk);
      ram->clk = !ram->clk;
      ram->eval();
      clk++;
    }
  i = j = 0;
  ram->rw = READ;
  ram->addr = i;
  ram->clk = !ram->clk;
  ram->eval();
  gtkw->dump(clk);
  clk++;
  ram->clk = !ram->clk;
  while(ram->dataout != 15)
    {
      if(j%2)
        i++;
      ram->addr = i;
      ram->eval();
      gtkw->dump(clk);
      ram->clk = !ram->clk;
      clk++;
      j++;
    }

  for(i = 0; i < 6; i++)
    {
      ram->rst = i == 2;
      ram->eval();
      gtkw->dump(clk);
      ram->clk = !ram->clk;
      clk++;
    }
  
  if(Verilated::gotFinish())
    exit(0);
  gtkw->close();
  exit(0);

  return 0;
}

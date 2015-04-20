/* verilator lint_off WIDTH */
module cpu
  #(parameter data_width = 4,
    parameter addr_width = 4,
    parameter op_width   = 4,
    parameter op_param   = 4,
    parameter pc_width   = 8)
   (input wire clk, rst,
    input wire [(op_width+op_param)-1:0] instruction,
    output reg [data_width-1:0]          a
    );
   
   reg [data_width-1:0]                  datain;
   reg [data_width-1:0]                  dataout;
   reg [addr_width-1:0]                  addr;
   reg [op_width-1:0]                    currentState, nextState;
   reg [pc_width-1:0]                    pc;
   reg [(op_width+op_param)-1:0]         ir;
   reg                                   dir;   
   
   parameter //Ciclos del CPU
     START = 0, FETCH = 1, DECODE = 2, EXECUTE = 3, WAIT = 4;
   
   parameter //Operaciones
     ldaxx = 0, ldxxa = 1, andaxx = 2, addaxx = 3,
     subaxx = 4, jzxx = 5, jmpxx = 6, nop = 7,
     movaxx = 8, nandaxx = 9, oraxx = 10, noraxx = 11,
     xoraxx = 12, xnoraxx = 13, nota = 14;

   ram cpu_mem(.clk(clk), .rst(rst), .rw(dir), .addr(addr),
               .datain(datain), .dataout(dataout));
   
   always @(posedge clk, posedge rst) 
     if(rst) currentState <= START;
     else    currentState <= nextState;

   always @(currentState)
     case (currentState)
       START:  nextState = FETCH;
       FETCH:  nextState = DECODE;
       DECODE: 
         case(ir[(op_width+op_param)-1:op_width])
           nop:
             nextState = WAIT;
           default:
             nextState = EXECUTE;
         endcase // case (ir[(op_width+op_param)-1:op_width])
       EXECUTE: nextState = WAIT;
       WAIT: nextState = FETCH;
     endcase // case (currentState)
   
   always @(posedge clk)
     case (currentState)
       START:
         begin
            dir <= 0;
            pc <= 0;
            ir <= 0;
            a <= 0;
            datain <= 0;
            addr <= 0;
         end // case: START
       FETCH:
         begin
            dir <= 0;
            pc <= pc + 1;
            ir <= instruction;
            addr <= instruction[op_width-1:0];
         end // case: FETCH
       EXECUTE:
         begin
            dir <= 0;
            addr <= ir[op_width-1:0];
            case(ir[(op_width+op_param)-1:op_width])
              ldaxx:
                begin                 
                   a <= dataout;
                end
              ldxxa:
                begin
                   dir <= 1;
                   datain <= a;
                end
              andaxx:
                begin
                   a <= (a & dataout);
                end
              addaxx:
                begin
                   a <= (a + dataout);
                end
              subaxx:
                begin
                   a <= (a - dataout);
                end
              jzxx:
                begin
                   if(a === 4'b0) // Importante
                     pc <= addr;
                end
              jmpxx:
                begin
                   pc <= addr;                   
                end
              movaxx:
                begin
                   a <= ir[op_width-1:0];
                end
              nandaxx:
                begin
                   a <= ~(a & dataout);
                end              
              oraxx:
                begin
                   a <= (a | dataout);
                end
              noraxx:
                begin
                   a <= ~(a | dataout);
                end
              xoraxx:
                begin
                   a <= (a ^ dataout);
                end
              xnoraxx:
                begin
                   a <= ~(a ^ dataout);
                end
              nota:
                begin
                   a <= ~a;
                end
            endcase // case (ir[(op_width+op_param)-1:op_width])
         end // case: EXECUTE
       WAIT:
         begin
         end // case: WAIT
     endcase // case (nextState)
   
endmodule // cpu

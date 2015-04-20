module ram
  #(parameter data_width = 4,
    parameter addr_width = 4)
   (input wire clk, rst, rw,
    input wire [addr_width-1:0] addr,
    input wire [data_width-1:0] datain,
    output reg [data_width-1:0] dataout
    );
   reg [data_width-1:0]         data [0:(addr_width*addr_width)-1];
   reg [data_width-1:0]         i;

   parameter
     WRITE = 1, READ = 0;
   
   always @(posedge clk, posedge rst)
     if (rst)
       begin
          for( i = 0 ; i < (addr_width*addr_width)-1 ; i = i + 1 )
            data[i] <= 0;
          data[(addr_width*addr_width)-1] <= 0;      
          dataout <= 0;                             
       end //end if (rst)
     else
       case(rw)
         WRITE:
           begin
              data[addr] <= datain;
              dataout <= datain;
           end
         READ:
           begin
              dataout <= data[addr];
           end
       endcase // case (rw)
   
endmodule // ram

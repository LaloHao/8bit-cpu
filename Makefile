MAIN = ram
TESTBENCH = ${MAIN}_tb.cpp

all: compile run simulate

# Agregar la variable de entorno VERILATOR_ROOT=/usr/share/verilator

compile:
	/usr/bin/verilator -Wall --cc --trace ${MAIN}.v --exe ${TESTBENCH}
	make -j -C obj_dir/ -f V${MAIN}.mk V${MAIN}

run:
	obj_dir/V${MAIN}

simulate:
	gtkwave ${MAIN}.vcd

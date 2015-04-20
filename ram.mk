MAIN = ram
TESTBENCH = ${MAIN}_tb.cpp

all: compile run simulate

compile:
	/usr/bin/verilator -Wall --cc --trace ${MAIN}.v --exe ${TESTBENCH}
	sed 's/VERILATOR_ROOT = \/usr\/bin/VERILATOR_ROOT = \/usr\/share\/verilator/' obj_dir/V${MAIN}.mk > V${MAIN}.mk
	rm obj_dir/V${MAIN}.mk
	mv V${MAIN}.mk obj_dir/
	make -j -C obj_dir/ -f V${MAIN}.mk V${MAIN}

run:
	obj_dir/V${MAIN}

simulate:
	gtkwave ${MAIN}.vcd

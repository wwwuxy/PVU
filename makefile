# project source
TOPNAME = PvuTop
VSRCS += $(shell find $(abspath ./vsrc) -name "*.sv")
CSRCS += $(shell find $(abspath ./csrc) -name "*.cpp")


# verilator flags
VERILATOR_FLAGS += -Wall --cc --trace --exe --build --top-module $(TOPNAME)
VERILATOR_FLAGS += -Wno-DECLFILENAME -Wno-PINCONNECTEMPTY -Wno-UNUSEDSIGNAL -Wno-UNOPTFLAT
VERILATOR_FLAGS += --threads-dpi all
VERILATOR_FLAGS += -j 16




verilog:
	sbt -DparallelExecution=true -DmaxThreads=14 "runMain pvu.Elaborate"
	python3 clean_line.py

run:${CSRCS} ${VSRCS}
	verilator ${VERILATOR_FLAGS} ${CSRCS} ${VSRCS}
	./obj_dir/VPvuTop

wave:
	gtkwave *.vcd

git:
	git add .
	git commit

push:
	git push

count:
	@echo "Number of Scala files:"
	@echo $(shell find . -type f -name "*.scala" | wc -l)
	@echo "Total lines of Scala code:"
	@echo $(shell find src -name "*.scala" -type f | xargs cat | wc -l)
	@echo "Total lines of Verilog code:"
	@echo $(shell find vsrc -name "*.sv" -type f | xargs cat | wc -l)


debug:
	make verilog
	make run


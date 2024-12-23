BUILD_DIR = ./build
PRG = PvuTop

verilog:
	sbt -DparallelExecution=true -DmaxThreads=12 "runMain pvu.$(PRG)"
	python3 clean_line.py
git:
	git add .
	git commit

push:
	git push

count:
	@echo "Total lines of Scala code:"
	@echo $(shell find src -name "*.scala" -type f | xargs cat | wc -l)


defalut:
	verilog

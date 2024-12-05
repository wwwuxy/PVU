BUILD_DIR = ./build


verilog:
	mkdir -p $(BUILD_DIR)
	-rm $(BUILD_DIR)/* -r
	mill -i pvu.runMain pvu.Elaborate --target-dir $(BUILD_DIR)

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

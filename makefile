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

defalut:
	verilog
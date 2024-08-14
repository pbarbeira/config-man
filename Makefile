bin=config-man
var= $(shell pwd)

build:
	@g++ -o $(bin) boot.c

run: build
	@./$(bin) $(var)

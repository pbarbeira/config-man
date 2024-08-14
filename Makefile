bin=config-man
var= $(shell pwd)

build:
	@gcc -o $(bin) boot.c

run: build
	@./$(bin) $(var)

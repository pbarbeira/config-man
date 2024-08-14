bin=config-man
var= $(shell pwd)/src

build:
	@g++ -o config-boot boot.cpp

run: build
	@./config-boot $(var)

boot:
	@g++ -o config-man config-boot.cpp

boot-clean:
	@rm -rf config-boot config-boot.*

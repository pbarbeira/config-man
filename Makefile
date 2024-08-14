bin=config-man
var= $(shell pwd)/src

build:
	@g++ -o config-boot boot.cpp

create: build
	@./config-boot $(var)

boot:
	@g++ -o config-man config-boot.cpp

clean:
	@rm -rf config-boot config-boot.*

run: create boot clean

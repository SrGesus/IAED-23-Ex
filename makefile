CC = gcc
CFLAGS = -Wall -Wextra -ansi -pedantic

OUTPUT ?= $(shell bash -c 'read -p "Do you wish output to a file? (y/n): " input; echo $$input')

all: $(wildcard */*/*.c) $(wildcard */*.c)
	@echo Choose one of the following:
	@for f in $^; do echo $${f::-2}; done

%: %.c
	$(CC) $(CFLAGS) $< -o $@
	@echo 
	@if [ "$(OUTPUT)" = "y" ]; then echo Outputing $@ to $@.txt...; $@ > $@.txt; else echo $@ Output:; $@; fi
	@echo
	@echo "Cleaning Binaries..."
	rm $@

clean: 
	rm -rf */*/ex*[^c]

CC = gcc
CFLAGS = -Wall -Wextra -ansi -pedantic

INPUT_FILE ?= $(shell bash -c 'read -p "Enter the input file path (empty if None): " input; if [ "$$input" = "" ]; then echo NULL; else echo $$input; fi')
INPUT := $(INPUT_FILE)

all: $(wildcard */*.c)
	@echo Choose one of the following:
	@for f in $^; do echo $${f::-2}; done

%: %.c
	$(CC) $(CFLAGS) $< -o $@
	@echo
	@echo $@ Output:
	if [ "$(INPUT)" = "NULL" ]; then $@; else $@ < $(INPUT); fi
	@echo
	@echo "Cleaning Binaries..."
	rm $@

clean: 
	rm -rf */ex*[^c]
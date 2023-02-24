CC = gcc
CFLAGS = -Wall -Wextra -Werror -ansi -pedantic

all: $(wildcard */*.c)
	@echo Choose one of the following:
	@for f in $^; do echo $${f::-2}; done

%: %.c
	$(CC) $(CFLAGS) $< -o $@
	@echo 
	@echo $@ Output:
	@$@
	@echo
	@echo "Cleaning Binaries..."
	rm -rf */ex*[^c]
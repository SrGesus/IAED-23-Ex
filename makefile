CC = gcc
CFLAGS = -Wall -Wextra -Werror -ansi -pedantic

all: $(wildcard */*.c)
	@echo Choose one of the following:
	@for f in $^; do echo $${f::-2}; done

%: %.c clean
	$(CC) $(CFLAGS) $< -o $@
	@echo 
	@echo $@ Output:
	@$@

clean: 
	rm -rf */ex*[^c]
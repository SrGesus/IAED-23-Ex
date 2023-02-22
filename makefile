CC = gcc
CFLAGS = -Wall -Wextra -Werror -ansi -pedantic

all: $(wildcard */*.c)
	@echo Choose one of the following:
	@for f in $^; do echo $$f | cut -c -15 ; done

%: %.c clean
	$(CC) $(CFLAGS) $< -o $@
	$@

clean: 
	rm -rf */ex*[^c]
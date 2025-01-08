all: swap

swap:
	gcc -g -gdwarf-4 -o swap swap.c

asm:
	gcc -S -masm=intel -g swap.c

clean:
	rm swap

all: swap

ASMFLAG= -S -masm=intel -fno-stack-protector -g0 -s
DBGFLAG= -g -O0

swap:
	gcc -g -gdwarf-4 -o swap swap.c

asm:
	gcc $(ASMFLAG) -O0 swap.c

clean:
	rm swap

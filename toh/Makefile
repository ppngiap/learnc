all: toh

toh:
	gcc -g -gdwarf-4 -o toh toh.c

asm:
	gcc -S -masm=intel -g toh.c

clean:
	rm toh

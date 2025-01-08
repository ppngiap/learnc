all: toh

toh:
	gcc -g -gdwarf-4 -o toh toh.c

clean:
	rm toh

#include <stdio.h>

void bad_swap(int x, int y) /* WRONG */
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("%d", temp);
}


void ptr_swap(int *px, int *py) /* interchange *px and *py */
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
	
	printf("%d", temp);
}

int main()
{
	int a = 5;
	int b = 6;

	bad_swap(a, b);

	ptr_swap(&a, &b);

	return 0;
}

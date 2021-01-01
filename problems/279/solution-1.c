#include <stdio.h>

int power(int base, int power)
{
	int result = 1;
	for(int i = 0; i < power; i++)
		result *= base;
	return result;
}

int main()
{
	int a, x, n;
	scanf("%d %d %d", &a, &x, &n);
	printf("%d", power(x + a, n));
    return 0;
}
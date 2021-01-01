#include<iostream>

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
	std::cin >> a >> x >> n;	
	std::cout << power(x + a, n);
    return 0;
}
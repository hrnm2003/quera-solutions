#include<iostream>

int factorial(int number)
{
    int i, result = 1;
    for(i = 1; i <= number; i++)
        result *= i;
    return result;
}

int power(int base, int power)
{
	int result = 1;
	for(int i = 0; i < power; i++)
		result *= base;
	return result;
}

int main()
{
	int a, x, n, sum = 0, k;
	std::cin >> a >> x >> n;
	for(k = 0; k <= n; k++)
		sum += factorial(n) / (factorial(n - k) * factorial(k)) * power(x, k) * power(a, (n - k));
	
	std::cout << sum;
    return 0;
}
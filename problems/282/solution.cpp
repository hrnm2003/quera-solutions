#include<iostream>

int main()
{
    int i, n, sum = 0;
    std::cin >> n;
    for(i = 1; i < n; i++)
        if(n % i == 0) {
            sum += i;

    if(sum == n)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}

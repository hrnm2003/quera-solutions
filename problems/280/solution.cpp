#include<iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a * a + b * b == c * c)
        std::cout << "YES";
    else if(a * a + c * c == b * b)
        std::cout << "YES";
    else if(b * b + c * c == a * a)
        std::cout << "YES";
    else
        std::cout << "NO";
    
	return 0;
}
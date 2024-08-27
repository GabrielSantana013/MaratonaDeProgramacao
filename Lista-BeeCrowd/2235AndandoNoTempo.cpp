#include <iostream>

int main()
{

    int a, b, c;
    std::cin >> a >> b >> c;

    if (a == b || a == c || b == c || a + b == c || a + c == b || b + c == a)
    {
        std::cout << "S" << std::endl;
    } 
    else
    {
        std::cout << "N" << std::endl;
    }

    return 0;
}
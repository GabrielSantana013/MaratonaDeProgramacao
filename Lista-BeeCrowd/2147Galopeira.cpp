#include <iostream>

int main(){

    int C;
    std::cin >> C;

    for(int i = 0; i < C; i++)
    {
        std::string s;
        std::cin>>s;
        std::cout << std::fixed;
        std::cout.precision(2);
        std::cout << s.size() * 0.01 << std::endl;
    }

    return 0;
}
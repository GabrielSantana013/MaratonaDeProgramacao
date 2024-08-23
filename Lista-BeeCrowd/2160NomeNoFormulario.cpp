#include <iostream>

int main(){

    std::string L;
    std::getline(std::cin, L);

    if(L.size() <=80)
    {
        std::cout << "YES" << std::endl;
    } 
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
#include <iostream>

int main(){

    int n;
    std::string pergunta;
    std::cin>>n;
    std::cin.ignore();

    for(int i = 0; i < n; i++)
    {
        std::getline(std::cin, pergunta);
        std::cout<<"I am Toorg!"<<std::endl;
    }

    return 0;
}
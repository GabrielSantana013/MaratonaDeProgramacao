#include <iostream>

int main(){

    unsigned long long int p;
    std::cin>>p;

    while(p != -1)
    {
        if(p == 0)
        {
            std::cout<<0<<std::endl;
        }
        else
        {
            std::cout<<p-1<<std::endl;
        }
        std::cin>>p;
    }

    return 0;
}
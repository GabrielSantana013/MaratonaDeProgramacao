#include <iostream>
#include <cmath>

int main(){

    int n;
    while(std::cin>>n)
    {
        if(n == 1)
        {
            std::cout<<"0"<<std::endl;
        }
        else
        {
            std::cout<<std::log(n)/log(2)<<std::endl;
        }
    }

    return 0;
}
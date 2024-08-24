#include <iostream>

int main(){

    int N, H, anterior;

    bool padrao = true, pico = false, vale = false;
    std::cin>>N;

    std::cin>>anterior;

    for(int i = 0; i < N-1; i++)
    {
        std::cin>> H;
        if(H>anterior && !pico)
        {
            pico = true;
            vale = false;
        }
        else if(H<anterior && !vale)
        {   
            pico = false;
            vale = true;
        }
        else
        {
            padrao = false;
            break;
        }
        anterior = H;
    }

    std::cout<<padrao<<std::endl;

    return 0;
}
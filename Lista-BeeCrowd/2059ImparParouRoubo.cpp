/*

*/

#include <iostream>

int main(){

    int p, j1,j2, r, a;

    std::cin>>p>>j1>>j2>>r>>a;

    if(r)
    {
        if(a)
        {
            std::cout<<"Jogador 2 ganha!"<<std::endl;
        }
        else
        {
            std::cout<<"Jogador 1 ganha!"<<std::endl;
        }
    }
    else
    {
        if(a)
        {
            std::cout<<"Jogador 1 ganha!"<<std::endl;
        }
        else
        {
        int soma = j1+j2;
        int parouimpar;
        if((j1+j2)%2)
        {
            parouimpar = 0;
        }
        else
        {
            parouimpar = 1;
        }
        if(parouimpar == p)
        {
            std::cout<<"Jogador 1 ganha!"<<std::endl;
        }
        else
        {
            std::cout<<"Jogador 2 ganha!"<<std::endl;
        }
        }

    }


    return 0;
}
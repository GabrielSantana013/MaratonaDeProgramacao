/*

*/

#include <iostream>

int main(){
    int N; std::cin>>N;
    std::string j1,j2;

    for(int i = 0; i <N; i++)
    {
        std::cin>>j1>>j2;

        if(j1 == "ataque")
        {
            if(j2 == j1)
            {
                std::cout<<"Aniquilacao mutua"<<std::endl;
            }
            else if(j2 == "pedra" || j2 == "papel")
            {
                std::cout<<"Jogador 1 venceu"<<std::endl;
            }
        }
        else if(j1 == "papel")
        {
            if(j2 == j1)
            {
                std::cout<<"Ambos venceram"<<std::endl;
            }
            else if(j2 == "ataque" || j2 == "pedra")
            {
                std::cout<<"Jogador 2 venceu"<<std::endl;
            }
        }
        else
        {
            if(j2 == "ataque")
            {
                std::cout<<"Jogador 2 venceu"<<std::endl;
            }
            else if(j2 == "pedra")
            {
                std::cout<<"Sem ganhador"<<std::endl;
            }
            else
            {
                std::cout<<"Jogador 1 venceu"<<std::endl;
            }
        }

    }
    return 0;
}
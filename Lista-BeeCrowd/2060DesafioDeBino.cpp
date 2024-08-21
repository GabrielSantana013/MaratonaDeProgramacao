/*

*/

#include <iostream>

int main(){

    int N; std::cin>>N;

    int mult2 = 0, mult3 = 0, mult4 = 0, mult5 = 0;
    int numeros[1001];
    for(int i = 0; i < N; i++)
    {
        std::cin>>numeros[i];
    }

    for(int i = 0; i < N; i++)
    {
        if(numeros[i]%2==0)
        {
            mult2++;
        }
        if(numeros[i]%3==0)
        {
            mult3++;
        }
        if(numeros[i]%4==0)
        {
            mult4++;
        }
        if(numeros[i]%5==0)
        {
            mult5++;
        }
    }

    std::cout<<mult2<<" Multiplo(s) de 2"<<std::endl;
    std::cout<<mult3<<" Multiplo(s) de 3"<<std::endl;
    std::cout<<mult4<<" Multiplo(s) de 4"<<std::endl;
    std::cout<<mult5<<" Multiplo(s) de 5"<<std::endl;

    return 0;
}
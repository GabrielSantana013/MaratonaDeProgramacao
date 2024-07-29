/*

Ler um número inteiro N e calcular todos os seus divisores.

Entrada
O arquivo de entrada contém um valor inteiro.

Saída
Escreva todos os divisores positivos de N, um valor por linha.

*/

#include <iostream>

void divisores(int N, int i)
{
    if(N==i){std::cout<<N<<std::endl;}
    else if(N%i==0){std::cout<<i<<std::endl; return divisores(N, i+1);}
    else{return divisores(N, i+1);}
}

int main(){

    int N; std::cin>>N;
    int i = 1;
    divisores(N, i);
    return 0;
}
/*

Ler um valor N. Calcular e escrever seu respectivo fatorial. Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.

Entrada
A entrada contém um valor inteiro N (0 < N < 13).

Saída
A saída contém um valor inteiro, correspondente ao fatorial de N.
*/

#include <iostream>

int fatorial(int N){

    if(N==1){return 1;}
    else{return N*fatorial(N-1);}
}

int main(){

    int N;
    std::cin>>N;

    std::cout<<fatorial(N)<<std::endl;

    return 0;
}
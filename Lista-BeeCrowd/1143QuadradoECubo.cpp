/*

Escreva um programa que leia um valor inteiro N (1 < N < 1000). 
Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.

Entrada
O arquivo de entrada contém um número inteiro positivo N.

Saída
Imprima a saída conforme o exemplo fornecido.

*/

#include <iostream>

int main(){

    int N;
    std::cin>>N;

    for(int i = 1; i <=N; i++)
    {
        std::cout<<i<<" "<<i*i<<" "<< i*i*i<<std::endl;
    }

    return 0;
}
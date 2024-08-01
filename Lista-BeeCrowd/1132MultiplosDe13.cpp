/*

Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não são múltiplos de 13 entre X e Y, 
incluindo ambos.

Entrada
O arquivo de entrada contém 2 valores inteiros quaisquer, não necessariamente em ordem crescente.

Saída
Imprima a soma de todos os valores não divisíveis por 13 entre os dois valores lidos na entrada, inclusive ambos se for o caso.

*/

#include <iostream>

int main(){

    int x1,x2,total=0;
    std::cin>>x1>>x2;

    if(x1>x2)
    {
        x1 = x1^x2;
        x2 = x1^x2;
        x1 = x1^x2;
    }

    for(int i = x1; i<=x2;i++)
    {
        if(i%13!=0){total += i;}
    }
    std::cout<<total<<std::endl;

    return 0;
}
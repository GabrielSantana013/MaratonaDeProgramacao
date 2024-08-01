/*
Escreva um programa que leia 2 valores X e Y e que imprima todos os valores entre eles cujo resto da divisão dele por 5 for igual a 2 ou igual a 3.

Entrada
O arquivo de entrada contém 2 valores positivos inteiros quaisquer, não necessariamente em ordem crescente.

Saída
Imprima todos os valores conforme exemplo abaixo, sempre em ordem crescente.

*/

#include <iostream>

int main(){

    int x, y;
    std::cin>>x>>y;

    if(x>y)
    {
        x = x^y;
        y = x^y;
        x = x^y;
    }

    for(int i = x+1; i<y; i++)
    {
        if(i%5 == 2 || i %5 ==3)
        {
            std::cout<<i<<std::endl;
        }
    }

    return 0;
}
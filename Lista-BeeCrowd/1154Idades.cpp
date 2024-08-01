/*
Faça um algoritmo para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo. 
O último dado, que não entrará nos cálculos, contém o valor de idade negativa. 
Calcular e imprimir a idade média deste grupo de indivíduos.

Entrada
A entrada contém um número indeterminado de inteiros. A entrada será encerrada quando um valor negativo for lido.

Saída
A saída contém um valor correspondente à média de idade dos indivíduos.

A média deve ser impressa com dois dígitos após o ponto decimal.
*/

#include <iostream>
#include <iomanip>


int main(){

    int entrada;
    float media = 0, i=0;

    std::cin>>entrada;

    while(entrada>0)
    {
        i++;
        media += entrada;
        std::cin>>entrada;
    }

    std::cout<<std::fixed<<std::setprecision(2)<<media/i<<std::endl;
    return 0;
}
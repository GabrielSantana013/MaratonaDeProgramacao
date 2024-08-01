/*
Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?

Entrada
Não há nenhuma entrada neste problema.

Saída
A saída contém um valor correspondente ao valor de S.
O valor deve ser impresso com dois dígitos após o ponto decimal.
*/

#include <iostream>
#include <iomanip>

int main(){

    float S= 0.0, j=1.0;

    for(float i = 1.0; i<=39; i+=2.0)
    {
        S += i/j;
        j *=2.0;
    }

    std::cout<<std::fixed<<std::setprecision(2)<<S<<std::endl;

    return 0;
}
/*
Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. 
Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.

Entrada
A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100), 
indicando o número de casos de teste da entrada. Cada uma das N linhas seguintes contém um valor inteiro X (1 < X ≤ 107), 
que pode ser ou não, um número primo.

Saída
Para cada caso de teste de entrada, imprima a mensagem “X eh primo” ou “X nao eh primo”, 
de acordo com a especificação fornecida.
*/

#include <iostream>
#include <cmath>

bool primo(int X, int div)
{
    if(div > static_cast<int> (sqrt(X))){return true;}
    if(X%div == 0){return false;}
    return primo(X, div+1);
}

int main(){

    int N; std::cin>>N;

    for(int i = 0; i < N; i++)
    {
        int X; std::cin>>X;
        int div = 2;
        if(primo(X, div)){std::cout<<X<<" eh primo"<<std::endl;}
        else{std::cout<<X<<" nao eh primo"<<std::endl;}
    }
    return 0;
}
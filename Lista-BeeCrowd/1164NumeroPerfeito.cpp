/*

Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios (excluindo ele mesmo) 
é igual ao próprio número. Por exemplo o número 6 é perfeito, pois 1+2+3 é igual a 6. 
Sua tarefa é escrever um programa que imprima se um determinado número é perfeito ou não.

Entrada
A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 20), 
indicando o número de casos de teste da entrada. Cada uma das N linhas seguintes contém um valor inteiro X (1 ≤ X ≤ 108), 
que pode ser ou não, um número perfeito.

Saída
Para cada caso de teste de entrada, imprima a mensagem “X eh perfeito” ou “X nao eh perfeito”, de acordo com a especificação fornecida.
*/

#include <iostream>
#include <cmath>
int main(){

    int N, X;
    std::cin>>N;

    for(int i = 0; i < N; i++)
    {
        int soma=1;
        std::cin>>X;
        int sqrtX = static_cast<int> (sqrt(X));
        if(X == 1){std::cout<<X<<" nao eh perfeito"<<std::endl; continue;}
        for(int j = 2; j <= sqrtX; j++)
        {
            if(X%j == 0)
            {
                soma+=j;
                if (j != X / j) 
                { 
                    soma += X / j;
                }
            }
        }
        if(soma == X){std::cout<<X<<" eh perfeito"<<std::endl;}
        else{std::cout<<X<<" nao eh perfeito"<<std::endl;}
    }

    return 0;
}
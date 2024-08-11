/*
A ECI (Editio Chronica Incredibilis ou Editora de Crônicas Incríveis) é muito tradicional quando se trata de numerar as páginas de seus 
livros. Ela sempre usa a numeração romana para isso. E seus livros nunca ultrapassam as 999 páginas pois, quando necessário, 
dividem o livro em volumes.

Você deve escrever um programa que, dado um número arábico, mostra seu equivalente na numeração romana.

Lembre que I representa 1, V é 5, X é 10, L é 50, C é 100, D é 500 e M representa 1000.

Entrada
A entrada é um número inteiro positivo N (0 < N < 1000).

Saída
A saída é o número N escrito na numeração romana em uma única linha. Use sempre letras maiúsculas.
*/

#include <iostream>

int main(){

    int N; std::cin>>N;
    int numeros[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    std::string respostaRomanos;

    int i = 0;

    while(N>0)
    {
        if(N>=numeros[i])
        {
            N -= numeros[i];
            respostaRomanos += romanos[i];
        }
        else
        {
            i++;
        }
        
    }
    std::cout<<respostaRomanos<<std::endl;
    return 0;
}
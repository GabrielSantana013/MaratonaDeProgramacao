/*
Neste programa seu trabalho é ler um valor inteiro que será o tamanho da matriz quadrada (largura e altura) 
que será preenchida da seguinte forma: a parte externa é preenchida com 0, a parte interna é preenchida com 1, 
a diagonal principal é preenchida com 2, a diagonal secundária é preenchida com 3 e o ponto central contém o valor 4, 
conforme os exemplos abaixo.

Obs: o quadrado com '1' sempre começa na posição tamanho/3, tanto na largura quanto quanto na altura. 
A linha e a coluna começam em zero (0).

Entrada
A entrada contém vários casos de teste e termina com EOF (fim de arquivo. Cada caso de teste consiste de um valor inteiro ímpar N (5 ≤ N ≤ 101) 
que é o tamanho da matriz.

Saída
Para cada caso de teste, imprima a matriz correspondente conforme o exemplo abaixo. Após cada caso de teste, imprima uma linha em branco.
*/

#include <iostream>

int main() {
    int N;

    while (std::cin >> N) {
        int meio = N / 2;
        int rodaMeio = N / 3;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == meio && j == meio) {
                    std::cout << "4";
                } else if (i >= rodaMeio && i < N - rodaMeio && j >= rodaMeio && j < N - rodaMeio) {
                    std::cout << "1";
                } else if (i == j) {
                    std::cout << "2";
                } else if (j + i == N - 1) {
                    std::cout << "3";
                } else {
                    std::cout << "0";
                }

               
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
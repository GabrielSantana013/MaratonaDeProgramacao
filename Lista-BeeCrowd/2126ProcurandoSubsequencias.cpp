/*
Dados dois números naturais N1 e N2, diz-se que N1 é subsequência contígua de N2 se todos os dígitos de N1 aparecem, na mesma ordem e de forma
contígua, em N2. Crie uma aplicação que leia dois números naturais e diga se o primeiro é uma subsequência contígua do segundo.
Entrada

A entrada é composta por vários casos de teste e termina com final de arquivo (EOF). A primeira linha de cada entrada é composta por um valor
natural N1(1 < N1 < 1010), a segunda linha é composta por um valor N2( N1 < N2 < 1032).
Saída

Para cada caso de teste imprima a quantidade de subsequências contíguas e a posição onde a subsequência é iniciada, caso exista mais de uma
subsequência, imprima onde é iniciada a última subsequência. Caso não exista subsequência, imprima "Nao existe subsequencia". 
Mostre o resultado conforme o exemplo de saída.
*/
#include <iostream>
#include <string>

int main() {
    std::string n1, n2;
    int contaCaso = 1;

    while (std::cin >> n1 >> n2) {
        std::string::size_type posicaoFinal = std::string::npos;
        int cont = 0;
        
        for (std::string::size_type i = 0; i <= n2.size() - n1.size(); i++) {
            if (n2.substr(i, n1.size()) == n1) {
                cont++;
                posicaoFinal = i + 1; // +1 porque queremos a posição em 1-index
            }
        }
        
        std::cout << "Caso #" << contaCaso << ":" << std::endl;
        if (cont == 0) {
            std::cout << "Nao existe subsequencia" << std::endl;
        } else {
            std::cout << "Qtd.Subsequencias: " << cont << std::endl;
            std::cout << "Pos: " << posicaoFinal << std::endl;
        }
        std::cout<<std::endl;
        contaCaso++;
    }

    return 0;
}

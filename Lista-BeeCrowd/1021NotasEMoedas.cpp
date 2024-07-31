/*

Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. 
A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2. 
As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, 
conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.

*/

#include <iostream>
#include <cmath>

int main(){

    int cem,cinquenta,vinte,dez,cinco,dois;
    int um, cCinquenta,cVinteCinco,cDez,cCinco,cUm;

    float entrada; std::cin>>entrada;

    int dinheiro = (int)entrada;
    entrada -= dinheiro;

    cem = dinheiro/100;
    dinheiro = dinheiro %100;
    cinquenta = dinheiro /50;
    dinheiro = dinheiro%50;
    vinte = dinheiro /20;
    dinheiro = dinheiro %20;
    dez = dinheiro / 10;
    dinheiro = dinheiro %10;
    cinco = dinheiro /5;
    dinheiro = dinheiro %5;
    dois = dinheiro/2;
    dinheiro = dinheiro %2;
    um = dinheiro/1;    

    int centavos = std::round(entrada*100);

    cCinquenta = centavos /50;
    centavos = centavos%50;
    cVinteCinco = centavos /25;
    centavos = centavos %25;
    cDez = centavos / 10;
    centavos = centavos %10;
    cCinco = centavos /5;
    centavos = centavos %5;
    cUm = centavos/1;
    
    std::cout<<"NOTAS:"<<std::endl;
    std::cout<<cem<<" nota(s) de R$ 100.00"<<std::endl;
    std::cout<<cinquenta<<" nota(s) de R$ 50.00"<<std::endl;
    std::cout<<vinte<<" nota(s) de R$ 20.00"<<std::endl;
    std::cout<<dez<<" nota(s) de R$ 10.00"<<std::endl;
    std::cout<<cinco<<" nota(s) de R$ 5.00"<<std::endl;
    std::cout<<dois<<" nota(s) de R$ 2.00"<<std::endl;

    std::cout<<"MOEDAS:"<<std::endl;
    std::cout<<um<<" moeda(s) de R$ 1.00"<<std::endl;
    std::cout<<cCinquenta<<" moeda(s) de R$ 0.50"<<std::endl;
    std::cout<<cVinteCinco<<" moeda(s) de R$ 0.25"<<std::endl;
    std::cout<<cDez<<" moeda(s) de R$ 0.10"<<std::endl;
    std::cout<<cCinco<<" moeda(s) de R$ 0.05"<<std::endl;
    std::cout<<cUm<<" moeda(s) de R$ 0.01"<<std::endl;

    return 0;
}
/*Alguns algoritmos de processamento de imagem exigem um pré-processamento no qual é 
necessário transformar uma imagem colorida em uma imagem em tons de cinza. 
Esta conversão pode ser realizada de diversas maneiras, dependendo do resultado que se pretende obter.

Para preservar a percepção das cores básicas pelo olho humano, uma conversão apropriada seria tomar 30% da componente vermelha (R), 
59% da componente verde (G) e 11% da componente azul (B). Em termos matemáticos,

P = 0, 30R + 0, 59G + 0, 11B

Outras abordagens possíveis seriam determinar o valor de P através da média aritmética das três 
componentes ou atribuir a P os valores da maior ou da menor entre as três componentes.

Dadas as componentes RGB de um pixel da imagem colorida, determine o valor do pixel P da imagem em tons de cinza correspondente, 
determinada a conversão a ser utilizada. Despreze a parte decimal do resultado, caso exista. */

#include <iostream>
#include <bits/stdc++.h>

int main(){

    int T;
    short r,g,b;
    std::string method;
    std::cin>>T;

    bool last = false;
    for(int i = 0; i < T; i++)
    {
        if(i == T-1)
            last = true;
        std::cin>>method>>r>>g>>b;

        if(method == "min")
        {
            std::cout<< "Caso #"<<i+1<<": "<<std::min({r,g,b})<<std::endl;
        }
        else if(method == "max")
        {
            std::cout<< "Caso #"<<i+1<<": "<<std::max({r,g,b})<<std::endl;
        }
        else if(method == "mean")
        {
            std::cout<< "Caso #"<<i+1<<": "<<(r+g+b)/3<<std::endl;
        }
        else
        {
            std::cout<< "Caso #"<<i+1<<": "<<int(r*0.30 + g*0.59 + b*0.11)<<std::endl;
        }	
    }

    return 0;
}
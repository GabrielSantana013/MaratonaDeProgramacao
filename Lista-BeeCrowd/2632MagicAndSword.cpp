/*
No tower defense Magic and Sword, o jogador pode lançar magias de área para derrotar as unidades inimigas. 
As magias são elementais: fogo, água, ar e terra, e a região afetada é determinada por um círculo 
cujo raio depende do nível da magia.

As unidades inimigas são delimitadas por um retângulo de largura w e altura h, com canto inferior esquerdo posicionado no ponto (x0, y0). 
O inimigo sofrerá dano caso seu retângulo delimitador tenha qualquer intercessão com a área deﬁnida pelo círculo da magia.

Dada a posição e o retângulo delimitador da unidade inimiga, o centro da explosão e o identiﬁcador e o nível da magia, 
determine o dano sofrido pela unidade. Caso a unidade esteja fora do alcance da magia, o dano sofrido é igual a zero.
*/

#include <iostream>
#include <bits/stdc++.h>
#define dano 3

// Função para verificar se o círculo toca ou intercepta o retângulo
bool doesCircleTouchRectangle(double x0, double y0, double w, double h,
                              double cx, double cy, double r) {
    //FIXME: Implementar a função

    

}

int main(){

    int h, w, x0, y0, magicLvl, mX,mY;
    int t; std::cin>>t;
    std::string magicName;

    int fireStats[4] = {20, 30, 50, 200};
    int waterStats[4] = {10, 25, 40, 300};
    int airStats[4] = {25, 55, 70, 100};
    int earthStats[4] = {18, 38, 60, 400};

    for(int i = 0; i < t; i++)
    {
        std::cin>>w>>h>>x0>>y0;
        std::cin>>magicName>>magicLvl>>mX>>mY;

        double radius = 0;
        int damage = 0;

        if (magicName == "fire") {
            radius = fireStats[magicLvl];
            damage = fireStats[dano];
        } else if (magicName == "water") {
            radius = waterStats[magicLvl];
            damage = waterStats[dano];
        } else if (magicName == "air") {
            radius = airStats[magicLvl];
            damage = airStats[dano];
        } else if (magicName == "earth") {
            radius = earthStats[magicLvl];
            damage = earthStats[dano];
        }

        if (doesCircleTouchRectangle(x0, y0, w, h, mX, mY, radius)) {
            std::cout << damage << "\n";
        } else {
            std::cout << 0 << "\n";
        }

    }

}
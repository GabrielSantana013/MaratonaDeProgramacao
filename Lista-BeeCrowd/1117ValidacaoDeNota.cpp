/*

Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a média semestral. 
Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). 
Cada nota deve ser validada separadamente.

Entrada
A entrada contém vários valores reais, positivos ou negativos. 
O programa deve ser encerrado quando forem lidas duas notas válidas.

Saída
Se uma nota inválida  for lida, deve ser impressa a mensagem "nota invalida".
Quando duas notas válidas forem lidas, deve ser impressa a mensagem "media = " seguido do valor do cálculo. 
O valor deve ser apresentado com duas casas após o ponto decimal.

*/

#include <iostream>
#include <iomanip>

int main(){
    int validas = 0;
    float nota, media;
    while(validas<2)
    {
        std::cin>>nota;
        if(nota>0 && nota<11){media +=nota; validas++;}
        else{std::cout<<"nota invalida"<<std::endl;}
    }
    std::cout<<std::fixed<<std::setprecision(2)<<"media = "<<(float)media/2<<std::endl;
    return 0;
}
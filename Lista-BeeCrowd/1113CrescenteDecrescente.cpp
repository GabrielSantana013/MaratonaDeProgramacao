/*
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. 
Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente 
ou decrescente.

Entrada
A entrada contém vários casos de teste. 
Cada caso contém dois valores inteiros X e Y. 
A leitura deve ser encerrada ao ser fornecido valores iguais para X e Y.

Saída
Para cada caso de teste imprima “Crescente”, caso os valores tenham sido digitados na ordem crescente,
caso contrário imprima a mensagem “Decrescente”.

*/

#include <iostream>

int main(){
    int x,y;
    std::cin>>x>>y;

    while(x!=y)
    {
        if(x>y){std::cout<<"Decrescente"<<std::endl;}
        else{std::cout<<"Crescente"<<std::endl;}

        std::cin>>x>>y;
    } 
    return 0;
}
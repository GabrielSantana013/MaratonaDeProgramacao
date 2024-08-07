/*

Escreva um programa para ler as notas da primeira e a segunda avaliação de um aluno. Calcule e imprima a média semestral. 
O programa só deverá aceitar notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). 
Cada nota deve ser validada separadamente.

No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2) 
indicando se ele deseja ou não executar o algoritmo novamente, (aceitar apenas os código 1 ou 2). 
Se for informado o código 1 deve ser repetida a execução de todo o programa para permitir um novo cálculo, 
caso contrário o programa deve ser encerrado.

Entrada
O arquivo de entrada contém vários valores reais, positivos ou negativos. Quando forem lidas duas notas válidas, 
deve ser lido um valor inteiro X . O programa deve parar quando o valor lido para este X for igual a 2.

Saída
Se uma nota inválida for lida, deve ser impressa a mensagem “nota invalida”. Quando duas notas válidas forem lidas, 
deve ser impressa a mensagem “media = ” seguido do valor do cálculo.

Antes da leitura de X deve ser impressa a mensagem "novo calculo (1-sim 2-nao)" e esta mensagem deve ser apresentada 
novamente se o valor da entrada padrão para X for menor do que 1 ou maior do que 2, conforme o exemplo abaixo.
A média deve ser impressa com dois dígitos após o ponto decimal.

*/

#include <iostream>
#include <iomanip>

int main(){
    int validas = 0, status;
    float nota, media = 0;
    std::cin>>nota;
    while(1)
    {
        if(nota>=0 && nota<=10){media +=nota; validas++;}
        else{std::cout<<"nota invalida"<<std::endl;}
        
        if(validas == 2)
        {
            std::cout<<std::fixed<<std::setprecision(2)<<"media = "<<(float)media/2<<std::endl;
            do{
                std::cout<<"novo calculo (1-sim 2-nao)"<<std::endl;
                std::cin>>status;
            }while(status != 1 && status != 2);
        }
        if(status == 2){break;}
        else if(status == 1){validas = 0; status = 0; media = 0;}
        std::cin>>nota;
        
    }
    
    return 0;
}
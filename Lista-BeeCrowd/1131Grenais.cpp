/*

A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS. 
Escreva um programa para ler o número de gols marcados pelo Inter e pelo Grêmio em um GRENAL. 
Logo após escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta. 
Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova partida, 
caso contrário deve ser encerrado imprimindo:

- Quantos GRENAIS fizeram parte da estatística.
- O número de vitórias do Inter.
- O número de vitórias do Grêmio.
- O número de Empates.
- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou "Nao houve vencedor", caso termine empatado).

Entrada
O arquivo de entrada contém 2 valores inteiros, correspondentes aos gols marcados pelo Inter e pelo Grêmio respectivamente. 
Em seguida háverá um inteiro (1 ou 2), correspondente à repetição do programa.

Saída
Após cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)". 
Quando o algoritmo for encerrado devem ser mostradas as estatísticas conforme a descrição apresentada acima. 
Obs: a palavra "Gremio" deve ser impressa sem acento, conforme o exemplo abaixo.

*/

#include <iostream>

int main(){

    int golInter, golGremio, inter=0, gremio=0, empate=0, status=0, confrontos = 0;

    do
    {   
        confrontos++;
        std::cin>>golInter>>golGremio;
        if(golInter == golGremio){empate++;}
        else if (golInter>golGremio){inter++;}
        else{gremio++;}
        std::cout<<"Novo grenal (1-sim 2-nao)"<<std::endl;
        std::cin>>status;
        
    } while (status != 2);
    
    std::cout<<confrontos<<" grenais"<<std::endl;
    std::cout<<"Inter:"<<inter<<std::endl;
    std::cout<<"Gremio:"<<gremio<<std::endl;
    std::cout<<"Empates:"<<empate<<std::endl;

    if(inter>gremio){std::cout<<"Inter venceu mais"<<std::endl;}
    else{std::cout<<"Gremio venceu mais"<<std::endl;}    

    return 0;
}
/*
Após comprar vários sítios adjacentes na região do oeste catarinense, a família Estrela construiu uma única estrada que passa por todos os sítios
em sequência. O primeiro sítio da sequência foi batizado de Estrela 1, o segundo de Estrela 2, e assim por diante. 
Porém, o irmão que vive em Estrela 1 acabou enlouquecendo e resolveu fazer uma Jornada nas Estrelas para roubar carneiros das propriedades de seus irmãos. 
Mas ele está definitivamente pirado. Quando passa pelo sítio Estrela i, ele rouba apenas um carneiro daquele sítio (se o sítio tem algum) e 
segue ou para Estrela i + 1 ou para Estrela i - 1, dependendo se o número de carneiros em Estrela i era, respectivamente, ímpar ou par. 
Se não existe a Estrela para a qual ele deseja seguir, ele interrompe sua jornada. O irmão louco começa sua Jornada em Estrela 1, 
roubando um carneiro do seu próprio sítio.
Entrada

A primeira linha da entrada consiste de um único inteiro N (1 ≤ N ≤ 106), o qual representa o número de Estrelas. 
A segunda linha da entrada consiste de N inteiros, de modo que o i-ésimo inteiro, Xi (1 ≤ Xi ≤ 106), 
representa o número inicial de carneiros em Estrela i.
Saída

Imprima uma linha contendo dois inteiros, de modo que o primeiro represente o número de Estrelas atacadas pelo irmão louco e o segundo 
represente o número total de carneiros não roubados.
*/

#include <iostream>
#include <vector>

int main(){

    unsigned long long int N, totalPlanetas = 0, x; std::cin>>N;
    std::vector <unsigned long long int> planetas(N, 0);
    std::vector <unsigned long long int> estrelas(N);

    for(int i = 0; i<N; i++)
    {
        std::cin>>x;
        estrelas[i] = x;
    }

    int j = 0;

    while(1)
    {
        if(j==0 && estrelas[j]%2==0)
        {
            planetas[j] = 1;
            if(estrelas[j]>0)
            {
                estrelas[j] = (estrelas[j]-1);
            }
            break;
        }
        else if(j==N-1 && estrelas[j]%2!=0)
        {
            planetas[j] = 1;
            if(estrelas[j]>0)
            {
                estrelas[j] = (estrelas[j]-1);
            }
            break;
        }
        else if(estrelas[j]%2==0)
        {
            if(estrelas[j]>0)
            {
                estrelas[j] = (estrelas[j]-1);
            }
            planetas[j] = 1;
            j--;
        }
        else if(estrelas[j]%2 != 0)
        {
            estrelas[j] = (estrelas[j]-1);
            planetas[j]= 1;
            j++;
        }
    }

    long long int total = 0;

    for(int i = 0; i < N; i++)
    {
        total+= estrelas[i];
        totalPlanetas += planetas[i];
    }

    std::cout<<totalPlanetas<<" "<<total<<std::endl;

    return 0;
}
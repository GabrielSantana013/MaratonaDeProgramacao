#include <iostream>
#include <iomanip>

#define ex01

#ifdef ex01

/*
Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os
experimentos de um laboratório o qual ela é responsável.
Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.

Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos.
Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados,
o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.

Entrada
A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir.
Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas
e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).

Saída
Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma em relação ao
total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após o ponto

*/

using namespace std;

int main()
{
    int N, Q, rato, sapo, coelho, cobaiaTotal;
    char animal;

    cin>>N;

    for( int i = 0; i < N; i++)
    {
        cin>>Q>>animal;
        cobaiaTotal+=Q;

        if(animal == 'R')
        {
            rato +=Q;
        }
        else if (animal == 'S')
        {
            sapo += Q;
        }
        else
        {
            coelho +=Q;
        }
    }

    cout <<"Total: "<<cobaiaTotal<<" cobaias"<<endl;
    cout <<"Total de coelhos: "<<coelho<<endl;
    cout <<"Total de ratos: "<<rato<<endl;
    cout <<"Total de sapos: "<<sapo<<endl;
    cout <<"Percentual de coelhos: "<<(coelho/cobaiaTotal)*100  <<endl;
    cout <<"Percentual de ratos: "<<(rato/cobaiaTotal)*100 <<endl;
    cout <<"Percentual de sapos: "<<(sapo/cobaiaTotal)*100  <<endl;

    return 0;
}

#endif

#ifdef ex02

/*


*/

using namespace std;

int main()
{

    return 0;
}

#endif

#ifdef ex03

/*


*/

using namespace std;

int main()
{

    return 0;
}

#endif

#ifdef ex04

/*


*/

using namespace std;

int main()
{

    return 0;
}

#endif

#ifdef ex05

/*


*/

using namespace std;

int main()
{

    return 0;
}

#endif

#ifdef ex06

/*


*/

using namespace std;

int main()
{

    return 0;
}

#endif

#ifdef ex07

/*


*/

using namespace std;

int main()
{

    return 0;
}

#endif


#ifdef ex08

/*


*/

using namespace std;

int main()
{

    return 0;
}

#endif


#ifdef ex09

/*


*/

using namespace std;

int main()
{

    return 0;
}

#endif

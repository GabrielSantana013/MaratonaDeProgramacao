#include <iostream>
#include <bits/stdc++.h>

#define ex04

#ifdef ex01
/*

A divisão de Suprimentos de Botas e Calçados do Exército comprou um grande número de pares de botas de vários tamanhos para seus soldados.
No entanto, por uma falha de empacotamento da fábrica contratada, nem todas as caixas entregues continham um par de botas correto, com duas botas do mesmo tamanho,
uma para cada pé. O sargento mandou que os recrutas retirassem todas as botas de todas as caixas para reembalá-las, desta vez corretamente.

Quando o sargento descobriu que você sabia programar, ele solicitou com a gentileza habitual que você escrevesse um programa que, dada a lista contendo a descrição de cada bota entregue,
determina quantos pares corretos de botas poderão ser formados no total.

Entrada
A entrada é composta por diversos casos de teste e termina com final de arquivo (EOF). A primeira linha de um caso de teste contém um inteiro N (2 ≤ N ≤ 10 4), N é par,
indicando o número de botas individuais entregues. Cada uma das N linhas seguintes descreve uma bota, contendo um número inteiro M (30 ≤ M ≤ 60) e uma letra L, separados por uma espaço em branco.
M indica o número da bota e L indica o pé da bota: L = 'D' indica que a bota é para o pé direito, L = 'E' indica que a bota é para o pé esquerdo.

Saída
Para cada caso de teste imprima uma linha contendo um único número inteiro indicando o número total de pares corretos que podem ser formados.

*/
using namespace std;

int main()
{
    int N;

    while(cin>>N)
    {
        int cont = 0;

        vector<pair<int, int>> posicoes(31, {0,0}) ;

        for(int i = 0; i < N; i++)
        {
            int M;
            char L;
            cin>>M>>L;
            if(L == 'E')
            {
                posicoes[M-31].first++;
            }
            else
            {
                posicoes[M-31].second++;
            }
        }

        for(int i = 0; i < 31; i++)
        {
           cont += min(posicoes[i].first, posicoes[i].second);
        }

        cout<<cont<<endl;
    }

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

Então, nós temos que admitir: precisamos da sua ajuda. Esse ano as coisas não estao correndo tão tranquilamente quanto queríamos, e nós não conseguimos finalizar o sistema do software da competição a tempo.
 Uma parte vital está faltando, e como você sabe, nós precisamos desse sistema funcionando até essa tarde, para a verdadeira competição. A parte que está faltando é a que computa a pontuação dos times,
 dada a lista de submissões desse time.

Por favor, por favor, alguém nos ajude!

Entrada
A entrada contém vários casos de teste. A primeira linha de caso de teste contém um único inteiro N indicando o número de submissões do caso de teste (1 ≤ N ≤ 300).
Cada uma das N linhas seguintes descrevem uma submissão; cada uma dessas linhas contém um identificador de problema (uma única letra entre 'A' e 'Z'),
seguida por um inteiro T representando o tempo em minutos (0 ≤ T ≤ 300), seguido por um julgamento (a palavra "correct", correto, ou a palavra "incorrect", incorreto).

A entrada está em ordem crescente de tempo, e haverá no máximo um julgamento "correct" para cada problema. O final da entrada é indicado por N = 0. A entrada deve ser lida da entrada padrão.

Saída
Para cada caso de teste a entrada do seu programa deve imprimir uma linha contendo dois inteiros S e P, separados por um espaço,
onde S é o número de problemas distintos com o julgamento "correct" e P é o tempo no qual cada problema distinto foi julgado pela primeira vez como "correct",
somado a 20 para cada julgamento "incorrect" recebido nesse problema (desde que no final o problema tenha sido julgado como "correct"). A saída deve ser escrita na saída padrão.

*/
using namespace std;

int main()
{
    while(true)
    {
        int N; cin>>N;
        if(N==0) break;
        vector<pair<bool, int>> envios(27, {false, 0});


        for(int i = 0; i < N; i++)
        {
            char C; cin>>C;
            int T; cin>>T;
            string status; cin>>status;

            int indice = abs(65-C);
            //cout<<indice;
            if(status == "correct")
            {
                envios[indice].second += T;
                envios[indice].first = true;
            }
            else
            {
                envios[indice].second += 20;
            }
        }

        int tempoTotal = 0, S = 0;

        for(int i = 0; i < envios.size(); i++)
        {
            if(envios[i].first)
            {
                S++;
                tempoTotal += envios[i].second;
            }
        }
        cout<<S<<" "<<tempoTotal<<endl;
    }
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

#ifdef ex10
/*



*/
using namespace std;

int main()
{

    return 0;
}
#endif

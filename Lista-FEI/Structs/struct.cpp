#include <iostream>
#include <bits/stdc++.h>

#define ex09

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

Dada uma linha de texto, você deve encontrar as frequências de cada um dos caracteres presentes nela. As linhas fornecidas não conterão nenhum dos primeiros 32 ou dos últimos 128 caracteres da tabela ASCII.
 É claro que não estamos levando em conta o caracter de fim de linha.

Entrada
A entrada contém vários casos de teste. Cada caso de teste é composto por uma única linha de texto com até 1000 caracteres.

Saída
Imprima o valor ASCII de todos os caracteres presentes e a sua frequência de acordo com o formato abaixo. Uma linha em branco deverá separar 2 conjuntos de saída. Imprima os caracteres ASCII em ordem ascendente de frequência.
Se dois caracteres estiverem presentes com a mesma quantidade de frequência, imprima primeiro o caracter que tem valor ASCII maior. A entrada é terminada por final de arquivo (EOF).

*/
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string entrada;
    bool primeira = true;

    while(getline(cin,entrada))
    {
        vector<pair<int,int>> frequencia(129,{0,0});

        for(int i = 0; i < entrada.size(); i++)
        {
                frequencia[entrada[i]].first++;
                frequencia[entrada[i]].second = -(int)entrada[i];
        }
        sort(frequencia.begin(), frequencia.end());

        if(primeira)
        {
            primeira = false;
        }
        else
        {
            cout<<endl;
        }
        for(int i = 0; i < 129; i++)
        {
            if(frequencia[i].first > 0)
            {
                cout<<abs(frequencia[i].second) << " " << frequencia[i].first<<endl;
            }
        }
    }

    return 0;
}
#endif

#ifdef ex03
/*

O professor Rolien organizou junto às suas turmas de Ciência da Computação a confecção de uma camiseta polo que fosse ao mesmo tempo bonita e barata.
Após algumas conversas, ficou decidido com os alunos que seriam feitas somente camisetas da cor preta, o que facilitaria a confecção.
Os alunos poderiam escolher entre o logo do curso e os detalhes em branco ou vermelho. Assim sendo,
Rolien precisa de sua ajuda para organizar as listas de quem quer a camiseta em cada uma das turmas, relacionando estas camisetas pela cor do logo do curso,
tamanho (P, M ou G) e por último pelo nome.

Entrada
A entrada contém vários casos de teste. Cada caso de teste inicia com um valor N, (1 ≤ N ≤ 60) inteiro e positivo, que indica a quantidade de
camisetas a serem feitas para aquela turma. As próximas N*2 linhas contém informações de cada uma das camisetas (serão duas linhas de informação
para cada camiseta). A primeira linha irá conter o nome do estudante e a segunda linha irá conter a cor do logo da camiseta ("branco" ou "vermelho")
seguido por um espaço e pelo tamanho da camiseta "P" "M" ou "G". A entrada termina quando o valor de N for igual a zero (0) e esta valor não deverá ser processado.

Saída
Para cada caso de entrada deverão ser impressas as informações ordenadas pela cor dos detalhes em ordem ascendente,
seguido pelos tamanhos em ordem descendente e por último por ordem ascendente de nome, conforme o exemplo abaixo.

Obs.: Deverá ser impressa uma linha em branco entre dois casos de teste.

*/
using namespace std;

/*typedef struct encomendas{

    string cor;
    char tamanho;
    string nome;
};*/

/*void trocaEncomendas(encomendas &e1, encomendas &e2){

    encomendas temp = e1;
    e1 = e2;
    e2 = temp;
}*/

/*bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}*/


int main() {

    int g=0;
    while (true) {
        int N;
        cin >> N;
        if (N == 0)
        {
            break;
        }
        else if (g>0)
        {
             cout << endl;
        }

        vector<pair<string, pair<char,string>>> estudantes;

        for (int i = 0; i < N; i++)
        {
            string nome, cor;
            char tamanho;

            cin.ignore();
            getline(cin, nome);
            cin >> cor >> tamanho;
            estudantes.push_back(make_pair(cor, make_pair(abs(tamanho - 'P'), nome))); //faz o par de par e organiza pra pegar o valor de variavel -P
        }

        sort(estudantes.begin(), estudantes.end());

        map<char, char> tamanhos;
        tamanhos.insert({{0, 'P'}, {3, 'M'}, {9, 'G'}});

        for(auto c : estudantes)
        {
            cout<< c.first << " " << tamanhos[c.second.first] <<" "<<c.second.second<<endl;
        }
            g++;

    }

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

void solution(int T){


    //minuto de chegada, minuto crítico
    queue<pair<int,int>> filaSuS;
    int chegadaMinutos, criticoMinutos;
    for(int i = 0; i < T; i++)
    {
        int h,m,c;
        cin>>h>>m>>c;
        chegadaMinutos = (h-7)*60 + m;
        criticoMinutos = chegadaMinutos + c;
        filaSuS.push({chegadaMinutos, criticoMinutos});
    }

    int pacientesCriticos = 0, tempo = 0;

    while(!filaSuS.empty())
    {
        if(tempo <= filaSuS.front().first)
        {

            tempo = filaSuS.front().first;
            if(tempo % 30 != 0)
            {
                tempo += 30 - (tempo % 30);
            }
        }
        if(tempo > filaSuS.front().second)
        {
            pacientesCriticos++;
        }

        filaSuS.pop();
        tempo +=30;
    }

    cout<< pacientesCriticos << endl;
}

int main()
{

    int T;

    while(cin>>T)
    {
        solution(T);
    }


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

No painel de controle de um grande anfiteatro existem N interruptores, numerados de 1 a N, que controlam as M lâmpadas do local, numeradas de 1 a M.
Note que o número de interruptores e lâmpadas não é necessariamente o mesmo e isso acontece porque cada interruptor está associado a um conjunto de lâmpadas
e não apenas a uma lâmpada. Quando um interruptor é acionado, o estado de cada uma das lâmpadas associadas a ele é invertido. Quer dizer,
aquelas apagadas acendem e as acesas se apagam.

Algumas lâmpadas estão acesas inicialmente e o zelador do anfiteatro precisa apagar todas as lâmpadas. Ele começou tentando acionar interruptores aleatoriamente mas,
como não estava conseguindo apagar todas as lâmpadas ao mesmo tempo, decidiu seguir uma seguinte estratégia fixa.
Ele vai acionar os interruptores na sequência 1, 2, 3, . . . , N, 1, 2, 3, . . . ou seja, toda vez após acionar o interruptor de número N,
ele recomeça a sequência a partir do interruptor 1. Ele pretende acionar interruptores, seguindo essa estratégia,
até que todas as lâmpadas estejam apagadas ao mesmo tempo (momento em que ele para de acionar os interruptores). Será que essa estratégia vai funcionar?

Neste problema, dadas as lâmpadas acesas inicialmente e dados os conjuntos de lâmpadas que estão associados a cada interruptor,
seu programa deve computar o número de vezes que o zelador vai acionar os interruptores. Caso a estratégia do zelador nunca apague todas
as lâmpadas ao mesmo tempo, seu programa deve imprimir −1.

Entrada
A primeira linha contém dois inteiros N e M (1 ≤ N, M ≤ 1000) representando, respectivamente, o número de interruptores e o número de lâmpadas.
A segunda linha contém um inteiro L (1 ≤ L ≤ M) seguido por L inteiros distintos Xi (1 ≤ Xi ≤ M), representando as lâmpadas acesas inicialmente.
Cada uma das N linhas seguintes contém um inteiro Ki (1 ≤ Ki ≤ M) seguido por Ki inteiros distintos Yi (1 ≤ Yi ≤ M),
representando as lâmpadas associadas ao interruptor i (1 ≤ i ≤ N).

Saída
Se programa deve produzir uma única linha contendo um inteiro representando o número de vezes que o zelador vai acionar os interruptores,
seguindo a estratégia descrita, até todas as lâmpadas estarem apagadas ao mesmo tempo. Caso isso nunca vá acontecer, imprima −1.

*/
using namespace std;


bool estadoFinal(vector<bool> lampadas)
{
    for(auto a : lampadas)
    {
        if(a)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int N, M;
    cin>>N>>M;

    vector<bool> lampadas(M, false);

    int L; cin>>L;

    for(int i = 0 ; i < L; i++)
    {
        int num;
        cin>>num;
        num --; //pra começar do 0
        lampadas[num] = true;
    }

    vector<bool> estadoLampadas = lampadas;
    vector<vector<int>> matrizAcoes(N);

    for(int i = 0; i < N; i++)
    {
        int num; cin>>num;

        for(int j = 0; j <num; j++)
        {
            int operacao; cin>>operacao;
            operacao --; //pra comecar do 0
            matrizAcoes[i].push_back(operacao);
        }
    }

    bool saida = false;
    int contador = 0;
    int idx = 0;

    while(!estadoFinal(lampadas))
    {
        for(auto a : matrizAcoes[idx])
        {
            lampadas[a] = !lampadas[a];
        }
        idx++;

        if(idx == matrizAcoes.size())
        {
            if(lampadas == estadoLampadas)
            {
                saida = true;
                break;
            }
            else
            {
                idx = 0;
                contador ++;
            }
        }

    }

    if(saida)
    {
        cout<< -1 <<endl;
    }
    else
    {
        cout<<contador*N+idx<<endl;
    }
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

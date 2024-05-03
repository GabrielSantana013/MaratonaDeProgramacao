#include <iostream>
#include <bits/stdc++.h>

#define ex02

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

bool cmp(pair<int, int> n1, pair<int,int> n2)
{
    if(n1.second==n2.second)
    {
        return n1.first>n2.first;
    }
    else
    {
        return n1.second<n2.second;
    }

}

int main()
{
    string entrada;
    bool primeira = true;
    while(getline(cin,entrada))
    {
        int contaIgual = 0;
        vector<pair<int,int>> frequencia;

        for(int i = 0; i < entrada.size(); i++)
        {
            contaIgual++;
            if(i+1 > entrada.size())
            break;
            if(entrada[i] != entrada[i+1])
            {
                frequencia.push_back(make_pair(entrada[i],contaIgual));
                contaIgual = 0;
            }

        }
        sort(frequencia.begin(), frequencia.end(), cmp);
        for(auto c: frequencia)
        {
            cout<<c.first<<" "<<c.second<<endl;
        }

        if(primeira)
        {
            primeira = false;
        }
        else
        {
            cout<<endl;
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

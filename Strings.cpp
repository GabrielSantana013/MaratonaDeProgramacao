#include <iostream>

#define ex16
//refazer o 16

#ifdef ex01

/*
Solicitaram para que você construisse um programa simples de criptografia. Este programa deve possibilitar enviar mensagens codificadas sem que alguém consiga lê-las.
O processo é muito simples. São feitas três passadas em todo o texto.

Na primeira passada, somente caracteres que sejam letras minúsculas e maiúsculas devem ser deslocadas 3 posições para a direita,
segundo a tabela ASCII: letra 'a' deve virar letra 'd', letra 'y' deve virar caractere '|' e assim sucessivamente. Na segunda passada,
a linha deverá ser invertida. Na terceira e última passada, todo e qualquer caractere a partir da metade em diante (truncada) devem ser deslocados uma posição
para a esquerda na tabela ASCII. Neste caso, 'b' vira 'a' e 'a' vira '`'.

Por exemplo, se a entrada for “Texto #3”, o primeiro processamento sobre esta entrada deverá produzir “Wh{wr #3”.
O resultado do segundo processamento inverte os caracteres e produz “3# rw{hW”.
Por último, com o deslocamento dos caracteres da metade em diante, o resultado final deve ser “3# rvzgV”.

Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso de teste contém um inteiro N (1 ≤ N ≤ 1*104),
indicando a quantidade de linhas que o problema deve tratar. As N linhas contém cada uma delas M (1 ≤ M ≤ 1*103) caracteres.

Saída
Para cada entrada, deve-se apresentar a mensagem criptografada.
*/

using namespace std;


string deslocaChar(string M)
    {
        for(int i = 0; i < M.size(); i++)
        {
            if(M[i] >='a' && M[i] <='z' || M[i] >='A' && M[i] <='Z')
            {
                M[i] += 3;
            }
        }
        return M;
    }


string inverteChar(string M)
{
    string invertida;
    int tamanho = (M.size())-1, i=0;

    invertida = M;

    while(tamanho>=0)
    {

        invertida[i] = M[tamanho];
        i++;
        tamanho--;
    }
    return invertida;
}


string deslocaMetade(string M)
{
    for(int i = 0; i < M.size(); i++)
    {
        if(i >= M.size()/2)
        {
            M[i] -=1;
        }

    }

    return M;
}


int main()

{
    int N;
    string M;

    cin>>N;
    cin.ignore();
    for(int i  = 0; i < N; i++)
    {

      getline(cin, M);

      M = deslocaChar(M);
      M = inverteChar(M);
      M = deslocaMetade(M);
      cout<<M<<endl;
    }

    return 0;
}

#endif

#ifdef ex02

/*
A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci.
Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores.
Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 46).

Saída
Os valores devem ser mostrados na mesma linha, separados por um espaço em branco.
Não deve haver espaço após o último valor.

*/
using namespace std;

int main(){

    int N, a,b,c;

    cin>>N;

   a = 0;
   b = 1;
   c = 1;

    for(int i = 0; i < N; i++)
    {
        if(i+1 != N)
        {
          cout<<a<<" ";
        }
        else
        {
            cout<<a<<endl;
        }

       a = b;
       b = c;
       c = b+a;
    }

    return 0;
}
#endif

#ifdef ex03

/*

João quer montar um painel de leds contendo diversos números. Ele não possui muitos leds, e não tem certeza se conseguirá montar o número desejado.
Considerando a configuração dos leds dos números abaixo, faça um algoritmo que ajude João a descobrir a quantidade de leds necessário para montar o valor.

Obs.: Para programadores de Javascript, recomenda-se o uso de "input.trim().split('\n')" para evitar erros conhecidos.

Entrada
A entrada contém um inteiro N, (1 ≤ N ≤ 1000) correspondente ao número de casos de teste, seguido de N linhas,
cada linha contendo um número (1 ≤ V ≤ 10100) correspondente ao valor que João quer montar com os leds.

Saída
Para cada caso de teste, imprima uma linha contendo o número de leds que João precisa para montar o valor desejado, seguido da palavra "leds".

*/
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int N, V, totalLeds = 0, aux;

    string leds;

    map<char,int> nled;

    nled[49] = 2;
    nled[50] = 5;
    nled[51] = 5;
    nled[52] = 4;
    nled[53] = 5;
    nled[54] = 6;
    nled[55] = 3;
    nled[56] = 7;
    nled[57] = 6;
    nled[48] = 6;

    cin>>N;

    for(int i = 0; i < N; i++)
    {
        totalLeds = 0;
        cin>>leds;

        for(int j = 0; j <leds.size();j++)
        {
             aux = leds[j];
             totalLeds += nled[aux];
        }
        cout<<totalLeds<<" leds"<<endl;
    }
    return 0;
}
#endif


#ifdef ex04

/*
Uma sentença é chamada de dançante se sua primeira letra for maiúscula e cada letra subsequente for o oposto da letra anterior.
Espaços devem ser ignorados ao determinar o case (minúsculo/maiúsculo) de uma letra.
Por exemplo, "A b Cd" é uma sentença dançante porque a primeira letra ('A') é maiúscula, a próxima letra ('b') é minúscula,
a próxima letra ('C') é maiúscula, e a próxima letra ('d') é minúscula.

Entrada
A entrada contém vários casos de teste. Cada caso de teste é composto por uma linha que contém uma sentença,
que é uma string que contém entre 1 e 50 caracteres ('A'-'Z','a'-'z' ou espaço ' '), inclusive, ou no mínimo uma letra ('A'-'Z','a'-'z').

Saída
Transforme a sentença de entrada em uma sentença dançante (conforme o exemplo abaixo)
trocando as letras para minúscula ou maiúscula onde for necessário.
Todos os espaços da sentença original deverão ser preservados, ou seja, " sentence " deverá ser convertido para " SeNtEnCe ".
*/

using namespace std;

int main()
{
    int N;
    string sentence;

    while(getline(cin, sentence))
    {
        int k = 0;
        for(int j  = 0; j < sentence.size(); j++)
        {
            if(sentence[j] == ' ')
            {
                continue;
            }

            else if(k%2==0)
            {
                if(sentence[j] >= 'a' && sentence[j] <='z')
                {
                    sentence[j] -=32;
                }
            }

            else
            {
                if(sentence[j] >= 'A' && sentence[j] <='Z')
                {
                    sentence[j] +=32;

                }

            }
            k++;
        }
        cout<<sentence<<endl;
    }

    return 0;
}
#endif

#ifdef ex05

/*
Implemente um programa denominado combinador, que recebe duas strings e deve combiná-las, alternando as letras de cada string,
começando com a primeira letra da primeira string, seguido pela primeira letra da segunda string, em seguida pela segunda letra da primeira string,
e assim sucessivamente. As letras restantes da cadeia mais longa devem ser adicionadas ao fim da string resultante e retornada.

Entrada
A entrada contém vários casos de teste. A primeira linha contém um inteiro N que indica a quantidade de casos de teste que vem a seguir.
Cada caso de teste é composto por uma linha que contém duas cadeias de caracteres, cada cadeia de caracteres contém entre 1 e 50 caracteres inclusive.

Saída
Combine as duas cadeias de caracteres da entrada como mostrado no exemplo abaixo e exiba a cadeia resultante.

*/

using namespace std;

int main()
{
    int N;
    string sentence1, sentence2;

    cin>>N;

    while(N--)
    {
        cin>> sentence1;
        cin>> sentence2;

        int tamanho1 = sentence1.size(), tamanho2 = sentence2.size();


        if(tamanho1<tamanho2)
        {
            tamanho1 = tamanho1^tamanho2;
            tamanho2 = tamanho1^tamanho2;
            tamanho1 = tamanho1^tamanho2;
        }

        for(int i = 0; i <tamanho1;)
        {
            if(i<sentence1.size())
            {
                cout<<sentence1[i];
            }
            if(i<sentence2.size())
            {
                cout<<sentence2[i];
            }

            i++;
        }
        cout<<endl;

    }
    return 0;
}
#endif

#ifdef ex06

/*
Paulinho tem em suas mãos um novo problema. Agora a sua professora lhe pediu que construísse um programa para verificar,
à partir de dois valores muito grandes A e B, se B corresponde aos últimos dígitos de A.

Entrada
A entrada consiste de vários casos de teste. A primeira linha de entrada contém um inteiro N que indica a quantidade de casos de teste.
Cada caso de teste consiste de dois valores A e B maiores que zero, cada um deles podendo ter até 1000 dígitos.

Saída
Para cada caso de entrada imprima uma mensagem indicando se o segundo valor encaixa no primeiro valor, confome exemplo abaixo.
*/

using namespace std;

int main()
{
    int N, tamanho1, tamanho2, controle;
    string A, B;

    cin>>N;

    while(N--)
    {
        cin>>A>>B;

        tamanho1 = A.size();
        tamanho2 = B.size();

        //não pode trocar por causa do if, tenta usar uma terceira variavel

    if(tamanho1>=tamanho2)
    {
        for(int i = 0; i <= tamanho2; i++)
        {
            if(B[tamanho2-i] != A[tamanho1-i])
            {
                cout<<"nao encaixa"<<endl;
                break;
            }
            else if(i == tamanho2)
            {
                cout<<"encaixa"<<endl;
            }
        }
    }
    else
    {
        cout<<"nao encaixa"<<endl;
    }


    }

    return 0;
}
#endif


#ifdef ex07

/*
Júlio César usava um sistema de criptografia, agora conhecido como Cifra de César, que trocava cada letra pelo equivalente em duas posições adiante no alfabeto
(por exemplo, 'A' vira 'C', 'R' vira 'T', etc.). Ao final do alfabeto nós voltamos para o começo, isto é 'Y' vira 'A'.
Nós podemos, é claro, tentar trocar as letras com quaisquer número de posições.

Entrada
A entrada contém vários casos de teste. A primeira linha de entrada contém um inteiro N que indica a quantidade de casos de teste.
Cada caso de teste é composto por duas linhas. A primeira linha contém uma string com até 50 caracteres maiúsculos ('A'-'Z'),
que é a sentença após ela ter sido codificada através desta Cifra de César modificada. A segunda linha contém um número que varia
de 0 a 25 e que representa quantas posições cada letra foi deslocada para a direita.

Saída
Para cada caso de teste de entrada, imprima uma linha de saída com o texto decodificado (transformado novamente para o texto original)
conforme as regras acima e o exemplo abaixo.

*/

using namespace std;

int main()
{
    int N,nCifra;
    string cifra;

    cin>>N;

    for(int i =0; i<N; i++)
    {
        cin>>cifra>>nCifra;

        for(int j = 0; j < cifra.size(); j++)
        {
            int charCifra = cifra[j];

            if(charCifra - nCifra >=65)
            {
                cifra[j] -= nCifra;
            }
            else
            {
                cifra[j] +=26;
                cifra[j] -=nCifra;
            }

        }
        cout<<cifra<<endl;
    }

    return 0;
}
#endif

#ifdef ex08

/*
Em diversos sistemas de computação, vários processos podem ler de um mesmo recurso durante o mesmo ciclo de máquina,
mas somente um processo pode escrever no recurso durante o ciclo de máquina. Leituras e gravações não podem se misturar em um mesmo ciclo de máquina.
Dado um histórico de leituras e gravações que ocorreram durante a execução de um determinado processamento,
e um número inteiro que representa o número de processos usados, calcule a duração mínima do processamento, em ciclos de máquina.
O rastro de histórico representa cada leitura por uma letra 'R' e cada gravação por uma letra 'W'.

Por exemplo, se o rastro de histórico é "RWWRRR" e o número de processos é 3, então o número mínimo de ciclos de máquina será 4:
um para a primeira leitura, um para cada uma das gravações e apenas um para todo o último grupo de leituras.

Entrada
A entrada contém diversos casos de testes. Cada caso é composto por duas linhas. A primeira linha contém o rastro de processamento
em uma sequência de caracteres 'R' ou 'W' formando um String de 1 a 50 caracteres. A segunda linha contém um valor inteiro P (1 ≤ P ≤ 10),
representando o número de processos, ou seja, uma indicação de quantas operações de leitura podem ser processadas simultaneamente. A entrada termina em EOF.

Saída
Para cada caso de teste determine e imprima o número mínimo de ciclos de máquina necessários para se processar o rastro informado. Vide exemplos abaixo.
*/

using namespace std;

int main()
{
    string rastro;
    int processos, ciclos = 0, contador = 0;

    while(cin>>rastro)
    {
        cin>>processos;

        ciclos = 0;
        contador = 0;

        for(int i = 0; i < rastro.size(); i++)
        {
            if(contador<processos)
            {
                if(rastro[i] == 'R' && contador == 0)
                {
                    ciclos++;
                }
                else if(rastro[i] == 'W')
                {
                    ciclos++;
                    contador = 0;
                    continue;
                }
                if(contador+1 == processos)
                {
                    contador = 0;
                    continue;
                }
            contador++;

            } //14 w 16R

        }
    cout<<ciclos<<endl;

    }

    return 0;
}
#endif

#ifdef ex09

/*
Uma aliteração ocorre quando duas ou mais palavras consecutivas de um texto possuem a mesma letra inicial (ignorando maiúsculas e minúsculas).
Sua tarefa é desenvolver um programa que identifique, a partir de uma sequência de palavras, o número de aliterações que essa sequência possui.

Entrada
A entrada contém diversos casos de testes. Cada caso é expresso como um texto em uma única linha, contendo de 1 a 100 palavras separadas por um único espaço,
cada palavra tendo de 1 a 50 letras minúsculas ou maiúsculas ('A'-'Z','a'-'z'). A entrada termina em EOF.

Saída
Para cada caso de teste imprima o número de aliterações existentes no texto informado, conforme exemplos abaixo.

*/

using namespace std;

int main()
{
    string frase;
    char inicial;

    while(getline(cin, frase))
    {
        int aliteracao = 0, contaIgual = 0;

        inicial = frase[0];

        for(int i = 0; i < frase.size(); i++)
        {
            if(i!=0 && frase[i - 1] == ' ')
            {
                if(frase[i] != tolower(inicial) && frase[i] != toupper(inicial))
                {
                    contaIgual = 0;
                }
                if(toupper(inicial) == frase[i] || tolower(inicial) == frase[i] && contaIgual == 0)
                {
                    aliteracao++;
                    contaIgual++;
                }

                inicial = frase[i];
            }
        }
        cout<<aliteracao<<endl;

    }

    return 0;
}
#endif

#ifdef ex10

/*

Textos podem conter mensagens ocultas. Neste problema a mensagem oculta em um texto é composto pelas primeiras letras de cada palavra do texto,
na ordem em que aparecem.

É dado um texto composto apenas por letras minúsculas ou espaços. Pode haver mais de um espaço entre as palavras.
O texto pode iniciar ou terminar em espaços, ou mesmo conter somente espaços.

Entrada
A entrada contém vários casos de testes. A primeira linha de entrada contém um inteiro N que indica a quantidade de casos de teste que vem a seguir.
Cada caso de teste consiste de uma única linha contendo de um a 50 caracteres, formado por letras minúsculas (‘a’-‘z’) ou espaços (‘ ’).
Atenção para possíveis espaços no início ou no final do texto!

Nota: No exemplo de entrada os espaços foram substituídos por pequenos pontos (‘·’) para facilitar o entendimento dos exemplos.

Saída
Para cada caso de teste imprima a mensagem oculta no texto de entrada.

*/
using namespace std;

int main()
{
    int N, k;
    string mensagem, codigo;

    cin>>N;
    cin.ignore();

    for(int i = 0; i < N; i++)
    {
        getline(cin, mensagem);
        string codigo; //usa codigo.clear pra limpar a string a cada iteração
        k=0;

        if(mensagem[0] != ' ')
        {
            codigo.push_back(mensagem[0]);
            k++;
        }

        for(int j = 0; j < mensagem.size();j++)
        {
            if(j!=0 && mensagem[j-1] == ' ' && mensagem[j] != ' ')
            {
                codigo.push_back(mensagem[j]);
                k++;
            }
        }
        cout<<codigo<<endl;
    }

    return 0;
}
#endif

#ifdef ex11

/*

Seu irmão mais novo aprendeu a escrever apenas um, dois e três, em Inglês. Ele escreveu muitas dessas palavras em um papel e a sua tarefa é reconhecê-las.
Nota-se que o seu irmão mais novo é apenas uma criança, então ele pode fazer pequenos erros: para cada palavra, pode haver, no máximo, uma letra errada.
 O comprimento de palavra é sempre correto. É garantido que cada palavra que ele escreveu é em letras minúsculas, e cada palavra que ele escreveu tem uma interpretação única.

Entrada
A primeira linha contém o número de palavras que o seu irmão mais novo escreveu. Cada uma das linhas seguintes contém uma única palavra com todas as letras em minúsculo.
As palavras satisfazem as restrições acima: no máximo uma letra poderia estar errada, mas o comprimento da palavra está sempre correto. Haverá, no máximo, 1000 palavras de entrada.

Saída
Para cada caso de teste, imprima o valor numérico da palavra.

*/

using namespace std;

int main()
{

    int N, cont1, cont2;
    cin>>N;

    string palavras[] = {"one", "two"};
    string palavra;

    for(int i = 0; i <N; i++)
    {
        cin>>palavra;
        cont1 = cont2 = 0;
        if(palavra.size()>3)
        {
            cout<<"3"<<endl;
            continue;
        }
        else
        {
            for(int j = 0; j<2;j++)
            {
                cont1 = 0;
                for(int k = 0; k < palavras[j].size(); k++)
                {
                    if(palavras[j][k] == palavra[k])
                    {
                        cont1++;
                    }
                    if(palavras[j] == "one" && cont1>=2)
                    {
                        cout<<"1"<<endl;
                        break;
                    }
                    else if(palavras[j] == "two" && cont1>=2)
                    {
                        cout<<"2"<<endl;
                        break;
                    }
                }

            }
        }

    }

    return 0;
}
#endif

#ifdef ex12

/*

Rafael encontrou um novo hobbie: fazer desenhos usando caracteres do teclado. Por mais simples ou limitada que essa nova forma de arte possa parecer,
basta criatividade para se fazer os mais diferentes tipos de desenhos.

Após fazer alguns desenhos, Rafael imaginou como seriam se eles fossem redimensionados, porém ter que refazer todo o desenho pareceu meio cansativo.
Para isso, Rafael pediu sua ajuda.

Em um redimensionamento, uma imagem com N linhas e M colunas passa a ter A linhas e B colunas, e, dado que as novas dimensões da imagem redimensionada
é maior do que as dimensões da imagem original, alguns caracteres terão que se repetir.

Digamos que A seja 3 vezes maior que N. Nesse caso, cada linha terá que se repetir 3 vezes, para que a imagem seja redimensionada de forma correta.

Dado um desenho feito por Rafael, imprima como seria se o desenho fosse redimensionado para uma determinada nova dimensão.

Entrada
Haverá diversos casos de teste. Cada caso de teste inicia com dois inteiros N e M (1 ≤ N, M ≤ 50), representando, respectivamente, a altura e a
largura do desenho de Rafael.

A seguir haverá N linhas, contendo M caracteres cada, representando o desenho feito por Rafael. Após, haverá dois inteiros A e B (N < A ≤ 100,
M < B ≤ 100, A é múltiplo de N, e B é multiplo de M), representando, respectivamente, a nova altura e largura que Rafael deseja que seu desenho tenha.

O último caso de teste é indicado quando N = M = 0, o qual não deverá ser processado.

Saída
Para cada caso de teste, imprima A linhas, contendo B caracteres cada, representando o desenho de Rafael redimensionado.

Após cada caso de teste, imprima uma linha em branco.

*/


using namespace std;

int main()
{
    int N,M,A,B;

    cin>>N>>M;

    char imagemOriginal[100][100];

    while(N!=0 && M !=0)
    {
        //recebe a imagem
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                cin>>imagemOriginal[i][j];
            }
        }

        cin>>A>>B;

        int multA, multB;

        multA = A/N;
        multB = B/M;

    for(int i = 0; i < N; i++)
        {
            for(int k = 0; k < multA; k++)
            {
                for(int j = 0; j < M; j++)
                {
                    for(int p = 0; p<multB; p++)
                    {
                        cout<<imagemOriginal[i][j];
                    }
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cin>>N>>M;
        char imagemOriginal[100][100];
    }
    return 0;
}
#endif

#ifdef ex13

/*

Seu professor de português não para de trazer coisas novas para a sala, e hoje não foi diferente.
Existe uma cidade, segundo seu professor, onde as pessoas levam muito a sério a forma como elas se comunicam.
Em especial, quando duas pessoas estão conversando, elas pensam muito nas frases antes de dizê-las,
de forma a garantir que tal frase seja uma “frase completa”, ou talvez uma “frase quase completa”.

Considerando o nosso alfabeto de 26 letras, uma frase é dita “completa” quando ela contém todas as
letras do alfabeto contidas nela. De modo semelhante, uma frase é dita “quase completa” se ela não é
completa, porém contém ao menos metade das letras do alfabeto contidas nela. Quando uma frase não é
“completa” e nem “quase completa”, ela é dita “mal elaborada”.

Seu professor lhe deu uma tarefa muito difícil: dadas várias frases trocadas entre vários habitantes
da cidade citada, diga em qual das categorias acima a frase se encaixa.

Entrada
A primeira linha contém um inteiro N, indicando o número de casos de teste a seguir.

Cada caso de teste contém uma linha, contendo letras minúsculas, espaços em branco e/ou vírgulas.
O número de caracteres de cada linha é no mínimo 3 e no máximo 1000, contando com os espaços.

Saída
Para cada caso de teste, imprima uma linha contendo uma das seguintes frases: “frase completa”,
quando a frase é considerada completa; “frase quase completa”, quando a frase não é completa,
mas é considerada quase completa; ou “frase mal elaborada”, quando ela não é completa e nem quase completa.

*/

#include <set>

using namespace std;

    int main()
    {

        string frase;

        //.insert ele ignora as coisas repetidas
        int N;

        cin>>N;
        cin.ignore();
        for(int i = 0; i < N; i++)
        {
            set <char> letrasDigitadas;

            getline(cin, frase);

            for(int j = 0; j< frase.size(); j++)
            {
                if(frase[j] >= 'a' && frase[j] <= 'z')
                {
                    letrasDigitadas.insert(frase[j]);
                }
            }

                if(letrasDigitadas.size() >= 26)
                {
                    cout<<"frase completa"<<endl;
                }
                else if(letrasDigitadas.size() > 13)
                {
                    cout<<"frase quase completa"<<endl;
                }
                else
                {
                    cout<<"frase mal elaborada"<<endl;

                }
        }


    return 0;
}
#endif

#ifdef ex14

/*

Rafael recentemente recebeu uma bolsa de estudos e está fazendo intercâmbio fora do Brasil, onde conheceu várias
pessoas de várias nacionalidades diferentes. O idioma nativo desse país é o Inglês, e todas as pessoas que Rafael
conheceu falam inglês como primeira ou segunda língua.

Como aprender um segundo idioma é uma tarefa difícil e cansativa, as pessoas preferem falar seu idioma nativo sempre que possível.
Uma exceção à essa regra é quando há duas pessoas no grupo que não tem o mesmo idioma nativo. Nesse tipo de situação, o idioma utilizado é o inglês.

Por exemplo, se em um grupo há só brasileiros, o idioma falado será o português, mas caso haja um espanhol entre os brasileiros, o idioma falado será o inglês.

Rafael as vezes fica confuso sobre qual idioma deveria ser falado em cada grupo de pessoas, e para isso pediu sua ajuda.

Entrada
A primeira linha contém um inteiro N, indicando o número de casos de testes a seguir.

Cada caso de teste inicia com um inteiro K (2 ≤ K ≤ 100), representando o número de pessoas no grupo. Em seguida haverá K linhas,
contendo uma string S cada, representando o idioma nativo de cada uma dessas K pessoas.

Cada string conterá no mínimo 1 e no máximo 20 caracteres, entre eles apenas letras minúsculas (a-z).

Saída
Imprima uma linha, contendo uma string S, representando o idioma mais apropriado para a conversa.

*/

using namespace std;

int main()
{
    int N, K, contaIdioma = 0;
    string idioma[100];

    cin>>N;

    for(int i = 0; i <N; i++)
    {
        contaIdioma = 0;
        cin>>K;

        for(int j = 0; j < K; j++)
        {
            cin>>idioma[j];
                if(j>0 && idioma[j] != idioma[j-1])
                {
                    contaIdioma++;
                }
        }

        if(contaIdioma !=0)
            {
                cout<<"ingles"<<endl;
            }
            else
            {
                cout<<idioma[0]<<endl;
            }
    }

    return 0;
}
#endif

#ifdef ex15

/*

É dado na entrada uma string A e outra B. Em uma operação você pode escolher uma letra da primeira string e avançar esta letra.
Avançar uma letra significa transformá-la na próxima letra do alfabeto, veja que a próxima letra depois de z vem a letra a novamente!

Por exemplo, podemos transformar a string ab em bd em no mínimo 3 operações: ab -> bb -> bc -> bd.
Podemos aplicar operações nas letras em qualquer ordem, outra possibilidade seria: ab -> ac -> bc -> bd.

Dadas as duas strings, calcule o mínimo número de operações necessárias para transformar a primeira na segunda.

Entrada
Na primeira linha terá um inteiro T (T ≤ 100) indicando o número de casos de teste.

Para cada caso, na única linha teremos as duas strings A (1 ≤ |A| ≤ 100* ou 1 ≤ |A| ≤ 104** - sendo que |A|
significa o tamanho da string A) e B (|B| = |A|* ou |B| = |A​|**) separadas por um espaço.
Ambas as strings são compostas por letras do alfabeto minúsculas apenas e são do mesmo tamanho.

*Ocorre em aproximadamente 90% dos casos de teste;

**Ocorre nos demais casos de teste.

Saída
Para cada caso imprima o número mínimo de operações.

*/



using namespace std;

int main()
{
    int T, trocas;
    string a, b;

    cin>>T;
    cin.ignore();

    for(int k = 0; k < T; k++)
    {
        trocas = 0;
        cin>>a>>b;

        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] != b[i])
            {
                int maior, menor;
                maior = b[i];
                menor = a[i];

                if(maior < menor)
                {
                    trocas += 26 + maior-menor;
                }
                else
                {
                    trocas += maior-menor;
                }

            }
        }
        cout<<trocas<<endl;

    }

    return 0;
}
#endif

#ifdef ex16

/*

Matring é uma mistura de Matriz e String. Ela foi desenvolvida pela UNILA
(União dos Nerds para Integração da Lógica e da Aventura) para manter mensagens seguras de escutas.

A primeira e última coluna de uma matring guarda a chave para traduzi-la na mensagem original.
As colunas restantes de uma matring representam uma string codificada em ASCII, uma coluna por caractere.

Para uma mensagem com N caracteres, a matring correspondente é uma matriz 4x(N+2) de dígitos.
Cada coluna é lida como um número de 4 dígitos; uma sequência de dígitos de cima para baixo é o
mesmo que uma sequência de dígitos da esquerda para a direita na horizontal.

Seja o primeiro número F, o último número L e os restantes uma sequência de números Mi, onde 1 ≤ i ≤ N.
A primeira coluna de uma matring é indexada por zero.

Para decodificar uma matring para uma string, calculamos: Ci = (F * Mi + L) mod 257,
onde Ci é o caractere em ASCII na posição i da mensagem original.

Sua tarefa é desenvolver um algoritmo para decodificar matrings.

Entrada
A entrada é uma matring, ou seja, uma matriz 4x(N+2) de dígitos (de 0 a 9) com 0 < N < 80.

Saída
A saída é dada em uma única linha e corresponde a string decodificada.
Inclua o caractere de fim-de-linha após a string.

*/

using namespace std;

int main()
{
    char matring[4][81];
    string n;

    getline(cin, n);

    for(int i = 0; i < n.size(); i++)
    {
        matring[0][i] = n[i];
    }

    for(int i = 1; i < 4; i ++)
    {
        for(int j = 0; j < n.size() ; j++)
        {
            cin>> matring[i][j];
        }
    }



    /*for(int i = 0; i < 4; i ++)
    {
        for(int j = 0; j < n.size(); j++)
        {
            cout<<matring[i][j];
        }
        cout<<endl;
    }*/




    return 0;
}
#endif

#ifdef ex17
using namespace std;

int main()
{

    return 0;
}
#endif

#ifdef ex18
using namespace std;

int main()
{

    return 0;
}
#endif

#ifdef ex19
using namespace std;

int main()
{

    return 0;
}
#endif

#ifdef ex20
using namespace std;

int main()
{

    return 0;
}
#endif

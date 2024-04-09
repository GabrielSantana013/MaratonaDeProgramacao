#include <iostream>

#define ex03


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
using namespace std;

/*

*/

int main()
{

    return 0;
}
#endif

#ifdef ex05
using namespace std;

int main()
{

    return 0;
}
#endif

#ifdef ex06
using namespace std;

int main()
{

    return 0;
}
#endif


#ifdef ex07
using namespace std;

int main()
{

    return 0;
}
#endif

#ifdef ex08
using namespace std;

int main()
{

    return 0;
}
#endif

#ifdef ex09
using namespace std;

int main()
{

    return 0;
}
#endif

#ifdef ex10
using namespace std;

int main()
{

    return 0;
}
#endif

#ifdef ex11
using namespace std;

int main()
{

    return 0;
}
#endif

#ifdef ex12
using namespace std;

int main()
{

    return 0;
}
#endif

#ifdef ex13
using namespace std;

int main()
{

    return 0;
}
#endif

#ifdef ex14
using namespace std;

int main()
{

    return 0;
}
#endif

#ifdef ex15
using namespace std;

int main()
{

    return 0;
}
#endif

#ifdef ex16
using namespace std;

int main()
{

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


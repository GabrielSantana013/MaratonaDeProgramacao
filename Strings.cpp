#include <iostream>

#define ex06
//refazer o 6


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
        
        if(tamanho2>tamanho1)
        {
            tamanho2 = tamanho2^tamanho1;
            tamanho1 = tamanho2^tamanho1;
            tamanho2 = tamanho2^tamanho1;
        }

        controle = 0;

        for(int i = 0; i < tamanho2; i++)
        {
            if(B[tamanho2-i] != A[tamanho1-i] && controle ==0)
            {
                cout<<"nao encaixa"<<endl;
                controle++;
            }
            else if(controle != 1 && i+1 ==tamanho2)
            {
                cout<<"encaixa"<<endl;
            }
        }
    }

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

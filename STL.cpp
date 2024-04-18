#include <iostream>
#include <bits/stdc++.h> //importa tudo (stl, string, set, map)

#define ex04
//pulou o 2

#ifdef ex01

/*

A tarefa aqui neste problema é ler uma expressão matemática na forma de dois números Racionais (numerador / denominador) e apresentar o resultado da operação.
Cada operando ou operador é separado por um espaço em branco. A sequência de cada linha que contém a expressão a ser lida é: número,
caractere, número, caractere, número, caractere, número. A resposta deverá ser apresentada e posteriormente simplificada.
Deverá então ser apresentado o sinal de igualdade e em seguida a resposta simplificada. No caso de não ser possível uma simplificação, deve ser apresentada a mesma resposta após o sinal de igualdade.

Considerando N1 e D1 como numerador e denominador da primeira fração, segue a orientação de como deverá ser realizada cada uma das operações:
Soma: (N1*D2 + N2*D1) / (D1*D2)
Subtração: (N1*D2 - N2*D1) / (D1*D2)
Multiplicação: (N1*N2) / (D1*D2)
Divisão: (N1/D1) / (N2/D2), ou seja (N1*D2)/(N2*D1)
Entrada
A entrada contem vários casos de teste. A primeira linha de cada caso de teste contem um inteiro N (1 ≤ N ≤ 1*104), indicando a quantidade de casos de teste que devem ser lidos logo a seguir.
Cada caso de teste contém um valor racional X (1 ≤ X ≤ 1000), uma operação (-, +, * ou /) e outro valor racional Y (1 ≤ Y ≤ 1000).

Saída
A saída consiste em um valor racional, seguido de um sinal de igualdade e outro valor racional, que é a simplificação do primeiro valor. No caso do primeiro valor não poder ser simplificado,
o mesmo deve ser repetido após o sinal de igualdade.

*/

int mdc(int X, int Y)
{
    while(Y != 0)
    {
        int temp = Y;
        Y = X%Y;
        X = temp;
    }
    return X;
}

void simplifica(int X, int Y)
{
    using namespace std;

    int divisorComum = mdc(X,Y);

    int numerador = 0, denominador = 0;

    numerador = X/divisorComum;
    denominador = Y/divisorComum;

    if(denominador<0)
    {
       cout<<"-"<<numerador<<"/"<<abs(denominador)<<endl;
    }
    else
    {
        cout<<numerador<<"/"<<denominador<<endl;
    }
}

using namespace std;
int main()
{
    int N;

    cin>>N;

    while(N>0)
    {
        int X, Y, X2, Y2;
        char operador;
        cin>>X;
        cin.ignore();
        cin.ignore();
        cin.ignore();
        cin>>Y;
        cin.ignore();
        cin>>operador;
        cin.ignore();
        cin>>X2;
        cin.ignore();
        cin.ignore();
        cin.ignore();
        cin>>Y2;


        switch(operador)
        {
             int numerador, denominador;
            case '+':
                numerador = (X*Y2+X2*Y);
                denominador = (Y*Y2);
                cout<<numerador<<"/"<<denominador;
                cout<<" = ";
                simplifica(numerador,denominador);
                break;
            case '-':
                numerador = (X*Y2-X2*Y);
                denominador = (Y*Y2);
                cout<<numerador<<"/"<<denominador;
                cout<<" = ";
                simplifica(numerador,denominador);
                break;
            case '*':
                numerador = (X*X2);
                denominador = (Y*Y2);
                cout<<numerador<<"/"<<denominador;
                cout<<" = ";
                simplifica(numerador,denominador);
                break;
            case '/':
                numerador = (X*Y2);
                denominador = (X2*Y);
                cout<<numerador<<"/"<<denominador;
                cout<<" = ";
                simplifica(numerador,denominador);
                break;
        }
        N--;
    }


    return 0;
}
#endif

#ifdef ex02

/*

Há uma famosa estação de trem na cidade PopPush. Esta cidade fica em um país incrivelmente acidentado e a estação foi criada no último século.
Infelizmente os fundos eram extremamente limitados naquela época. Foi possível construir somente uma pista. Além disso, devido a problemas de espaço,
foi feita uma pista apenas até a estação (veja figura abaixo).

A tradição local é que todos os comboios que chegam vindo da direção A continuam na direção B com os vagões  reorganizados, de alguma forma.
Suponha que o trem que está chegando da direção A tem N <= 1000 vagões numerados sempre em ordem crescente 1,2, ..., N. O primeiro que chega é o 1 e o último que chega é o N.
Existe um chefe de reorganizações de trens que quer saber se é possível reorganizar os vagões para que os mesmos saiam na direção B na ordem a1, a2, an..

O  chefe pode utilizar qualquer estratégia para obter a saída desejada. No caso do desenho ilustrado acima, por exemplo,
basta o chefe deixar todos os vagões entrarem na estação (do 1 ao 5) e depois retirar um a um: retira o 5, retira o 4, retira o 3, retira o 2 e por último retira o 1.
Desta forma, se o chefe quer saber se a saída 5,4,3,2,1 é possível em B, a resposta seria Yes.
Vagão que entra na estação só pode sair para a direção B e é possível incluir quantos forem necessários para retirar o primeiro vagão desejado.

Entrada
O arquivo de entrada consiste de um bloco de linhas, cada bloco, com exceção do último, descreve um trem e possivelmente mais do que uma requisição de reorganização.
Na primeira linha de cada bloco há um inteiro N que é a quantidade de vagões. Em cada uma das próximas linhas de entrada haverá uma permutação dos valores 1,2, …, N.
A última linha de cada bloco contém apenas 0. Um bloco iniciando com zero (0) indica o final da entrada.

Saída
O arquivo de saída contém a quantidade de linhas correspondente às linhas com permutações no arquivo de entrada.
Cada linha de saída deve ser Yes se for possível organizar os vagões da forma solicitada e No, caso contrário.
Há também uma linha em branco após cada bloco de entrada. No exemplo abaixo,  O primeiro caso de teste tem 3 permutações para 5 vagões.
O ultimo zero dos testes de entrada não devem ser processados.
*/

using namespace std;
int main()
{

    return 0;
}
#endif


#ifdef ex03

/*

Dada uma expressão qualquer com parênteses, indique se a quantidade de parênteses está correta ou não, sem levar em conta o restante da expressão. Por exemplo:

a+(b*c)-2-a        está correto
(a+b*(2-c)-2+a)*2  está correto

enquanto

(a*b-(2+c)         está incorreto
2*(3-a))           está incorreto
)3+b*(2-c)(        está incorreto

Ou seja, todo parênteses que fecha deve ter um outro parênteses que abre correspondente e não pode haver parênteses que fecha sem um previo parenteses que abre
e a quantidade total de parenteses que abre e fecha deve ser igual.

Entrada
Como entrada, haverá N expressões (1 <= N <= 10000), cada uma delas com até 1000 caracteres.

Saída
O arquivo de saída deverá ter a quantidade de linhas correspondente ao arquivo de entrada, cada uma delas contendo as palavras correct ou incorrect de acordo
com as regras acima fornecidas.

*/

using namespace std;
int main()
{
    string expressao;

    int contaTotal = 0;

    while(cin>>expressao)
    {
        contaTotal = 0;
        for(int i = 0; i < expressao.size(); i++)
        {
            if(expressao[i] == '(')
            {
                contaTotal++;
            }
            else if(expressao[i] == ')')
            {
                contaTotal--;
            }

            if(contaTotal<0)
            {
                cout<<"incorrect"<<endl;
                break;
            }

            if(contaTotal != 0 && i == expressao.size()-1)
            {
                cout<<"incorrect"<<endl;
                break;
            }
            else if(contaTotal == 0 && i == expressao.size()-1)
            {
                cout<<"correct"<<endl;
                break;
            }
        }
    }

    return 0;
}
#endif


#ifdef ex04

/*

João está trabalhando em uma mina, tentando retirar o máximo que consegue de diamantes "<>".
Ele deve excluir todas as particulas de areia "." do processo e a cada retirada de diamante, novos diamantes poderão se formar.
Se ele tem como uma entrada .<...<<..>>....>....>>>., três diamantes são formados. O primeiro é retirado de <..>, resultando  .<...<>....>....>>>.
Em seguida o segundo diamante é retirado, restando .<.......>....>>>. O terceiro diamante é então retirado,
restando no final .....>>>., sem possibilidade de extração de novo diamante.

Entrada
Deve ser lido um valor inteiro N que representa a quantidade de casos de teste. Cada linha a seguir é um caso de teste que contém até 1000 caracteres,
incluindo "<,>, ."

Saída
Você deve imprimir a quantidade de diamantes possíveis de serem extraídos em cada caso de entrada.

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


#ifdef ex10

/*



*/

using namespace std;
int main()
{

    return 0;
}
#endif


#ifdef ex11

/*



*/

using namespace std;
int main()
{

    return 0;
}
#endif


#ifdef ex12

/*



*/

using namespace std;
int main()
{

    return 0;
}
#endif


#ifdef ex13

/*



*/

using namespace std;
int main()
{

    return 0;
}
#endif


#ifdef ex14

/*



*/

using namespace std;
int main()
{

    return 0;
}
#endif


#ifdef ex15

/*



*/

using namespace std;
int main()
{

    return 0;
}
#endif


#ifdef ex16

/*



*/

using namespace std;
int main()
{

    return 0;
}
#endif


#ifdef ex17

/*



*/

using namespace std;
int main()
{

    return 0;
}
#endif


#ifdef ex18

/*



*/

using namespace std;
int main()
{

    return 0;
}
#endif


#ifdef ex19

/*



*/

using namespace std;
int main()
{

    return 0;
}
#endif


#ifdef ex20

/*



*/

using namespace std;
int main()
{

    return 0;
}
#endif

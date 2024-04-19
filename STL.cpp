#include <iostream>
#include <bits/stdc++.h> //importa tudo (stl, string, set, map)

#define ex07
//pulou o 2
//pulou o 5

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
    int N, diamantes;
    string mina;

    cin>>N;

    while(N>0)
    {
        cin>>mina;
        diamantes = 0;
        queue<char>busca;

        for(int i = 0; i < mina.size(); i++)
        {
            if(mina[i] == '<')
            {
                busca.push(mina[i]);
            }
            else if(mina[i] == '>' && !busca.empty())
            {
                busca.pop();
                diamantes++;
            }
        }
        cout<<diamantes<<endl;
        N--;
    }

    /* <..><.<..>> */


    return 0;
}
#endif


#ifdef ex05

/*

O Professor solicitou que você escreva um programa que converta uma expressão na forma infixa (como usualmente conhecemos) para uma expressão na forma posfixa.
Como você sabe, os termos in (no meio) e pos (depois) se referem à posição dos operadores.
O programa terá que lidar somente com operadores binários +,-,*,/,^, parênteses, letras e números. Um exemplo seria uma expressão como:
(A*B+2*C^3)/2*A. O programa deve converter esta expressão (infixa) para a expressão posfixa: AB*2C3^*+2/A*


Entrada
A primeira linha da entrada contém um valor inteiro N (N < 1000), que indica o número de casos de teste.
Cada caso de teste a seguir é uma expressão válida na forma infixa, com até 300 caracteres.

Saída
Para cada caso, apresente a expressão convertida para a forma posfixa.

*/

using namespace std;
int main()
{
    int N;

    cin>>N;

    while(N >0)
    {
        string expressao;
        cin>>expressao;




        N--;
    }




    return 0;
}
#endif


#ifdef ex06

/*

Dada uma pilha de n cartas enumeradas de 1 até n com a carta 1 no topo e a carta n na base.
A seguinte operação é ralizada enquanto tiver 2 ou mais cartas na pilha.

Jogue fora a carta do topo e mova a próxima carta (a que ficou no topo) para a base da pilha.

Sua tarefa é encontrar a sequência de cartas descartadas e a última carta remanescente.

Cada linha de entrada (com exceção da última) contém um número n ≤ 50. A última linha contém 0 e não deve ser processada.
Cada número de entrada produz duas linhas de saída. A primeira linha apresenta a sequência de cartas descartadas e a segunda linha apresenta a carta remanescente.

Entrada
A entrada consiste em um número indeterminado de linhas contendo cada uma um valor de 1 até 50. A última linha contém o valor 0.

Saída
Para cada caso de teste, imprima duas linhas. A primeira linha apresenta a sequência de cartas descartadas, cada uma delas separadas por uma vírgula e um espaço.
A segunda linha apresenta o número da carta que restou. Nenhuma linha tem espaços extras no início ou no final. Veja exemplo para conferir o formato esperado.

*/

using namespace std;
int main()
{

    int nCartas, qttCartas, inicio;

    cin>>nCartas;

    while(nCartas!= 0)
    {
        queue<int> cartas;
        qttCartas = nCartas;

        //preenche a fila
        for(int i = 0; i < nCartas; i++)
        {
            cartas.push(i+1);
        }

        cout<<"Discarded cards: ";
        while(qttCartas>=2)
        {
            if(qttCartas!=2)
            {
                cout<<cartas.front()<<", ";
                cartas.pop();
                cartas.push(cartas.front());
                cartas.pop();
            }
            else
            {
                cout<<cartas.front()<<endl;
                cartas.pop();
            }
            qttCartas--;

        }
        cout<<"Remaining card: "<<cartas.front()<<endl;;
        cin>>nCartas;
    }

    return 0;
}
#endif


#ifdef ex07

/*

Devido ao grande número de reclamações, a companhia telefônica de São Petersburgo está sendo obrigada a investir pesado na melhora de seus serviços.
Para isso a companhia decidiu diminuir o orçamento de alguns setores para aumentar o de outros mais essenciais.
Um dos setores que terá seu orçamento reduzido é o de impressão de listas telefônicas.

Com um orçamento reduzido, o setor de impressão de listas telefônicas não consegue comprar toner suficiente para imprimir as listas completas.
Como os números de telefone são impressos alinhados na vertical, foi sugerida a seguinte solução: a partir do segundo número de telefone impresso,
os dígitos iniciais do próximo número a ser impresso que coincidirem com os do número acima são omitidos, ficando apenas um espaço em branco.
Por exemplo, para os números 535456, 535488, 536566 e 835456 a impressão é a seguinte:


5 3 5 4 5 6
        8 8
    6 5 6 6
8 3 5 4 5 6


Note que esta impressão economizou a impressão de 6 caracteres. A companhia telefonica cogitou também não imprimir os sufixos repetidos,
mas nos testes feitos viram que a resposta não foi boa para o usuário e decidiram, portanto, fazer apenas a eliminação em prefixos.
Para saber se a economia será suficiente, o setor de impressão quer saber o número máximo de caracteres que podem ser omitidos.
No entanto, como em qualquer cidade grande, são vários os números telefônicos e eles não querem gastar homens-hora para calcular manualmente este valor.
Então cabe a você, novo empregado da companhia, automatizar a economia feita pelo toner, no número de caracteres.

Entrada
A entrada é composta por diversas instâncias e termina com final de arquivo (EOF). Cada caso de teste contém um inteiro N,
que informa o número de telefones na lista. As próximas N (1 ≤ N ≤ 105) linhas possuem, cada uma delas, um telefone Xi, de até 200 caracteres.
Para um mesmo caso de teste os números de telefone têm a mesma quantidade de caracteres. Um número de telefone pode começar com o caracter ’0’.

Saída
Para cada caso de teste imprima uma linha informando o maior número possível de caracteres economizados por este processo.

*/

using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
        int contador = 0;
        vector<string> numeros(N);
        string num;

        for(int i = 0; i < N; i ++)
        {
            cin>>numeros[i];
        }

        sort(numeros.begin(), numeros.end());

        for(int i = 0; i < N-1; i++)
        {
           string telefone = numeros[i];

           for(int j = 0; j < telefone.size(); j++)
           {
               if(telefone[j] == numeros[i+1][j])
               {
                   cout<<"cu";
                   contador++;
               }
           }
        }
    }


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

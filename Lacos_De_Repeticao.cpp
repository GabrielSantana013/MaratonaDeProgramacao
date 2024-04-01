#include <iostream>
#include <iomanip>

#define ex22

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
#include <iomanip>

using namespace std;

int main()
{
    int N, Q, rato=0, sapo=0, coelho=0, cobaiaTotal=0;
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
    cout <<"Percentual de coelhos: "<<fixed<<setprecision(2)<<(double(coelho)/double(cobaiaTotal)*100) <<" %" <<endl;
    cout <<"Percentual de ratos: "<<fixed<<setprecision(2)<<(double(rato)/double(cobaiaTotal)*100) <<" %" <<endl;
    cout <<"Percentual de sapos: "<<fixed<<setprecision(2)<<(double(sapo)/double(cobaiaTotal)*100) <<" %" <<endl;

    return 0;
}

#endif

#ifdef ex02

/*

Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero).
Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).

Entrada
O arquivo de entrada contém um número não determinado de valores M e N. A última linha de entrada vai conter um número nulo ou negativo.

Saída
Para cada dupla de valores, imprima a sequência do menor até o maior e a soma deles, conforme exemplo abaixo.

*/

using namespace std;

int main()
{
    int M, N, sum = 0;
    while(1)
    {
        sum = 0;
        cin>>M>>N;
        if(M <=0 || N <=0)
        {
            break;
        }
        if(N>M)
        {
            M = M+N;
            N = M-N;
            M = M-N;
        }
        for(int i = N; i<=M; i++)
        {
            cout<<i<<" ";

            sum +=i;
            if(i==M)
            {
              cout<<"Sum="<<sum<<endl;
            }
        }
    }


    return 0;
}

#endif

#ifdef ex03

/*
Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

Entrada
O arquivo de entrada contém 100 números inteiros, positivos e distintos.

Saída
Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.

*/

using namespace std;

int main()
{
    int maiorNum=0, posMaior, N;
    for(int i = 0; i <100; i++)
    {
        cin >> N;
        if(N >= maiorNum)
        {
            maiorNum = N;
            posMaior = i+1;
        }
    }

    cout<<maiorNum<<endl;
    cout<<posMaior<<endl;

    return 0;
}

#endif

#ifdef ex04

/*

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo

i = 1 j = 60
i = 4 j = 55
i = 7 j = 50
i = 10 j = 45

*/

using namespace std;

int main()
{
    int j = 60, i = 1;
    while(j>=0)
    {
        cout<<"I="<<i<<" ";
        cout<<"J="<<j<<endl;
        j -=5;
        i +=3;
    }

    return 0;
}

#endif

#ifdef ex05

/*

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo

i = 1 j = 7
i = 1 j = 6
i = 1 j = 5
i = 3 j = 7
i = 3 j = 6
i = 3 j = 5

*/

using namespace std;

int main()
{
    for(int i = 1; i <10; i+=2)
    {

        for(int j = 7; j>=5; j--)
        {
            cout<<"I="<<i<<" ";
            cout<<"J="<<j<<endl;
        }
    }


    return 0;
}

#endif

#ifdef ex06

/*

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo.


i = 1 j = 7
i = 1 j = 6
i = 1 j = 5
i = 3 j = 7
i = 3 j = 6
i = 3 j = 5

*/

using namespace std;

int main()
{
    int j = 7, jInit;

    for(int i = 1; i <10; i+=2)
    {

        jInit = j-3;
        for(j!=0; j!=jInit; j--)
        {
            cout<<"I="<<i<<" ";
            cout<<"J="<<j<<endl;
        }
        j += 5;
    }

    return 0;
}

#endif

#ifdef ex07

/*

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo.



I=0 J=1
I=0 J=2
I=0 J=3
I=0.2 J=1.2
I=0.2 J=2.2
I=0.2 J=3.2
.....
I=2 J=?
I=2 J=?
I=2 J=?

*/

#include <iomanip>
using namespace std;


int main()
{
    double j = 1, i = 0, jInit = 0, incremento = 0;

    for(i >= 0; i <=2; i+=0.2)
    {

        jInit = j+2;

        if(i > 0)
        {
            incremento += 0.2;
            setprecision(1);
        }

        for(j!=0; j<=jInit; j++)
        {
            cout<<"I="<<i<<" ";
            cout<<"J="<<j+incremento<<endl;
        }
        j = 1;
    }
    return 0;
}

#endif


#ifdef ex08

/*

Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir.
Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.

Entrada
A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir.
Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

Saída
Imprima a soma de todos valores ímpares entre X e Y.

*/

using namespace std;

int main()
{
    int N, n1, n2, sum=0;

    cin>>N;

    for(int i = 0; i<N; i++)
    {
        cin>>n1>>n2;
        sum = 0;
        if(n1>n2)
        {
            n1 = n1^n2;
            n2 = n1^n2;
            n1 = n1^n2;
        }

        for(int j = n1+1; j<n2; j++)
        {
            if(j%2!=0)
            {
                sum+=j;
            }
        }

 cout<<sum<<endl;

    }



    return 0;
}

#endif


#ifdef ex09

/*

Escreva um programa que repita a leitura de uma senha até que ela seja válida.
Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida".
Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado.
Considere que a senha correta é o valor 2002.

Entrada
A entrada é composta por vários casos de testes contendo valores inteiros.

Saída
Para cada valor lido mostre a mensagem correspondente à descrição do problema.

*/

using namespace std;

int main()
{

    int senha = 2002, palpite=0;

    do
    {
        cin>>palpite;
        if(palpite!=senha)
        {
            cout<<"Senha Invalida"<<endl;
        }
        else
        {
           cout<<"Acesso Permitido"<<endl;
        }


    }while(palpite!=senha);

    return 0;
}

#endif


#ifdef ex10

/*

Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano.
Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será encerrado quando pelo menos uma de duas coordenadas
for NULA (nesta situação sem escrever mensagem alguma).

Entrada
A entrada contém vários casos de teste. Cada caso de teste contém 2 valores inteiros.

Saída
Para cada caso de teste mostre em qual quadrante do sistema cartesiano se encontra a coordenada lida, conforme o exemplo.

*/


using namespace std;

int main(){

    float x,y;

    cin>>x>>y;

    while(x != 0 && y !=0)
    {
        if(x>0 &&y>0)
        {
            cout<<"primeiro"<<endl;
        }
        else if(x<0 && y>0)
        {
            cout<<"segundo"<<endl;
        }
        else if(x<0 && y<0)
        {
            cout<<"terceiro"<<endl;
        }
        else
        {
            cout<<"quarto"<<endl;
        }

        cin>>x>>y;
    }

    return 0;
}

#endif


#ifdef ex11

/*

Escreva um programa que leia um valor inteiro N.
Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.

Entrada
O arquivo de entrada contém um número inteiro positivo N.

Saída
Imprima a saída conforme o exemplo fornecido.


1 2 3 PUM
5 6 7 PUM
9 10 11 PUM
13 14 15 PUM
17 18 19 PUM
21 22 23 PUM
25 26 27 PUM

*/


using namespace std;

int main(){

    int N, j = 1, controle;
    cin>>N;

    controle = 3;


    for(int i = 1; i <=N; i++)
    {

        for(j != 0; j<=controle; j++)
        {
            cout<<j<<" ";

        }
        cout<<"PUM"<<endl;
        j++;
        controle+=4;

    }

    return 0;
}

#endif


#ifdef ex12

/*

Escreva um programa que leia um valor inteiro N. N * 2 linhas de saída serão apresentadas na execução do programa,
seguindo a lógica do exemplo abaixo. Para valores com mais de 6 dígitos, todos os dígitos devem ser apresentados.

Entrada
O arquivo de entrada contém um número inteiro positivo N (1 < N < 1000).

Saída
Imprima a saída conforme o exemplo fornecido.



1 1 1 - impar
1 2 2 - par
2 4 8 - impar
2 5 9 - par
3 9 27 - impar
3 10 28
4 16 64
4 17 65
5 25 125
5 26 126

*/

#include <math.h>
#include <iomanip>
using namespace std;

int main(){

    double N, n1 = 1, n2 = 1, n3 = 1;

    cin>>N;

    for(int i = 1; i<=N*2; i++)
    {
        if(i==1)
        {
            cout<<n1<<" "<<n2<<" "<<n3<<endl;
        }

        else if(i%2!=0)
        {
            n1++;
            n2++;
            n3++;
            cout<<fixed<<setprecision(0)<<pow(n1,1)<<" "<<pow(n2,2)<<" "<<pow(n3,3)<<endl;

        }
        else
        {
            cout<<pow(n1,1)<<" "<<pow(n2,2)+1<<" "<<pow(n3,3)+1<<endl;
        }

    }

    return 0;
}

#endif


#ifdef ex13

/*

Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência de 1 até Y, passando para a próxima linha a cada X números.

Entrada
O arquivo de entrada contém dois valores inteiros, (1 < X < 20) e (X < Y < 100000).

Saída
Cada sequência deve ser impressa em uma linha apenas, com 1 espaço em branco entre cada número, conforme exemplo abaixo.
Não deve haver espaço em branco após o último valor da linha.

*/


using namespace std;

int main(){

    int X, Y, i, j;

    cin>>X>>Y;

    for(i = 1; i <Y;)
    {
        for(j = 0; j < X; j++)
        {
            if(j+1 !=X)
            {
             cout<<i<<" ";
            }
            else
            {
                cout<<i;

            }
            i++;
        }
    cout<<endl;
    }
    return 0;
}

#endif



#ifdef ex14

/*

Faça um algoritmo para ler um valor A e um valor N. Imprimir a soma de A + i para cada i com os valores (0 <= i <= N-1).
Enquanto N for negativo ou ZERO, um novo N(apenas N) deve ser lido.

Entrada
A entrada contém somente valores inteiros, podendo ser positivos ou negativos. Todos os valores estão na mesma linha.

Saída
A saída contém apenas um valor inteiro.

*/


using namespace std;

int main(){

    int A, N, i = 0, soma=0;
    cin>>A>>N;

    while(N<=0)
    {
        cin>>N;
    }

    while(i <= N-1)
    {
        soma += A+i;
        i++;
    }

cout <<soma<<endl;
    return 0;
}

#endif



#ifdef ex15

/*

Faça um programa que leia dois inteiros: X e Z (devem ser lidos tantos valores para Z quantos necessários, até que seja digitado um valor maior do que X para ele).
Conte quantos números inteiros devem ser somados em sequência (considerando o X nesta soma) para que a soma ultrapasse a Z o mínimo possível.
Escreva o valor final da contagem.

A entrada pode conter, por exemplo, os valores 21 21 15 30. Neste caso, é então assumido o valor 21 para X enquanto os valores 21 e 15 devem ser desconsiderados
pois são menores ou iguais a X. Como o valor 30 está dentro da especificação (maior do que X) ele será válido e então deve-se processar os cálculos para apresentar
na saída o valor 2, pois é a quantidade de valores somados para se produzir um valor maior do que 30 (21 + 22).

Entrada
A entrada contém somente valores inteiros, um por linha, podendo ser positivos ou negativos.
O primeiro valor da entrada será o valor de X. A próxima linha da entrada irá conter Z.
Se Z não atender a especificação do problema, ele deverá ser lido novamente, tantas vezes quantas forem necessárias.

Saída
Imprima uma linha com um número inteiro que representa a quantidade de números inteiros que devem ser somadas, de acordo com a especificação acima.

*/


using namespace std;

int main(){

    int X,Z, contador = 0, sum = 0;
    cin>>X>>Z;

    while(Z<=X)
    {
        cin>>Z;
    }

    for(int i = X; sum < Z; i++)
    {
        sum += X+1;
        contador++;
    }

    cout<<contador<<endl;

    return 0;
}

#endif



#ifdef ex16

/*

Faça um programa que mostre os números pares entre 1 e 100, inclusive.

Entrada
Neste problema extremamente simples de repetição não há entrada.

Saída
Imprima todos os números pares entre 1 e 100, inclusive se for o caso, um em cada linha.

*/


using namespace std;

int main(){

    for(int i = 1; i<=100; i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}

#endif



#ifdef ex17

/*

O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar quando o valor de X for igual a 0). Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X , se for par. Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação: 4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a soma de 12+14+16+18+20.

Entrada
O arquivo de entrada contém muitos valores inteiros. O último valor do arquivo é zero.

Saída
Imprima a saida conforme a explicação acima e o exemplo abaixo.

*/


using namespace std;

int main(){

    int X, sum = 0, somaPar = 0;

    while(X!=0)
    {
        cin>>X;
        if(X==0)
        {
            return 0;
        }
        while(somaPar !=5)
        {
            if(X%2==0)
            {
                sum+=X;
                somaPar++;
            }
            X++;
        }
    cout<<sum<<endl;
    sum = 0;
    somaPar = 0;

    }

    return 0;
}

#endif



#ifdef ex18

/*

Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.

Entrada
A entrada contém um valor inteiro N (5 < N < 2000).

Saída
Imprima o quadrado de cada um dos valores pares, de 1 até N, conforme o exemplo abaixo.

Tome cuidado! Algumas linguagens tem por padrão apresentarem como saída 1e+006 ao invés de 1000000 o que ocasionará resposta errada.
Neste caso, configure a precisão adequadamente para que isso não ocorra.

*/

#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    int N;
    cin>>N;

    for(int i = 2; i <=N; i+=2)
    {
        cout<<fixed<<setprecision(0)<<i<<"^2 = "<<pow(i,2)<<endl;

    }

    return 0;
}

#endif



#ifdef ex19

/*

Leia um valor inteiro N. Este valor será a quantidade de valores que serão lidos em seguida.
Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido é par (EVEN), ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE).
No caso do valor ser igual a zero (0), embora a descrição correta seja (EVEN NULL), pois por definição zero é par, seu programa deverá imprimir apenas NULL.

Entrada
A primeira linha da entrada contém um valor inteiro N(N < 10000) que indica o número de casos de teste. Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).

Saída
Para cada caso, imprima uma mensagem correspondente, de acordo com o exemplo abaixo.
Todas as letras deverão ser maiúsculas e sempre deverá haver um espaço entre duas palavras impressas na mesma linha.

*/


    using namespace std;

    int main(){

        int N, num;

        cin >> N;

        for(int i = 0; i <N; i++)
        {
          cin>>num;

          if(num == 0)
          {
              cout<<"NULL"<<endl;
              continue;
          }

          if(num%2==0)
          {
              cout<<"EVEN ";
          }
          else
          {
           cout<<"ODD ";
          }

          if(num>0)
          {
              cout<<"POSITIVE"<<endl;
          }
          else
          {
              cout<<"NEGATIVE"<<endl;
          }

        }

        return 0;
    }

#endif



#ifdef ex20

/*

Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão resto igual a 2.

Entrada
A entrada contém um valor inteiro N (N < 10000).

Saída
Imprima todos valores que quando divididos por N dão resto = 2, um por linha.

*/


using namespace std;

int main(){


    int N;
    cin>>N;

    for(int i = 1; i<=10000; i++)
    {
        if(i%N == 2)
        {
            cout<<i<<endl;
        }
    }


    return 0;
}

#endif



#ifdef ex21

/*

Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:
1 x N = N      2 x N = 2N        ...       10 x N = 10N

Entrada
A entrada contém um valor inteiro N (2 < N < 1000).

Saída
Imprima a tabuada de N, conforme o exemplo fornecido.

*/


using namespace std;

int main(){

    int N;

    cin >> N;

    for(int i = 1; i <=10; i++)
    {
        cout<<i<<" x "<<N<<" = "<<i * N<<endl;
    }

    return 0;
}

#endif



#ifdef ex22

/*

Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal.
Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.

Entrada
O arquivo de entrada contém um valor inteiro N na primeira linha. Cada N linha a seguir contém um caso de teste com três valores com uma casa decimal cada valor.

Saída
Para cada caso de teste, imprima a média ponderada dos 3 valores, conforme exemplo abaixo.

*/

#include <iomanip>

using namespace std;

int main(){


    int N;
    double n1, n2, n3;

    cin>> N;

    for(int i = 0; i<N; i++)
    {
        cin>>n1>>n2>>n3;

        cout<<fixed<<setprecision(1)<<((n1*2)+(n2*3)+(n3*5))/10 <<endl;
    }

    return 0;
}

#endif

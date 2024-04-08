#include <iostream>


#define ex30

#ifdef ex01

/*

Faça um programa que leia um vetor X[10]. Substitua a seguir, todos os valores nulos e negativos do vetor X por 1.
Em seguida mostre o vetor X.

Entrada
A entrada contém 10 valores inteiros, podendo ser positivos ou negativos.

Saída
Para cada posição do vetor, escreva "X[i] = x", onde i é a posição do vetor e x é o valor armazenado naquela posição.

*/

using namespace std;

int main()
{
    int x[10];

    for(int i = 0; i<10; i++)
    {
        cin>>x[i];

        if(x[i]<=0)
        {
            x[i] = 1;
        }

        cout<<"X["<<i<<"]"<<" = "<<x[i]<<endl;
    }
    return 0;
}

#endif


#ifdef ex02

/*

Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10].
Em cada posição subsequente, coloque o dobro do valor da posição anterior.
Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.

Entrada
A entrada contém um valor inteiro (V<=50).

Saída
Para cada posição do vetor, escreva "N[i] = X", onde i é a posição do vetor e X é o valor armazenado na posição i.
O primeiro número do vetor N (N[0]) irá receber o valor de V.

*/

using namespace std;

int main()
{
    int n[10], N;

    cin>>N;

    for(int i = 0; i<10;i++)
    {
        n[i] = N;
        N*=2;
        cout<<"N["<<i<<"]"<<" = "<<n[i]<<endl;
    }



    return 0;
}

#endif


#ifdef ex03

/*

Faça um programa que leia um vetor A[100]. No final, mostre todas as posições do vetor que armazenam um valor menor ou igual a 10 e o valor armazenado em cada uma das posições.

Entrada
A entrada contém 100 valores, podendo ser inteiros, reais, positivos ou negativos.

Saída
Para cada valor do vetor menor ou igual a 10, escreva "A[i] = x", onde i é a posição do vetor e x é o valor armazenado na posição, com uma casa após o ponto decimal.

*/

using namespace std;
#include <iomanip>

int main()
{

    double a[100];

    for(int i = 0; i<100; i++)
    {
        cin>>a[i];
        if(a[i]<=10)
        {
          cout<<fixed<<setprecision(1)<<"A["<<i<<"]"<<" = "<<a[i]<<endl;
        }
    }

    return 0;
}

#endif

#ifdef ex04

/*

Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc.
, até trocar o 10º com o 11º. Mostre o vetor modificado.

Entrada
A entrada contém 20 valores inteiros, positivos ou negativos.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição.

*/

using namespace std;

int main()
{

    int N[20], j=20;

    for(int i = 0; i<20; i++)
    {
        cin>>N[i];

    }

    for(int i = 0; i<10; i++)
    {
        int temp = N[i];
        N[i] = N[19-i];
        N[19-i] = temp;
    }

    for(int i = 0; i <20; i++)
    {
        cout<<"N["<<i<<"]"<<" = "<<N[i]<<endl;
    }


    return 0;
}

#endif

#ifdef ex05

/*

Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido.
Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele.
Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.

Entrada
A primeira linha da entrada contém um inteiro T, indicando o número de casos de teste.
Cada caso de teste contém um único inteiro N (0 ≤ N ≤ 60), correspondente ao N-esimo termo da série de Fibonacci.

Saída
Para cada caso de teste da entrada, imprima a mensagem "Fib(N) = X", onde X é o N-ésimo termo da série de Fibonacci.

*/

using namespace std;

int main()
{
    int T, N, j;
    cin>>T;

    unsigned long long fibo[61];

    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 0; i<T; i++)
    {
        cin>>N;

        for(j = 0; j<N; j++)
        {
            fibo[j+2] = fibo[j]+fibo[j+1];


        }
        cout<<"Fib("<<N<<") = "<<fibo[j]<<endl;
        j = 0;

    }

    return 0;
}

#endif


#ifdef ex06

/*

Faça um programa que leia um valor T e preencha um vetor N[1000] com a sequência de valores de 0 até T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.

Entrada
A entrada contém um valor inteiro T (2 ≤ T ≤ 50).

Saída
Para cada posição do vetor, escreva "N[i] = x", onde i é a posição do vetor e x é o valor armazenado naquela posição.

*/

using namespace std;

int main()
{
    int T, n[1000], i = 0, j = 0;
    cin>>T;

    for(int k = 0; k<1000; k++)
    {
        for(j = 0; j<=T-1 && i < 1000; j++, i++)
        {
            n[i] = j;
            cout<<"N["<<i<<"]"<<" = "<<n[i]<<endl;
        }
    }

    return 0;
}

#endif


#ifdef ex07

/*

Leia um valor X. Coloque este valor na primeira posição de um vetor N[100].
Em cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado na posição anterior, conforme o exemplo abaixo. Imprima o vetor N.

Entrada
A entrada contem um valor de dupla precisão com 4 casas decimais.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição.
Cada valor do vetor deve ser apresentado com 4 casas decimais.

*/

#include <iomanip>
using namespace std;

int main()
{
    double X, n[100];
    cin>>X;

    for(int i = 0; i<100; i++)
    {
        n[i] = X;
        X /=2;
        cout<<fixed<<setprecision(4)<<"N["<<i<<"]"<<" = "<<n[i]<<endl;
    }

    return 0;
}

#endif


#ifdef ex08

/*

Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares.
Só que o tamanho de cada um dos dois vetores é de 5 posições.
Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos.
Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar.
Cada vetor pode ser preenchido tantas vezes quantas for necessário.

Entrada
A entrada contém 15 números inteiros.

Saída
Imprima a saída conforme o exemplo abaixo.

*/

using namespace std;

int main()
{
    int valores[15], pares[5], impares[5], p=0, j=0;

    for(int i = 0; i<15; i++)
    {
        cin>> valores[i];

        if(valores[i]%2==0)
        {
            pares[p] = valores[i];
            p++;
        }
        else
        {
            impares[j] = valores[i];
            j++;
        }

        if(p == 5)
        {
            for(int k =0; k<5; k++)
            {
                cout<<"par["<<k<<"] = "<<pares[k]<<endl;
            }
            p = 0;
        }
        if(j == 5)
        {
            for(int k =0; k<5; k++)
            {
                cout<<"impar["<<k<<"] = "<<impares[k]<<endl;
            }
            j = 0;
        }
    }

    if(j!=0)
    {
        for(int i = 0; i<j; i++)
        {
          cout<<"impar["<<i<<"] = "<<impares[i]<<endl;
        }
    }

    if(p!=0)
    {
        for(int i = 0; i<p; i++)
        {
          cout<<"par["<<i<<"] = "<<pares[i]<<endl;
        }
    }

    return 0;
}

#endif


#ifdef ex09

/*

Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N].
A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor e a sua posição dentro do vetor, mostrando esta informação.

Entrada
A primeira linha de entrada contem um único inteiro N (1 < N < 1000), indicando o número de elementos que deverão ser lidos em seguida para o vetor X[N] de inteiros.
A segunda linha contém cada um dos N valores, separados por um espaço. Vale lembrar que nenhuma entrada haverá números repetidos.

Saída
A primeira linha apresenta a mensagem “Menor valor:” seguida de um espaço e do menor valor lido na entrada.
A segunda linha apresenta a mensagem “Posicao:” seguido de um espaço e da posição do vetor na qual se encontra o menor valor lido, lembrando que o vetor inicia na posição zero.

*/

using namespace std;

int main()
{

    int N, menorNum, posMenor;

    cin>>N;
    int x[N];

    for(int i = 0; i<N; i++)
    {
        cin>>x[i];
        if(i == 0)
        {
            menorNum = x[0];
            posMenor = i;
        }

        if(x[i]<menorNum)
        {
            menorNum = x[i];
            posMenor = i;
        }

    }

    cout<<"Menor valor: "<<menorNum<<endl;
    cout<<"Posicao: "<<posMenor<<endl;
    return 0;
}

#endif


#ifdef ex10

/*

Neste problema você deve ler um número, indicando uma linha da matriz na qual uma operação deve ser realizada, um caractere maiúsculo, indicando a operação que será realizada,
e todos os elementos de uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área verde da matriz, conforme for o caso.
A imagem abaixo ilustra o caso da entrada do valor 2 para a linha da matriz, demonstrando os elementos que deverão ser considerados na operação.




Entrada
A primeira linha de entrada contem um número L (0 ≤ L ≤ 11) indicando a linha que será considerada para operação.
A segunda linha de entrada contém um único caractere Maiúsculo T ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz.
Seguem os 144 valores de ponto flutuante que compõem a matriz, sendo que a mesma é preenchida linha por linha, da linha 0 até a linha 11, sempre da esquerda para a direita.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

*/

using namespace std;
#include <iomanip>

int main()
{
    double matriz[12][12];
    int linha;
    char operacao;


    cin>>linha;
    cin>>operacao;

    for(int i = 0; i<12;i++)
    {
        for(int j = 0; j<12; j++)
        {
            cin>>matriz[i][j];
        }
    }

    if(operacao == 'S')
    {
        double soma = 0;
        for(int i = 0; i < 12; i++)
        {
            soma += matriz[linha][i];
        }
        cout<<fixed<<setprecision(1)<<soma<<endl;
    }
    else
    {
        double media = 0;
        for(int i = 0; i < 12; i++)
        {
            media += matriz[linha][i];
        }
        cout<<fixed<<setprecision(1)<<media/12<<endl;
    }

    return 0;
}

#endif


#ifdef ex11

/*

Neste problema você deve ler um número que indica uma coluna de uma matriz na qual uma operação deve ser realizada, um caractere maiúsculo,
indicando a operação que será realizada, e todos os elementos de uma matriz M[12][12].
Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área verde da matriz, conforme for o caso.
A imagem abaixo ilustra o caso da entrada do valor 5 para a coluna da matriz, demonstrando os elementos que deverão ser considerados na operação.




Entrada
A primeira linha de entrada contem um número C (0 ≤ C ≤ 11) indicando a coluna que será considerada para operação.
A segunda linha de entrada contém um único caractere Maiúsculo T ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz.
Seguem os 144 valores de ponto flutuante que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

*/

using namespace std;
#include <iomanip>

int main()
{
    double matriz[12][12];
    int coluna;
    char operacao;


    cin>>coluna;
    cin>>operacao;

    for(int i = 0; i<12;i++)
    {
        for(int j = 0; j<12; j++)
        {
            cin>>matriz[i][j];
        }
    }

    if(operacao == 'S')
    {
        double soma = 0;
        for(int i = 0; i < 12; i++)
        {
            soma += matriz[i][coluna];
        }
        cout<<fixed<<setprecision(1)<<soma<<endl;
    }
    else
    {
        double media = 0;
        for(int i = 0; i < 12; i++)
        {
            media += matriz[i][coluna];
        }
        cout<<fixed<<setprecision(1)<<media/12<<endl;
    }

    return 0;
}
#endif

#ifdef ex12

/*

Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12].
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão acima da diagonal principal da matriz, conforme ilustrado abaixo (área verde).




Entrada
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz.
Seguem os 144 valores de ponto flutuante que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

*/

using namespace std;
#include <iomanip>

int main()
{
    double matriz[12][12];

    char operacao;
    cin>>operacao;

    for(int i = 0; i<12;i++)
    {
        for(int j = 0; j<12; j++)
        {
            cin>>matriz[i][j];
        }
    }

    if(operacao =='S')
    {
        double soma=0;
        for(int i = 0; i<12; i++)
        {
            for(int j = 0; j<12; j++)
            {
                if(j>i)
                {
                    soma+=matriz[i][j];
                }
            }
        }
        cout<<fixed<<setprecision(1)<<soma<<endl;
    }
    else
    {
        double media=0, contaMedia = 0;
        for(int i = 0; i<12; i++)
        {
            for(int j = 0; j<12; j++)
            {
                if(j>i)
                {
                    media+=matriz[i][j];
                    contaMedia++;
                }
            }
        }
        cout<<media/contaMedia<<endl;
    }

    return 0;
}

#endif

#ifdef ex13

/*

Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12].
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão abaixo da diagonal principal da matriz, conforme ilustrado abaixo (área verde).




Entrada
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz.
Seguem os 144 valores de ponto flutuante que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

*/

using namespace std;
#include <iomanip>

int main()
{
    double matriz[12][12];

    char operacao;
    cin>>operacao;

    for(int i = 0; i<12;i++)
    {
        for(int j = 0; j<12; j++)
        {
            cin>>matriz[i][j];
        }
    }

    if(operacao =='S')
    {
        double soma=0;
        for(int i = 0; i<12; i++)
        {
            for(int j = 0; j<12; j++)
            {
                if(j<i)
                {
                    soma+=matriz[i][j];
                }
            }
        }
        cout<<fixed<<setprecision(1)<<soma<<endl;
    }
    else
    {
        double media=0, contaMedia = 0;
        for(int i = 0; i<12; i++)
        {
            for(int j = 0; j<12; j++)
            {
                if(j<i)
                {
                    media+=matriz[i][j];
                    contaMedia++;
                }
            }
        }
        cout<<media/contaMedia<<endl;
    }

    return 0;
}

#endif

#ifdef ex14

/*

Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12].
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão acima da diagonal secundária da matriz, conforme ilustrado abaixo (área verde).




Entrada
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz.
Seguem os 144 valores de ponto flutuante que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

*/

using namespace std;
#include <iomanip>

int main()
{
    double matriz[12][12];

    char operacao;
    cin>>operacao;

    for(int i = 0; i<12;i++)
    {
        for(int j = 0; j<12; j++)
        {
            cin>>matriz[i][j];
        }
    }

    if(operacao =='S')
    {
        double soma=0;
        for(int i = 0; i<12; i++)
        {
            for(int j = 0; j<12; j++)
            {
                if(i+j < 11)
                {
                    soma+=matriz[i][j];
                }
            }
        }
        cout<<fixed<<setprecision(1)<<soma<<endl;
    }
    else
    {
        double media=0, contaMedia = 0;
        for(int i = 0; i<12; i++)
        {
            for(int j = 0; j<12; j++)
            {
                if(i+j < 11)
                {
                    media+=matriz[i][j];
                    contaMedia++;
                }
            }
        }
        cout<<media/contaMedia<<endl;
    }

    return 0;
}

#endif

#ifdef ex15

/*

Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12].
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão abaixo da diagonal Secundária da matriz, conforme ilustrado abaixo (área verde).

Entrada
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz.
Seguem os 144 valores de ponto flutuante que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

*/

using namespace std;
#include <iomanip>

int main()
{
    double matriz[12][12];

    char operacao;
    cin>>operacao;

    for(int i = 0; i<12;i++)
    {
        for(int j = 0; j<12; j++)
        {
            cin>>matriz[i][j];
        }
    }

    if(operacao =='S')
    {
        double soma=0;
        for(int i = 0; i<12; i++)
        {
            for(int j = 0; j<12; j++)
            {
                if(i+j > 11)
                {
                    soma+=matriz[i][j];
                }
            }
        }
        cout<<fixed<<setprecision(1)<<soma<<endl;
    }
    else
    {
        double media=0, contaMedia = 0;
        for(int i = 0; i<12; i++)
        {
            for(int j = 0; j<12; j++)
            {
                if(i+j > 11)
                {
                    media+=matriz[i][j];
                    contaMedia++;
                }
            }
        }
        cout<<fixed<<setprecision(1)<<media/contaMedia<<endl;
    }

    return 0;
}

#endif

#ifdef ex16

/*

Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12].
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área superior da matriz, conforme ilustrado abaixo (área verde).




Entrada
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz.
Seguem 144 valores com ponto flutuante de dupla precisão que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

*/

using namespace std;
#include <iomanip>

int main()
{
    double matriz[12][12];

    char operacao;
    cin>>operacao;

    for(int i = 0; i<12;i++)
    {
        for(int j = 0; j<12; j++)
        {
            cin>>matriz[i][j];
        }
    }

    if(operacao =='S')
    {
        double soma=0;
        for(int i = 0; i<12; i++)
        {
            for(int j = 0; j<12; j++)
            {
                if(j>i && i+j < 11)
                {
                    soma+=matriz[i][j];
                }
            }
        }
        cout<<fixed<<setprecision(1)<<soma<<endl;
    }
    else
    {
        double media=0, contaMedia = 0;
        for(int i = 0; i<12; i++)
        {
            for(int j = 0; j<12; j++)
            {
                if(j>i && i+j < 11)
                {
                    media+=matriz[i][j];
                    contaMedia++;
                }
            }
        }
        cout<<fixed<<setprecision(1)<<media/contaMedia<<endl;
    }

    return 0;
}

#endif

#ifdef ex17

/*

Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12].
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área inferior da matriz, conforme ilustrado abaixo (área verde).




Entrada
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz.
Seguem os 144 valores de ponto flutuante de dupla precisão (double) que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

*/

using namespace std;
#include <iomanip>

int main()
{
    double matriz[12][12];

    char operacao;
    cin>>operacao;

    for(int i = 0; i<12;i++)
    {
        for(int j = 0; j<12; j++)
        {
            cin>>matriz[i][j];
        }
    }

    if(operacao =='S')
    {
        double soma=0;
        for(int i = 0; i<12; i++)
        {
            for(int j = 0; j<12; j++)
            {
                if(j<i && i+j > 11)
                {
                    soma+=matriz[i][j];
                }
            }
        }
        cout<<fixed<<setprecision(1)<<soma<<endl;
    }
    else
    {
        double media=0, contaMedia = 0;
        for(int i = 0; i<12; i++)
        {
            for(int j = 0; j<12; j++)
            {
                if(j<i && i+j > 11)
                {
                    media+=matriz[i][j];
                    contaMedia++;
                }
            }
        }
        cout<<fixed<<setprecision(1)<<media/contaMedia<<endl;
    }

    return 0;
}


#endif

#ifdef ex18

/*

Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12].
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área esquerda da matriz,
conforme ilustrado abaixo (área verde).




Entrada
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média)
que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

*/

using namespace std;
#include <iomanip>

int main()
{
    double matriz[12][12];

    char operacao;
    cin>>operacao;

    for(int i = 0; i<12;i++)
    {
        for(int j = 0; j<12; j++)
        {
            cin>>matriz[i][j];
        }
    }

    if(operacao =='S')
    {
        double soma=0;
        for(int i = 0; i<12; i++)
        {
            for(int j = 0; j<12; j++)
            {
                if(i>j && i+j <= 10)
                {
                    soma+=matriz[i][j];
                }
            }
        }
        cout<<fixed<<setprecision(1)<<soma<<endl;
    }
    else
    {
        double media=0, contaMedia = 0;
        for(int i = 0; i<12; i++)
        {
            for(int j = 0; j<12; j++)
            {
                if(i>j && i+j <= 10)
                {
                    media+=matriz[i][j];
                    contaMedia++;
                }
            }
        }
        cout<<fixed<<setprecision(1)<<media/contaMedia<<endl;
    }

    return 0;
}


#endif

#ifdef ex19

/*

Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12].
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área direita da matriz,
conforme ilustrado abaixo (área verde).

Entrada
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'),
indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz.
Seguem os 144 valores de ponto flutuante que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

*/

using namespace std;
#include <iomanip>

int main()
{
    double matriz[12][12];

    char operacao;
    cin>>operacao;

    for(int i = 0; i<12;i++)
    {
        for(int j = 0; j<12; j++)
        {
            cin>>matriz[i][j];
        }
    }

    if(operacao =='S')
    {
        double soma=0;
        for(int i = 0; i<12; i++)
        {
            for(int j = 0; j<12; j++)
            {
                if(i+j >11 && j>i)
                {
                    soma+=matriz[i][j];
                }
            }
        }
        cout<<fixed<<setprecision(1)<<soma<<endl;
    }
    else
    {
        double media=0, contaMedia = 0;
        for(int i = 0; i<12; i++)
        {
            for(int j = 0; j<12; j++)
            {
                if(i+j > 11 && j>i)
                {
                    media+=matriz[i][j];
                    contaMedia++;
                }
            }
        }
        cout<<fixed<<setprecision(1)<<media/contaMedia<<endl;
    }

    return 0;
}


#endif

#ifdef ex20

/*

Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 15), correspondente a ordem de uma matriz M de inteiros,
e construa a matriz de acordo com o exemplo abaixo.

Entrada
A entrada consiste de vários inteiros, um valor por linha, correspondentes as ordens das matrizes a serem construídas.
O final da entrada é marcado por um valor de ordem igual a zero (0).

Saída
Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo.
Os valores das matrizes devem ser formatados em um campo de tamanho T justificados à direita e separados por espaço, onde T é igual ao
número de dígitos do maior número da matriz. Após o último caractere de cada linha da matriz não deve haver espaços em branco.
Após a impressão de cada matriz deve ser deixada uma linha em branco.

*/

using namespace std;
#include <math.h>
#include <iomanip>

int main()
{

    int N=1;

    cin>>N;
    while(N!=0){



    int matriz[N][N], tamanho;

    string maiorNum;

    int controle = 1;

    for(int i = 0; i < N; i++)
    {

        for(int j = 0; j < N; j++)
        {
            matriz[i][j] = controle;
            controle *=2;
        }
        controle = pow(2, i + 1);

    }

    maiorNum = to_string(matriz[N-1][N-1]);
    tamanho = maiorNum.size();

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(j+1 == N)
            {
                cout<<setw(tamanho)<<matriz[i][j];
            }
            else
            {
                cout<<setw(tamanho)<<matriz[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    cout<<endl;
    cin>>N;
    }

    return 0;
}

#endif

#ifdef ex21

/*

Um treinador de voleibol gostaria de manter estatísticas sobre sua equipe.
A cada jogo, seu auxiliar anota quantas tentativas de saques, bloqueios e ataques cada um de seus jogadores fez, bem como quantos desses saques,
bloqueios e ataques tiveram sucesso (resultaram em pontos). Seu programa deve mostrar qual o percentual de saques, bloqueios e ataques do time todo tiveram sucesso.

Entrada
A entrada é dada pelo número de jogadores N (1 ≤ N ≤ 100), seguido pelo nome de cada um dos jogadores.
Abaixo do nome de cada jogador, seguem duas linhas com três inteiros cada. Na primeira linha S, B e A (0 ≤ S,B,A ≤ 10000) representam a quantidade de tentativas de saques,
bloqueios e ataques e na segunda linha, S1, B1 e A1 (0 ≤ S1 ≤ S; 0 ≤ B1 ≤ B; 0 ≤ A1 ≤ A) com o número de saques, bloqueios e ataques deste jogador que tiveram sucesso.

Saída
A saída deve conter o percentual total de saques, bloqueios e ataques do time todo que resultaram em pontos, conforme mostrado no exemplo.

*/

using namespace std;
#include <iomanip>

int main()
{

    int N;
    double acertoA=0,totalA=0,acertoS=0,totalS=0,acertoB=0,totalB=0;

    cin>>N;

    string nomes[N];

    int dados[3][3];

    for(int k = 0; k <N; k++)
    {
        //cout<<"Digite o nome:"<<endl;
        cin>>nomes[k];

        for(int i = 0; i < 2 ; i++)
        {
            for(int j = 0; j < 3; j++)
            {
              // cout<<"Digite o dado da posicao "<<i<<" "<<j<<endl;
               cin>>dados[i][j];
            }
        }

        totalS += dados[0][0];
        totalB += dados[0][1];
        totalA += dados[0][2];
        acertoS += dados[1][0];
        acertoB += dados[1][1];
        acertoA += dados[1][2];
    }

    cout<<fixed<<setprecision(2)<<"Pontos de Saque: "<<(acertoS*100)/(totalS)<<" %."<<endl;
    cout<<fixed<<setprecision(2)<<"Pontos de Bloqueio: "<<(acertoB*100)/(totalB)<<" %."<<endl;
    cout<<fixed<<setprecision(2)<<"Pontos de Ataque: "<<(acertoA*100)/(totalA)<<" %."<<endl;

    return 0;
}

#endif

#ifdef ex22

/*

Todo ano bissexto é realizado o exame geral de matemática da Nlogônia.
 Todos os cidadãos da nação são avaliados a fim de se estudar o desenvolvimento lógico e matemático do país ao longo dos anos.

Após as correções, os cidadãos são ordenadados de acordo com suas notas (quanto maior, melhor)
e recebem descontos no imposto de renda de acordo com sua qualificação.

O Escritório Central de Estatística (ECE) é encarregado de processar os dados das notas obtidas no exame.
Entretanto este ano, Vasya, um dos responsáveis, está internado no hospital com gripe H1N1 e você foi contratado para realizar o seu trabalho.

Escreva um programa que dado o número de habitantes da Nlogônia e todas as notas obtidas,
responda as consultas para retornar a nota do cidadão que ficou em determinada posição.

Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso contém dois inteiros N (1 ≤ N ≤ 100), Q (1 ≤ Q ≤ 100),
o número de habitantes do país e o número de consultas, respectivamente.

As N linhas seguintes contém, cada uma, a nota ni obtida pelo i-ésimo cidadão (0 ≤ ni ≤ 30000).

As próximas Q linhas contém cada uma uma consulta, a posição pi (1 ≤ pi ≤ N) a qual a ECE está interessada em saber a nota.

A entrada termina com fim-de-arquivo (EOF).

Saída
Para cada caso de teste, imprima, para cada consulta, uma linha contendo a nota do cidadão que ficou classificado na posição pi.

*/

using namespace std;


int main()
{
    int N, Q, num;

    while(cin>>N>>Q)
    {

    int notas[N];
    //while (cin >> n)

    for(int i = 0; i<N; i++)
    {
        cin>>notas[i];
    }

    for(int i = 0; i <N; i++)
    {
        for(int j = 0; j<N; j++)
        {
            if(notas[i]>notas[j])
            {
                int temp = notas[i];
                notas[i] = notas[j];
                notas[j] = temp;
            }
        }
    }

    for(int i = 0; i <Q; i++)
    {
        cin>>num;
        cout<<notas[num-1]<<endl;
    }

    }
    return 0;
}



#endif

#ifdef ex23

/*


Iu-di-oh! é um jogo de cartas que virou uma verdadeira febre entre os jovens! Todo jogador de Iu-di-oh! tem seu próprio baralho, contendo várias cartas do jogo.
Cada carta contém N atributos (como força, velocidade, inteligência, etc.). Os atributos são numerados de 1 a N e são dados por inteiros positivos.

Uma partida de Iu-di-oh! é sempre jogada por dois jogadores. Ao iniciar a partida, cada jogador escolhe exatamente uma carta de seu baralho.
Após as escolhas, um atributo é sorteado. Vence o jogador cujo atributo sorteado em sua carta escolhida é maior que na carta escolhida pelo adversário.
Caso os atributos sejam iguais, a partida empata.

Marcos e Leonardo estão na grande final do campeonato brasileiro de Iu-di-oh!, cujo prêmio é um Dainavision (que é quase um Plaisteition 2!).
Dados os baralhos de ambos, a carta escolhida por cada um e o atributo sorteado, determine o vencedor!

Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso contém um inteiro N (1 ≤ N ≤ 100), o número de atributos de cada carta.
A segunda linha contém dois inteiros M e L (1 ≤ M, L ≤ 100), o número de cartas no baralho de Marcos e de Leonardo, respectivamente.

As próximas M linhas descrevem o baralho de Marcos. As cartas são numeradas de 1 a M, e a i-ésima linha descreve a i-ésima carta.
Cada linha contém N inteiros ai,1,ai,2,..., ai,N (1 ≤ ai,j ≤ 109). O inteiro ai,j indica o atributo j da carta i.
As próximas L linhas descrevem o baralho de Leonardo. As cartas são numeradas de 1 e L e são descritas de maneira análoga.

A próxima linha contém dois inteiros CM e CL (1 ≤ CM ≤ M, 1 ≤ CL ≤ L), as cartas escolhidas por Marcos e Leonardo, respectivamente.
Por fim, a última linha contém um inteiro A (1 ≤ A ≤ N) indicando o atributo sorteado.

A entrada termina com fim-de-arquivo (EOF).

Saída
Para cada caso de teste, imprima uma linha contendo “Marcos” se Marcos é o vencedor, “Leonardo” se Leonardo é o vencedor, ou “Empate” caso contrário (sem aspas).


*/

using namespace std;

int main()
{
    int N = 0, M = 0, L = 0,cM = 0,cL = 0,A = 0;

    while(cin>>N)
    {
        cin>>M>>L;

        int cMarcos[M][N], cLeo[L][N];

        for(int i = 0; i < M; i++)
        {
            for(int j = 0; j < N; j++)
            {
                cin>>cMarcos[i][j];
            }
        }

        for(int i = 0; i < L; i++)
        {
            for(int j = 0; j < N; j++)
            {
                cin>>cLeo[i][j];
            }
        }
        cin>>cM>>cL>>A;

        if(cMarcos[cM-1][A-1] > cLeo[cL-1][A-1])
        {
            cout<<"Marcos"<<endl;
        }
        else if(cMarcos[cM-1][A-1] < cLeo[cL-1][A-1])
        {
            cout<<"Leonardo"<<endl;
        }
        else
        {
            cout<<"Empate"<<endl;
        }

    }
    return 0;
}

#endif

#ifdef ex24

/*

Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros,
e construa a matriz de acordo com o exemplo abaixo.

Entrada
A entrada consiste de vários inteiros, um valor por linha, correspondentes as ordens das matrizes a serem construídas.
O final da entrada é marcado por um valor de ordem igual a zero (0).

Saída
Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo.
Os valores das matrizes devem ser formatados em um campo de tamanho 3 justificados à direita e separados por espaço.
Após o último caractere de cada linha da matriz não deve haver espaços em branco.
Após a impressão de cada matriz deve ser deixada uma linha em branco.

*/

using namespace std;
#include<iomanip>

int main()
{
    int N, matriz[100][100], maior, menor;
    cin>>N;

    while(N != 0)
    {
        for(int i = 0; i <N; i++)
        {
            for(int j = 0; j <N; j++)
            {
                    if(i > j)
                    {
                        maior = i;
                        menor = j;
                    }
                    else
                    {
                        maior = j;
                        menor = i;
                    }
                    if(i+j >= N)
                    {
                       matriz[i][j] = N-maior;
                    }
                    else
                    {
                       matriz[i][j] = menor+1;
                    }
                    if(j == N-1)
                    {
                        cout<<setw(3)<< matriz[i][j];
                    }
                    else
                    {
                       cout<<setw(3)<< matriz[i][j]<<" ";
                    }
            }
            cout<<endl;

        }

    cout<<endl;
    cin>>N;
    }

    /*

    00

    00 01       0 1
    10 11       1 2

    00 01 02    0 1 2
    10 11 12    1 2 3
    20 21 22    2 3 4

    00 01 02 03     0 1 2 3
    10 11 12 13     1 2 3 4
    20 21 22 23     2 3 4 5
    30 31 32 33     3 4 5 6

    00 01 02 03 04      0 1 2 3 4
    10 11 12 13 14      1 2 3 4 5
    20 21 22 23 24      2 3 4 5 6
    30 31 32 33 34      3 4 5 6 7
    40 41 42 43 44      4 5 6 7 8
    */

    return 0;
}

#endif


#ifdef ex25

/*

Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.

Entrada
A entrada consiste de vários inteiros, um valor por linha, correspondentes as ordens das matrizes a serem construídas.
O final da entrada é marcado por um valor de ordem igual a zero (0).

Saída
Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo.
(os valores das matrizes devem ser formatados em um campo de tamanho 3 justificados à direita e separados por espaço.
 Após o último caractere de cada linha da matriz não deve haver espaços em branco.
 Após a impressão de cada matriz deve ser deixada uma linha em branco.

*/

#include <iomanip>
using namespace std;

int main()
{
    int N, matriz[100][100], maior, menor;
    cin>>N;

    while(N != 0)
    {
        for(int i = 0; i <N; i++)
        {
            for(int j = 0; j <N; j++)
            {

                    if(i > j)
                    {
                        maior = i;
                        menor = j;
                    }
                    else
                    {
                        maior = j;
                        menor = i;
                    }


                    if(j > i)
                    {
                       matriz[i][j] = j+1-i;
                    }

                    else if (j == i)
                    {
                        matriz[i][j] = 1;
                    }

                    else
                    {
                       matriz[i][j] = i+1-j;
                    }


                    if(j == N-1)
                    {
                        cout<<setw(3)<< matriz[i][j];
                    }
                    else
                    {
                       cout<<setw(3)<< matriz[i][j]<<" ";
                    }
            }
            cout<<endl;

        }

    cout<<endl;
    cin>>N;
    }

    /*

    00

    00 01       0 1
    10 11       1 2

    00 01 02    0 1 2
    10 11 12    1 2 3
    20 21 22    2 3 4

    00 01 02 03     0 1 2 3
    10 11 12 13     1 2 3 4
    20 21 22 23     2 3 4 5
    30 31 32 33     3 4 5 6

    00 01 02 03 04      0 1 2 3 4
    10 11 12 13 14      1 2 3 4 5
    20 21 22 23 24      2 3 4 5 6
    30 31 32 33 34      3 4 5 6 7
    40 41 42 43 44      4 5 6 7 8
    */

    return 0;
}


#endif


#ifdef ex26

/*
Leia um valor inteiro N que é o tamanho da matriz que deve ser impressa conforme o modelo fornecido.

Entrada
A entrada contém vários casos de teste e termina com EOF.
Cada caso de teste é composto por um único inteiro N (3 ≤ N < 70), que determina o tamanho (linhas e colunas) de uma matriz que deve ser impressa.

Saída
Para cada N lido, apresente a saída conforme o exemplo fornecido.
*/

using namespace std;

int main()
{
    int N, matriz[70][70];
    while(cin>>N)
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {

                if(i+ j == N-1)
                {
                    matriz[i][j] = 2;
                }
                else if(i ==j)
                {
                    matriz[i][j] = 1;
                }
                else
                {
                    matriz[i][j] = 3;
                }

                cout<<matriz[i][j];
            }
            cout<<endl;
        }

    }

    return 0;
}

#endif

#ifdef ex27

/*

Na escola onde você estuda, a hora do recreio é a mais aguardada pela grande maioria dos alunos. Não só porque as vezes as aulas são cansativas, mas sim porque a merenda servida é muito boa,
preparada por um chefe italiano muito caprichoso.

Quando bate o sinal para a hora do recreio, todos os alunos saem correndo da sua sala para chegar o mais cedo possível na cantina, tanta é a vontade de comer.
Um de seus professores notou, porém, que havia ali uma oportunidade.

Utilizando um sistema de recompensa, seu professor de matemática disse que a ordem da fila para se servir será dada não pela ordem de chegada,
mas sim pela soma das notas obtidas em sala de aula. Assim, aqueles com maior nota poderão se servir antes daqueles que tem menor nota.

Sua tarefa é simples: dada a ordem de chegada dos alunos na cantina, e as suas respectivas notas na matéria de matemática,
reordene a fila de acordo com as notas de matemática, e diga quantos alunos não precisaram trocar de lugar nessa reordenação.

Entrada
A primeira linha contém um inteiro N, indicando o número de casos de teste a seguir.

Cada caso de teste inicia com um inteiro M (1 ≤ M ≤ 1000), indicando o número de alunos.
Em seguida haverá M inteiros distintos Pi (1 ≤ Pi ≤ 1000), onde o i-ésimo inteiro indica a nota do i-ésimo aluno.

Os inteiros acima são dados em ordem de chegada, ou seja, o primeiro inteiro diz respeito ao primeiro aluno a chegar na fila,
o segundo inteiro diz respeito ao segundo aluno, e assim sucessivamente.

Saída
Para cada caso de teste imprima uma linha, contendo um inteiro, indicando
o número de alunos que não precisaram trocar de lugar mesmo após a fila ser reordenada.


*/

using namespace std;

int main()
{

    int N, M, p[1000],v[1000], ntroca = 0;

    cin>>N;

    for(int k = 0; k < N; k++)
    {
        cin>>M;

        for(int i = 0; i < M; i++)
        {
            cin>>p[i];
            v[i] = p[i];
        }

        for(int g = 0; g<M; g++)
        {
            for(int y = 0; y<M; y++)
            {
                if(p[y]<p[g])
                {
                    int temp = 0;
                    temp = p[y];
                    p[y] = p[g];
                    p[g] = temp;
                }
            }
        }

        for(int i = 0; i < M; i++)
        {
            if(p[i]==v[i])
            {
                ntroca++;
            }
        }
        cout<<ntroca<<endl;
        ntroca = 0;

    }

    return 0;
}



#endif

#ifdef ex28

/*

Está chegando a grande final do Campeonato Nlogonense de Surf Aquático, que este ano ocorrerá na cidade de Bonita Horeleninha (BH)!
Nesta cidade, o jogo PãodeQueijoSweeper é bastante popular!

O tabuleiro do jogo consiste em uma matriz de N linhas e M colunas. Cada célula da matriz contém um pão de queijo ou o número de pães de queijo que existem nas celulas adjacentes a ela.
Uma célula é adjacente a outra se estiver imediatamente à esquerda, à direita, acima ou abaixo da célula. Note que, se não contiver um pão de queijo, uma célula deve obrigatoriamente conter um número entre 0 e 4, inclusive.

Dadas as posições dos pães de queijo, determine o tabuleiro do jogo!

Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso contém os inteiros N e M (1 ≤ N, M ≤ 100).
As próximas N linhas contém M inteiros cada, separados por espaços, descrevendo os pães de queijo no tabuleiro.
O j-ésimo inteiro da i-ésima linha é 1 se existe um pão de queijo na linha i e coluna j do tabuleiro, ou 0 caso contrário.

A entrada termina com fim-de-arquivo (EOF).

Saída
Para cada caso de teste, imprima N linhas com M inteiros cada, não separados por espaços, descrevendo a configuração do tabuleiro.
Se uma posição contém um pão de queijo, imprima 9 para ela; caso contrário, imprima o número cuja posição deve conter.

*/

using namespace std;

int main()
{
    int N, M, pdq[100][100], adj = 0;

    while(cin>>N>>M)
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j< M; j++)
            {
                cin>>pdq[i][j];
            }
        }


        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j< M; j++)
            {
                if(pdq[i][j] == 1)
                {
                    pdq[i][j] = 9;
                }
            }

        }

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j< M; j++)
            {
                if(pdq[i][j-1] == 9 && j>0)
                {
                    adj++;
                }
                if(pdq[i][j+1] == 9 && j+1!=M)
                {
                    adj++;
                }

                if(pdq[i-1][j] == 9 && i > 0)
                {
                    adj++;
                }
                if(pdq[i+1][j] == 9 && i+1!=N)
                {
                    adj++;
                }
                if(pdq[i][j] !=9)
                {
                    pdq[i][j] = adj;
                }

                adj = 0;
                cout<<pdq[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}

#endif

#ifdef ex29

/*

Na estação de trem você ainda pode encontrar o último dos “organizadores de vagões”. Um Organizador de vagões um empregado cujo trabalho é apenas reordenar os vagões do trem, trocando-os de posição.
Uma vez que os vagões são organizados em uma ordem considerada ótima, o condutor pode desconectar cada vagão e colocá-los na estação.

O título “organizador de vagões” é dado à pessoa que realiza esta tarefa, cuja estação fica perto de uma ponte. Ao invés da ponte poder subir ou descer, ela roda sobre um pilar que fica no centro do rio.
Após rodar 90 graus, os barcos podem passar na esquerda ou direita dela.
O Primeiro organizador de vagões descobriu que girando a ponte 180 graus com dois vagões em cima dela, é possível a troca de lugar entre os dois vagões.
Obviamente a ponte pode operar no máximo com dois vagões sobre ela.

Agora que quase todos os organizadores de vagões já faleceram, a estação gostaria de automatizar esta operação.
Parte do programa a ser desenvolvido é uma rotina que decide para um dado trem com um determinado número de vagões,
o número de trocas entre trens adjacentes que são necessárias para que o  trem fique ordenado. Sua tarefa é criar tal rotina.

Entrada
A entrada contém na primeira linha o número de caso de testes (N). Cada caso de teste consiste de duas linhas de entrada.
A primeira linha de um caso de teste contém um inteiro L, determinando o tamanho do trem (0 ≤ L ≤ 50).
A segunda linha de um caso de teste contém uma permutação dos números 1 até L, indicando a ordem corrente dos vagões.
Os vagões devem ser ordenados de forma que o vagão 1 venha por primeiro, depois o 2, etc, com o vagão L vindo por último.

Saída
Para cada caso de teste imprima a sentença: 'Optimal train swapping takes S swaps.' onde S é um inteiro.
*/

using namespace std;

int main()
{

    int N, L, vagoes[50], troca = 0, busca = 1;

    cin>>N;

    for(int i = 0; i < N; i ++)
    {
        troca = 0;
        busca = 1;
        cin >> L;

        for(int i = 0; i < L; i++)
        {
            cin>>vagoes[i];
        }

        for(int i = 0; i < L; i++)
        {
                if(vagoes[i] == busca)
                {
                    while(busca < i+1)
                    {
                        int temp;
                        temp = vagoes[i-1];
                        vagoes[i-1] = vagoes[i];
                        vagoes[i] = temp;
                        troca++;
                        i--;
                    }
                     busca ++;
                }
        }


        cout<<"Optimal train swapping takes "<<troca<<" swaps."<<endl;
    }

    return 0;
}

#endif

#ifdef ex30

/*

A Nlogônia é um país tropical, com muitas belezas naturais internacionalmente famosas; dentre elas, encontram-se as belas praias que compõem o arquipélago do país, que todo verão recebem milhões de turistas estrangeiros.

O Ministério do Turismo da Nlogônia está preparando o país para a chegada dos turistas, mas para fazer seu planejamento, precisa saber a extensão da costa nlogônica.
Para isso, ele gerou um mapa que divide o território nacional em vários quadrados, que podem ser ocupados por água ou por terra;
considera-se que um quadrado é parte da costa nlogônica se ele é um quadrado ocupado por terra que tem um lado em comum com um quadrado ocupado por água.

Na figura abaixo, (a) mostra um trecho do mapa gerado e (b) mostra os quadrados do trecho dado que são costa.



Como a Nlogônia é um país muito grande, o ministro do turismo pediu que você escrevesse um programa que, dado o mapa da Nlogônia, determina a extensão da costa nlogônica.

Entrada
A primeira linha da entrada contém dois inteiros M e N (1 ≤ M, N ≤ 1000) indicando, respectivamente, o número de linhas e o número de colunas do mapa.
Cada uma das M linhas seguintes contém N caracteres: um caractere ‘.’ indica que aquele quadrado do território é ocupada por água; um caractere ‘#’ indica que aquele quadrado do território é ocupada por terra.

Considere que todo o espaço fora da área do mapa é ocupado por água.

Saída
Seu programa deve imprimir uma única linha contendo um único inteiro, indicando quantos quadrados do território fazem parte da costa da Nlogônia.

*/

using namespace std;
//const vector<pair<int, int>> movimentos = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}} ver depois


int main()
{

    int m, n, costa = 0;
    char nlogonia[1000][1000];

    cin>> m >> n;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>nlogonia[i][j];
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
          if(nlogonia[i][j] == '#')
          {
              if(nlogonia[i-1][j] == '.' && i>0 || nlogonia[i+1][j] == '.' && i < m-1 || nlogonia[i][j+1] == '.' && j < n-1 || nlogonia[i][j-1] == '.' && j > 0)
              {
                  costa++;
              }
              else if(i == 0 || i == m-1 || j == 0 || j ==n-1)
              {
                  costa++;
              }
          }
        }
    }

cout<<costa<<endl;

    return 0;
}

#endif



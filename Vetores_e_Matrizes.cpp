#include <iostream>


#define ex24
//refazer o 24 e verificar o 23

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
    int N, M, L,cM,cL,A;

    while(cin>>N)
    {
        cin>>M>>L;

        int cMarcos[N][M], cLeo[N][L];

        for(int i = 0; i < N-1; i++)
        {
            for(int j = 0; j <= M; j++)
            {

                cin>>cMarcos[i][j];
            }
        }

        for(int i = 0; i < N-1; i++)
        {
            for(int j = 0; j <= M; j++)
            {
                cin>>cLeo[i][j];
            }
        }

        cin>>cM>>cL;
        cin>>A;

        if(cMarcos[cM][A] < cLeo[cL][A])
        {
            cout<<"Marcos"<<endl;
        }
        else if(cMarcos[cM][A] > cLeo[cL][A])
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

int main()
{
    int N, matriz[100][100];
    cin>>N;

    while(N != 0)
    {
        for(int i = 0; i <N; i++)
        {
            for(int j = 0; j <N; j++)
            {
                matriz[i][j] = 1;
                cout<<matriz[i][j];
            }
            cout<<endl;
        }
    cin>>N;
    }

    return 0;
}

#endif


#ifdef ex25

/*

*/

using namespace std;

int main()
{

    return 0;
}

#endif


#ifdef ex26

/*

*/

using namespace std;

int main()
{

    return 0;
}

#endif

#ifdef ex27

/*

*/

using namespace std;

int main()
{

    return 0;
}

#endif

#ifdef ex28

/*

*/

using namespace std;

int main()
{

    return 0;
}

#endif

#ifdef ex29

/*

*/

using namespace std;

int main()
{

    return 0;
}

#endif

#ifdef ex30

/*

*/

using namespace std;

int main()
{

    return 0;
}

#endif

#ifdef ex31

/*

*/

using namespace std;

int main()
{

    return 0;
}

#endif

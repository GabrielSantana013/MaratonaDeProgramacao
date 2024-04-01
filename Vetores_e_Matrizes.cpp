#include <iostream>


#define ex08

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
        for(int i = 0; i<j; i++)
        {
          cout<<"par["<<i<<"] = "<<pares[i]<<endl;
        }
    }

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

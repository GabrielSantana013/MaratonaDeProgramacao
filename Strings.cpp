#include <iostream>

#define ex01

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
    int metade = (M.size())/2;

    for(int i = (M.size()/2); i<M.size(); i++)
    {
        M[i] -=1;

    }

    return M;
}


int main()

{
    int N;
    string M;

    cin>>N;

    for(int i  = 0; i < N; i++)
    {
      cin.ignore();
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
using namespace std;

int main()


    return 0;
}
#endif

#ifdef ex03
using namespace std;

int main()
{

    return 0;
}
#endif


#ifdef ex04
using namespace std;

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


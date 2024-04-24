#include <iostream>
#include <bits/stdc++.h> //importa tudo (stl, string, set, map)

#define ex02
//pulou o 5
//pulou o 8

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
    /*while(N != 0 && Y != 0)
    {
        for(int i = 0; i < Y; i++)
        {
            chegada.push(N);
            cin>>N;
        }
        cin>>N;
    }*/
    while(true)
    {
        int N;
        cin>>N;

        if(N == 0)
            break;

            stack<int> resposta;

        while(true)
        {
            queue<int> chegada;
            int num;
            for(int i = 0; i < N; i++)
            {
                cin>>num;
                if(num == 0) break;
                chegada.push(num);
            }

            if(num == 0) break;

         //preenchendo resposta de acordo com N
        for(int i = 1; i <= N; i++)
        {
            resposta.push(i);
            while(!chegada.empty() && !resposta.empty() && chegada.front() == resposta.top())
            {
                chegada.pop();
                resposta.pop();
            }

        }

            cout << (chegada.empty() ? "Yes" : "No") << endl;

            /*

            chegada: 1 2 3 4 5
            resposta: 1 2 3 4 5

            */

        }
        cout<<endl;
    }
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

        sort(numeros.begin(), numeros.end()); // arruma o vetor

        for(int i = 0; i < N-1; i++)
        {
           string telefone = numeros[i];

           for(int j = 0; j < telefone.size(); j++)
           {
               if(telefone[j] == numeros[i+1][j])
               {
                   contador++;
               }
               else
               {
                   break;
               }
           }
        }
        cout<<contador<<endl;
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

Cada funcionário de um serviço burocrático tem uma descrição do cargo - alguns parágrafos que descrevem as responsabilidades do trabalho.
A descrição do cargo combinado com outros fatores, como por exemplo tempo de serviço, é utilizado para determinar qual é o salário deste funcionário.

Um sistema denominado Pontos de Feno (Hay Points) libera o departamento de Recursos Humanos de ter que fazer um
julgamento inteligente do valor de cada empregado para a empresa.
A descrição de um cargo ou função é feita através da verificação de palavras e frases que indicam responsabilidade.
Em particular, descrições de cargo que indicam o
controle sobre um grande orçamento ou gestão sobe um grande número de pessoas geram escores altos neste sistema.

Você deve implementar um sistema de Ponto de Feno simplificado. Você terá como informações um dicionário
Hay Point que conterá algumas palavras-chaves que são as descrições dos cargos e um valor em dólares americanos associado com cada um destes cargos.
Para cada descrição de trabalho você deverá calcular o salário associado com o trabalho, de acordo com este sistema.

Entrada
A entrada contém vários casos de teste. A primeira linha da entrada contém dois números inteiros positivos: M (M ≤ 1000),
que é o número de palavras no dicionário Hay Point, e um número inteiro N (N ≤ 100) que corresponde à quantidade de descrições de cargos ou funções.
M linhas seguem, cada um contém uma palavra (uma seqüência de até 16 letras minúsculas) e um valor de dólar (um número real entre 0 e 1000000).
Logo na sequência, após o dicionário, estão as descrições de cada uma dos cargos N.

Cada descrição de cargo consiste em uma ou mais linhas de texto. Para sua conveniência, o texto contém somente letras minúsculas (de 'a' até 'z').
Cada descrição de cargo é finalizada por uma linha contendo um ponto ".".

Saída
Para cada caso de teste de entrada, imprima o salário do funcionário que é calculado através deste sistema Pontos de Feno
(que nada mais é do que a soma do valor de todas as palavras que aparecem na descrição do cargo).
Obs.: o valor das palavras que não aparecem no dicionário é zero (0).

*/

using namespace std;
int main()
{
    int M, N, contador = 0;
    cin>>M >> N;

    map<string, int> hayPoint;

    for(int i = 0; i < M; i++)
    {
        string chave; cin>>chave;
        int valor; cin>>valor;
        hayPoint.insert({chave, valor});
    }

    for(int i = 0; i < N; i++)
    {
        string palavra;
        while(cin >> palavra && palavra != ".")
        {
            contador+=hayPoint[palavra];
        }
        cout<<contador<<endl;
        contador = 0;
    }

    return 0;
}
// if (hayPoint.find(palavra) != hayPoint.end())
/*   vector<tuple<int, int, int>> gabriel;

    for (auto [a, b, c] : gabriel)
    {

    }
  */



    /*for (auto [chave, valor] : hayPoint)
    {
        cout << chave << endl;
        cout << valor << endl;
    }*/

    /*for (auto p : hayPoint)
    {
        cout << p.first << endl;
        cout << p.second << endl;
    }*/
    /*for (pair<string, int> p : hayPoint)
    {
        cout << p.first << endl;
        cout << p.second << endl;
    }*/
#endif


#ifdef ex10

/*

Dona Parcinova costuma ir regularmente à feira para comprar frutas e legumes. Ela pediu então à sua filha, Mangojata,
que a ajudasse com as contas e que fizesse um programa que calculasse o valor que precisa levar para poder comprar tudo que
está em sua lista de compras, considerando a quantidade de cada tipo de fruta ou legume e os preços destes itens.

Entrada
A primeira linha de entrada contém um inteiro N que indica a quantidade de idas à feira de dona Parcinova (que nada mais é do
que o número de casos de teste que vem a seguir). Cada caso de teste inicia com um inteiro M que indica a quantidade de produtos
que estão disponíveis para venda na feira. Seguem os M produtos com seus preços respectivos por unidade ou Kg.
A próxima linha de entrada contém um inteiro P (1 ≤ P ≤ M) que indica a quantidade de diferentes produtos que dona Parcinova deseja comprar.
Seguem P linhas contendo cada uma delas um texto (com até 50 caracteres) e um valor inteiro,
que indicam respectivamente o nome de cada produto e a quantidade deste produto.

Saída
Para cada caso de teste, imprima o valor que será gasto por dona Parcinova no seguinte formato: R$ seguido de um espaço e seguido do valor,
com 2 casas decimais, conforme o exemplo abaixo.

*/

#include <iomanip>

using namespace std;
int main()
{
    int N, M, P;
    double total = 0;
    cin>>N;

    for(int i = 0; i < N; i++)
    {
        map<string, double> produtos;
        cin>>M;

        for(int j = 0; j < M; j++)
        {
           string produto; cin>>produto;
           double preco; cin>>preco;
           produtos.insert({produto, preco});

        }
        cin>>P;

        for(int j = 0; j < P; j++)
        {
            string produto; cin>>produto;
            int quantidade; cin>>quantidade;
            total += (produtos[produto]*quantidade);

        }
        cout<<fixed<<setprecision(2)<<"R$ "<<total<<endl;
        total = 0;
    }

    return 0;
}
#endif


#ifdef ex11

/*

A. C. Marcos está dando os primeiros passos para ser um compositor de jingles.
Ele está tendo alguns problemas, mas ao menos ele está criando melodias agradáveis e ritmos atrativos.

Na música, uma nota tem um tom (sua frequência, resultando em quão grave ou agudo é o som) e uma duração
(por quanto tempo a nota soa). Neste problema, estamos interessados apenas na duração das notas.

Um jingle é dividido em uma sequência de compassos, e um compasso é formado de uma série de notas.

A duração de uma nota é indicada pela sua forma. Neste problema, iremos utilizar letras maiúsculas para indicar a duração de uma nota.
A seguinte tabela lista todas as notas disponíveis:

​

A duração de um compasso é a soma da duração de suas notas. Nos jingles de Marcos, cada compasso tem a mesma duração.
Como Marcos é apenas um iniciante, seu famoso professor Johann Sebastian III o ensinou que a duração de um compasso deve ser sempre 1.

Por exemplo, Marcos escreveu uma composição contendo cinco compassos, dentre os quais quatro possuem a duração correta e um está errado.
No exemplo abaixo, cada compasso é delimitado com barras e cada nota é representada como na tabela acima.

/HH/QQQQ/XXXTXTEQH/W/HW/

Marcos gosta de computadores assim como de música. Ele quer que você escreva um programa que determine, para cada uma de suas composições,
quantos compassos possuem a duração correta.

Entrada
A entrada contém vários casos de teste. Cada caso de teste é descrito em uma única linha contendo uma string cujo tamanho está entre 3 e 200 caracteres,
inclusive, representando uma composição. Uma composição começa e termina com uma barra '/'. Compassos em uma composição são separados por uma barra '/'.
Cada nota em um compasso é representada pela letra correspondente segundo a descrição acima.
Você pode assumir que cada composição contém ao menos um compasso e que cada compasso contém ao menos uma nota.
Todos os caracteres na entrada serão barras ou uma das sete letras maiúsculas usadas para representar as notas.

O último caso de teste é seguido por uma linha contendo um único asterisco.

Saída
Para cada caso de teste, seu programa deve imprimir uma única linha contendo um único inteiro, o número de compassos que possuem a duração correta.

*/

using namespace std;
int main()
{
    map<char,float> notas;
    notas.insert({'W', 1.0});
    notas.insert({'H', 0.5});
    notas.insert({'Q', 0.25});
    notas.insert({'E', 0.125});
    notas.insert({'S', 0.0625});
    notas.insert({'T', 0.03125});
    notas.insert({'X', 0.015625});


    string entrada;
    cin>>entrada;

    while(entrada != "*")
    {
        float contador = 0;
        int compassos = 0;

        for(int i = 0; i < entrada.size(); i++)
        {
            if(entrada[i] != '/')
            {
                contador += notas[entrada[i]];
                //cout<<"Contador"<<contador<<endl;
                //cout<<"valor map: "<<notas[entrada[i]]<<endl;
            }
            else
            {
                if(contador == 1)
                {
                    compassos++;
                }
                contador = 0;
            }

        }
        cout<<compassos<<endl;
        compassos = 0;
        cin>>entrada;
    }

    return 0;
}
#endif


#ifdef ex12

/*

Pedro está trabalhando em um novo emprego em uma loja de parafusos e porcas. Toda semana ele irá receber novas encomendas de parafusos mistos em grandes caixas
e precisa saber onde ele deve armazenar esses produtos.

Mango, que é supervisor de Pedro, pediu-lhe para organizar todos os parafusos e porcas em um rack enorme, de forma que seja fácil de responder onde é
possível encontrar cada predeterminado lote de parafusos e quanto de cada um destes lotes a loja tem.

Pedro recebe todos os parafusos e porcas em caixas etiquetadas com o intervalo de tamanho dos produtos.
Por exemplo, duas caixas com os respectivos intervalos (1, 2) e (4, 8) representam lotes de produtos com tamanho {1, 2, 4, 5, 6, 7, 8}.
Um número de parafuso e porca pode estar presente em mais de uma caixa, e ele aparece na lista uma vez para cada intervalo.
Por exemplo, três caixas com os respectivos intervalos (1, 3), (2, 4) e (3,5) representam lotes de parafusos e porcas com tamanho {1, 2, 2, 3, 3, 3, 4, 4, 5}.

Entrada
A entrada contém vários casos de teste e termina com EOF. Cada caso de teste é composto por várias linhas.
A primeira linha contém um inteiro positivo N (N < 100) que indica a quantidade de caixas de parafusos.
Seguem N linhas, cada uma delas com dois valores X e Y (1 ≤ X < Y ≤ 100) que representam os tamanhos dos lotes de parafusos
e porcas presentes naquela caixa. A próxima linha de entrada conterá um único inteiro positivo Num (1 ≤ Num ≤ 100),
que indica o número que Mango deseja pesquisar após todos os produtos serem organizados na estante ou rack.

Obs. A estante ou rack possui prateleiras enumeradas de 0 a P, sendo que este P não deve ser superior a 10000.

Saída
Cada caso de entrada deverá produzir uma única linha de saída, indicando as posições da prateleira nas quais o
parafuso de tamanho Num se encontra ou indicando que não foi possível encontrar o parafuso, conforme o exemplo abaixo.

*/

using namespace std;
int main()
{
    int N;

    while(cin>>N)
    {
        multiset<int> intervalo;
        int X, Y, num;

       for(int i = 0; i < N; i++)
       {
           cin>>X>>Y;
           for(int j = X; j <= Y; j++)
           {
               intervalo.insert(j);
           }
       }

        multiset<int>::iterator i;
        cin>>num;
        int repetidos = intervalo.count(num);
        int contador = 0;

        for(i = intervalo.begin(); i != intervalo.end(); i++)
        {

            if(*i != num)
            {
               contador++;
            }
            else
            {
                if(*i == num)
                {
                    break;
                }
            }
        }

        if(contador == intervalo.size())
        {
            cout<<num<<" not found"<<endl;
        }
        else
        {
            cout<<num<<" found from "<<contador<<" to "<<contador+repetidos-1<<endl;
        }
    }




    return 0;
}
#endif


#ifdef ex13

/*

Dona Maria é uma senhora que está aposentada e faz doces. Ela começou a fazer bolos para complementar a renda da família.

Para fazer um bolo, Dona Maria precisa de certa quantidade de alguns ingredientes diferentes. Cada ingrediente tem um custo fixo por unidade.
Ela tem uma quantia de dinheiro D máxima para gastar na compra dos ingredientes. Dentre os tipos de bolos que existem, você deve escolher apenas um tipo,
de maneira a maximizar a quantia de bolos.

Calcule o número máximo de bolos de um único tipo que podem ser confeccionados.

Entrada
Na primeira linha terá um inteiro T (T ≤ 100) indicando o número de casos de teste.

Para cada cada caso de teste, na primeira linha haverá três números inteiros D (1 ≤ D ≤ 109), I (1 ≤ I ≤ 100) e B (1 ≤ B ≤ 100) indicando o dinheiro que
Dona Maria tem, o número de ingredientes existentes e a quantidade de tipo de bolos existentes, respectivamente. A próxima linha conterá I números inteiros
indicando o preço da unidade de cada ingrediente. Seguem B linhas seguirão descrevendo cada bolo. O i-ésimo bolo é descrito da seguinte maneira:
inicialmente há um número Qi (1 ≤ Qi ≤ 100) que indicará quantos ingredientes diferentes serão necessários.
Logo em seguida teremos Qi pares de números indicando respectivamente o índice do ingrediente e a quantidade necessária,
todos na mesma linha separados por espaços.

A quantia de cada ingrediente em um bolo poderá variar de 1 até 1000. Cada unidade de um ingrediente custará entre 1 e 1000.
Os ingredientes na descrição de cada bolo serão diferentes. Os identificadores de ingrediente vão de 0 até I-1.

Saída
Para cada caso imprima o número máximo de bolos do mesmo tipo que podem ser confeccionados.

*/

using namespace std;
int main()
{
    int T, D, I, B;
    //d = dinheiro
    //i = n de ingredientes existentes
    //b = qtt de tipos de bolos
    cin>>T;

    while(T--)
    {
        cin>>D>>I>>B;
        map<int,int> custoIngrediente;

        for (int i = 0; i < I; i++)
        {
            int custo;
            cin >> custo;
            custoIngrediente.insert({i, custo});
        }


            int custo = 0, menorCusto = 0;
        for( int j = 0; j < B; j++ )
        {
            int npares;
            cin>>npares;
            for(int i = 0; i <npares; i++)
            {
                int indice; cin>>indice;
                int qtt; cin>>qtt;
                custo += custoIngrediente[indice]*qtt;
                //cout<<"custo"<<custoIngrediente[indice]<<qtt<<endl;
            }
                if(j == 0)
                {
                    menorCusto = custo;
                }
                else if(custo<menorCusto)
                {
                    menorCusto = custo;
                }
                custo = 0;
        }
        cout<<D/menorCusto<<endl;
        menorCusto = 0;
    }

    return 0;
}
#endif


#ifdef ex14

/*

Sua tarefa é escrever um programa que realiza uma simples Codificação Run-Length, como descrita nas regras abaixo.
Qualquer sequencia entre 2 e 9 caracteres idênticos é codificada por dois caracteres.
O primeiro caractere é a largura da sequência, representada por um dos caracteres entre 2 a 9.
O segundo caractere é o valor do caractere repetido. Uma sequência de mais de 9 caracteres identicos repetidos é resolvida com primeiro codificando
9 caracteres, depois os caracteres restantes.

Qualquer sequência de caracteres que não contém repetições consecutivas de qualquer caracteres é representada por um caractere
'1' seguido da sequência de caracteres e terminado com outro '1'. Se um '1' aparecer como parte da sequencia,
 ele será terminado com um '1', tendo então dois caracteres '1' como saída.
Entrada
A entrada consiste de letras(maiúsculas e minúsculas), digitos, espaços e pontuação. Toda linha é terminada com um caractere terminador de linha.
Saída
Cada linha da entrada é codificada separadamente como descrito acima. A nova linha no final de cada linha
não é codificada, mas é passada diretamente para a saída.

*/

using namespace std;
int main()
{



    return 0;
}
#endif


#ifdef ex15

/*

Nicolau já está bastante cansado e sua memória não é mais a mesma. Você, como navegador, deverá auxiliar o Papai Noel a gritar a frase "Feliz Natal"
no idioma correto de cada país de que trenó está sobrevoando.

Como você é um elfo muito esperto, você já criou um pequeno app no seu celular (sim, elfos tem celular) que irá lhe informar a frase
no idioma correto dado o nome do país. Como o trenó é moderno (foi atualizado no ano 2000) ele exibe no painel de navegação o nome do país atual.



Os dados inseridos no seu app foram:

brasil              Feliz Natal!
alemanha            Frohliche Weihnachten!
austria             Frohe Weihnacht!
coreia              Chuk Sung Tan!
espanha             Feliz Navidad!
grecia              Kala Christougena!
estados-unidos      Merry Christmas!
inglaterra          Merry Christmas!
australia           Merry Christmas!
portugal            Feliz Natal!
suecia              God Jul!
turquia             Mutlu Noeller
argentina           Feliz Navidad!
chile               Feliz Navidad!
mexico              Feliz Navidad!
antardida           Merry Christmas!
canada              Merry Christmas!
irlanda             Nollaig Shona Dhuit!
belgica             Zalig Kerstfeest!
italia              Buon Natale!
libia               Buon Natale!
siria               Milad Mubarak!
marrocos            Milad Mubarak!
japao               Merii Kurisumasu!
Para não correr o risco de infomar o nome errado você decidiu testar o aplicativo mais algumas vezes.

Entrada
Você irá testar o seu aplicativo com diversos nomes de paises, simulando os dados informados pelo painel de navegação do trenó.

Saída
O seu aplicativo deverá mostrar na tela a frase no idioma correto. Caso ela não esteja cadastrada, você deverá exibir a
mensagem "--- NOT FOUND ---" para que depois dos testes você possa completar o banco de dados.

*/

using namespace std;
int main()
{
    map<string,string> tradutor;
    tradutor.insert({"brasil", "Feliz Natal!"});
    tradutor.insert({"alemanha", "Frohliche Weihnachten!"});
    tradutor.insert({"austria", "Frohe Weihnacht!"});
    tradutor.insert({"coreia", "Chuk Sung Tan!"});
    tradutor.insert({"espanha", "Feliz Navidad!"});
    tradutor.insert({"grecia", "Kala Christougena!"});
    tradutor.insert({"estados-unidos", "Merry Christmas!"});
    tradutor.insert({"inglaterra", "Merry Christmas!"});
    tradutor.insert({"australia", "Merry Christmas!"});
    tradutor.insert({"portugal", "Feliz Natal!"});
    tradutor.insert({"suecia", "God Jul!"});
    tradutor.insert({"turquia", "Mutlu Noeller"});
    tradutor.insert({"argentina", "Feliz Navidad!"});
    tradutor.insert({"chile", "Feliz Navidad!"});
    tradutor.insert({"mexico", "Feliz Navidad!"});
    tradutor.insert({"antardida", "Merry Christmas!"});
    tradutor.insert({"canada", "Merry Christmas!"});
    tradutor.insert({"irlanda", "Nollaig Shona Dhuit!"});
    tradutor.insert({"belgica", "Zalig Kerstfeest!"});
    tradutor.insert({"italia", "Buon Natale!"});
    tradutor.insert({"libia", "Buon Natale!"});
    tradutor.insert({"siria", "Milad Mubarak!"});
    tradutor.insert({"marrocos", "Milad Mubarak!"});
    tradutor.insert({"japao", "Merii Kurisumasu!"});

    string pais;

    while(cin>>pais)
    {
        if(tradutor[pais] != "\0")
        {
            cout<<tradutor[pais]<<endl;
        }
        else
        {
            cout<<"--- NOT FOUND ---"<<endl;
        }
    }


    return 0;
}
#endif


#ifdef ex16

/*

No jogo O Bruxo, Sigismund Dijkstra é o líder do Serviço Secreto Redaniano, por causa disso ele é uma das pessoas mais importantes do mundo.

Além disso Dijkstra possui um grande tesouro, o qual possui diversos tipos de jóias.

Dijkstra está muito curioso para saber quantos tipos de jóias diferentes seu tesouro possui.

Sabendo que você é o melhor programador do continente Dijkstra te contratou para verificar quantos tipos de jóias distintas ele tem em seu tesouro.

Entrada
A entrada consiste de várias linhas e cada uma contém uma string que descreve uma das jóias de Dijkstra.
Essa string é composta apenas dos caracteres '(' e ')', a soma do tamanho de todas as string não excede 106.

Saída
Imprima quantos tipos de jóias distintas Dijkstra tem.

*/

using namespace std;
int main()
{
    set<string> joias;

    string joia;
    while(cin>> joia)
    {
        joias.insert(joia);
    }
    cout<<joias.size()<<endl;


    return 0;
}
#endif


#ifdef ex17

/*

A FACE em 2015 está apoiando a terceira edição da Maratona de Programação, mas desta vez a organização solicitou sua ajuda para criar um sistema de sorteio utilizando
as letras da palavra FACE. Como a feira utiliza uma proposta diferenciada e alegre, cada participante que entra na feira ganha 4 letras,
uma de cada cor e em formato de bloco de madeira, conforme Figura 1, e deve inserí-las num painel. Se, no momento da inserção,
as 4 letras formarem o contrário das 4 últimas letras, o visitante ganhará um brinde.

Brinde_FACE

Figura 1 - Entrada de FACE no painel seguido de ACEF.

Por exemplo: suponha que já tiveram 3 participantes que entraram na feira e o painél ficou da seguinte forma: F A C E E C F A A C F E A C E F.
Note que sempre que o painél fica vazio, assim como no início do evento, as letras F A C E são inseridas pela organização do evento.
Agora, na entrada do quarto participante, ele inseriu as letras F E C A e, com isso, receberá um brinde por fechar o contrário de A C E F.
Após essa situação, o painél deve ficar F A C E E C F A A C F E.

Escreva um algoritmo que, dadas as letras recebidas e inseridas pelos participantes, diga quantos participantes ganharam brindes.
Lembre-se que sempre que o painel fica vazio as letras F A C E são inseridas pela organização do evento.

Entrada
A primeira linha de cada caso de teste contém um inteiro N (1 ≤ N ≤ 100), representando o número de visitantes que vão receber as letras.
Em cada uma das N linhas seguintes deve ser informada a combinação das 4 letras que o visitante deseja inserir no painel, separadas por espaço.

Saída
Para cada grupo de visitantes, deve ser informado quantos destes receberão brindes.

*/

using namespace std;
int main()
{
    int N;
    cin>>N;
    cin.ignore();

    stack<string> painel;

    int contador = 0;

    for(int i = 0; i < N; i ++)
    {
        if(painel.empty())
        {
            painel.push("F A C E");
        }
        string entrada;
        getline(cin, entrada);
        reverse(entrada.begin(), entrada.end());

        if(entrada == painel.top())
        {
            painel.pop();
            contador ++;
        }
        else
        {
            reverse(entrada.begin(), entrada.end());
            painel.push(entrada);
        }
    }
    cout<<contador<<endl;
return 0;
}
#endif

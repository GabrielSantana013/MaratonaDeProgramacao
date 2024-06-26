#include <iostream>
#include <iomanip>

#define ex18

#ifdef ex01

/*
Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A,
e a soma de C com D for maior que a soma de A e B e se C e D, ambos,
forem positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".

Entrada
Quatro números inteiros A, B, C e D.

Saída
Mostre a respectiva mensagem após a validação dos valores.
*/

using namespace std;

int main(){

    int a,b,c,d;

    cin >>a>>b>>c>>d;

    if(b>c && d>a && c+d > a+b && a>0 && b>0 && a%2 ==0)
    {
        cout << "Valores aceitos" <<endl;
    }
    else
    {
        cout << "Valores nao aceitos" <<endl;
    }


    return 0;
}


#endif // ex01




#ifdef ex02

/*

Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara.
Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular".
Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo.
Imprima sempre o final de linha após cada mensagem.

*/

#include <math.h>

using namespace std;

int main(){

    double a,b,c, delta;

    cin >>a>>b>>c;

    if(a<=0)
    {
        cout <<"Impossivel calcular"<<endl;
    }
    else
    {
        delta = (b*b)-(4*a*c);

        if(delta < 0)
        {
            cout <<"Impossivel calcular"<<endl;
        }
        else
        {
            cout <<"R1 = " <<fixed << setprecision(5) << ((-b)+(sqrt(delta)))/(2*a) <<endl;
            cout <<"R2 = " <<fixed << setprecision(5) << ((-b)-(sqrt(delta)))/(2*a)<<endl;
        }
    }


    return 0;
}


#endif // ex02


#ifdef ex03

/*
Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra.
Obviamente se o valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem “Fora de intervalo”.

O símbolo ( representa "maior que". Por exemplo:
[0,25]  indica valores entre 0 e 25.0000, inclusive eles.
(25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000

Entrada
O arquivo de entrada contém um número com ponto flutuante qualquer.

Saída
A saída deve ser uma mensagem conforme exemplo abaixo.
*/

using namespace std;

int main(){

    double num;

    cin >>num;

    if(num>=0 && num <=25)
    {
        cout << "Intervalo [0,25]"<<endl;
    }
    else if(num>25 && num <=50)
    {
        cout << "Intervalo (25,50]"<<endl;
    }
    else if(num>50 && num <=75)
    {
        cout << "Intervalo (50,75]"<<endl;
    }
    else if(num>75 && num <=100)
    {
        cout << "Intervalo (75,100]"<<endl;
    }
    else
    {
        cout << "Fora de intervalo"<<endl;
    }

    return 0;
}


#endif // ex03



#ifdef ex04

/*
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.


Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.
*/

using namespace std;


int main(){

    int codigo, qtt;

    cin >>codigo>>qtt;

    if(codigo==1)
    {
        cout <<"Total: R$ "<<fixed << setprecision(2)<<float(qtt*4)<<endl;
    }
    else if(codigo==2)
    {
        cout <<"Total: R$ "<<fixed << setprecision(2)<<float(qtt*4.5)<<endl;
    }
    else if(codigo==3)
    {
        cout <<"Total: R$ "<<fixed << setprecision(2)<<float(qtt*5)<<endl;
    }
    else if(codigo==4)
    {
        cout <<"Total: R$ "<<fixed << setprecision(2)<<float(qtt*2)<<endl;
    }
    else
    {
        cout <<"Total: R$ "<<fixed << setprecision(2)<<float(qtt*1.5)<<endl;
    }

    return 0;
}


#endif // ex04





#ifdef ex05

/*
Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente às quatro notas de um aluno. Calcule a média com pesos 2, 3, 4 e 1, respectivamente,
para cada uma destas notas e mostre esta média acompanhada pela mensagem "Media: ". Se esta média for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.".
Se a média calculada for inferior a 5.0, imprima a mensagem "Aluno reprovado.".
Se a média calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve imprimir a mensagem "Aluno em exame.".

No caso do aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno.
Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada. Recalcule a média (some a pontuação do exame com a média anteriormente calculada e divida por 2).
e imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou mais ) ou "Aluno reprovado.", (caso a média tenha ficado 4.9 ou menos).
Para estes dois casos (aprovado ou reprovado após ter pego exame) apresente na última linha uma mensagem "Media final: " seguido da média final para esse aluno.

Entrada
A entrada contém quatro números de ponto flutuante correspendentes as notas dos alunos.

Saída
Todas as respostas devem ser apresentadas com uma casa decimal. As mensagens devem ser impressas conforme a descrição do problema.
Não esqueça de imprimir o enter após o final de cada linha, caso contrário obterá "Presentation Error".
*/

using namespace std;

int main(){

    double n1,n2,n3,n4, media;
    cin >>n1>>n2>>n3>>n4;
    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);

    cout <<"Media: "<<fixed<<setprecision(1)<<media <<endl;

    if(media >=7)
    {
        cout <<"Aluno aprovado."<<endl;
    }
    else if(media>=5 && media<7)
    {
        cout <<"Aluno em exame."<<endl;
        double nExame;
        cin >>nExame;
        cout <<"Nota do exame: "<<fixed<<setprecision(1)<<nExame<<endl;
        media +=nExame;
        media = media/2;

        if(media>=5)
        {
            cout <<"Aluno aprovado."<<endl;
        }
        else
        {
            cout <<"Aluno reprovado."<<endl;
        }

        cout <<"Media final: "<<fixed<<setprecision(1)<<media<<endl;
    }
    else
    {
        cout <<"Aluno reprovado."<<endl;
    }

    return 0;
}


#endif // ex05




#ifdef ex06

/*
Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano.
A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).

Se o ponto estiver na origem, escreva a mensagem “Origem”.

Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.

Entrada
A entrada contem as coordenadas de um ponto.

Saída
A saída deve apresentar o quadrante em que o ponto se encontra.
*/

using namespace std;

int main(){

    double x,y;

    cin >>x>>y;

    if(x ==0 && y ==0)
    {
        cout<<"Origem"<<endl;
    }
    else if(x>0 &&y>0)
    {
        cout<<"Q1"<<endl;
    }
     else if(x<0 &&y>0)
    {
        cout<<"Q2"<<endl;
    }
     else if(x<0 &&y<0)
    {
        cout<<"Q3"<<endl;
    }
     else if(x>0 &&y<0)
    {
        cout<<"Q4"<<endl;
    }
     else if(x==0 &&y!=0)
    {
        cout<<"Eixo Y"<<endl;
    }
    else
    {
        cout<<"Eixo X"<<endl;
    }

    return 0;
}


#endif // ex06




#ifdef ex07

/*
Leia 3 valores inteiros e ordene-os em ordem crescente.
No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.
*/

using namespace std;

int main(){

    int a,b,c,a1,b1,c1;


    cin >>a>>b>>c;

    a1 = a;
    b1 = b;
    c1 = c;

    if(b<a)
    {
        b = a^b;
        a = a^b;
        b = a^b;

    }

    if(c<b)
    {
        c = b^c;
        b = b^c;
        c = b^c;
    }

    if(b<a)
    {
        b = a^b;
        a = a^b;
        b = a^b;
    }


    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<""<<endl;
    cout<<a1<<endl;
    cout<<b1<<endl;
    cout<<c1<<endl;

    return 0;
}


#endif // ex7



#ifdef ex08

/*
Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem


Area = XX.X

Entrada
A entrada contém três valores reais.

Saída
O resultado deve ser apresentado com uma casa decimal.
*/


using namespace std;

int main(){

    double a,b,c;

    cin >>a >>b >>c;

    if(a+b>c && b+c>a && c+a> b)
    {
        double perimetro = a+b+c;
        cout <<"Perimetro = "<<fixed<<setprecision(1)<<perimetro<<endl;
    }
    else
    {
        double area = ((a+b)*c)/2;
        cout <<"Area = "<<fixed<<setprecision(1)<<area<<endl;
    }


    return 0;
}


#endif // ex08


#ifdef ex09

/*
Leia 2 valores inteiros (A e B).
Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.

Entrada
A entrada contém valores inteiros.

Saída
A saída deve conter uma das mensagens conforme descrito acima.
*/


using namespace std;

int main(){

    int a,b;
    cin>>a>>b;

    if(b>a)
    {
        a = b^a;
        b = b^a;
        a = b^a;

    }

    if(a%b !=0)
    {
        cout<<"Nao sao Multiplos"<<endl;
    }
    else
    {
        cout<<"Sao Multiplos"<<endl;
    }

    return 0;
}

#endif // ex09


#ifdef ex10

/*
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados.
A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:

se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
Entrada
A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Saída
Imprima todas as classificações do triângulo especificado na entrada.
*/

using namespace std;

int main(){
    double a,b,c;

    cin >>a>>b>>c;


    if(b>a)
    {
        b = b+a;
        a = b-a;
        b = b-a;
    }

    if(c>b)
    {
        c = c+b;
        b = c-b;
        c = c-b;
    }

    if(b>a)
    {
        b = b+a;
        a = b-a;
        b = b-a;
    }



    if(a>= b+c)
    {
      cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else{
    if((a*a) == (b*b)+(c*c))
    {
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    if((a*a)> (b*b)+(c*c))
    {
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    if((a*a)<(b*b)+(c*c))
    {
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if(a==b && a ==c)
    {
       cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    else if(a==b || b==c || c==a)
    {
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    }

    return 0;
}

#endif // ex10


#ifdef ex11

/*

Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada
Quatro números inteiros representando a hora de início e fim do jogo.

Saída
Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .
*/

using namespace std;



int main(){

    int horaI, minutoI, horaF, minutoF, totalH, totalM;

    cin >> horaI>>minutoI>>horaF>>minutoF;



    int totalMI =  (horaI*60) + minutoI;
    int totalMF =  (horaF*60) + minutoF;

    int minutosTotais;
    if(totalMI<totalMF)
    {
       minutosTotais = totalMF- totalMI;
    }
    else
    {
        minutosTotais = (24*60 - totalMI) + totalMF;
        /*24*60 da 1440, total de minutos no dia,
        logo se a  gnt tira isso dos minutos iniciais a gnt sabe
        quantos minutos tinham restantes no dia. por fim, somamos os
        minutos finais, pra saber os minutos TOTAIS do jogo
        */
    }

    totalH = minutosTotais / 60; //retorna a hora
    totalM = minutosTotais % 60;  //retorna os minutos

    cout <<"O JOGO DUROU "<<totalH <<" HORA(S) E " <<totalM <<" MINUTO(S)"<<endl;

    return 0;
}

#endif // ex11



#ifdef ex12

/*
A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:


Salário	Percentual de Reajuste
0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Acima de 2000.00

15%
12%
10%
7%
4%

Leia o salário do funcionário e calcule e mostre o novo salário,
bem como o valor de reajuste ganho e o índice reajustado, em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste
(ambos devem ser apresentados com 2 casas decimais) e o percentual de reajuste ganho, conforme exemplo abaixo.

*/
#include <iomanip>
using namespace std;


int main(){

    double salario;

    cin >> salario;

    if(salario <= 400)
    {

        cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario*1.15<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<salario*0.15<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if(salario >400 && salario <=800)
    {
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario*1.12<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<salario*0.12<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
        else if(salario >800 && salario <=1200)
    {
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario*1.10<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<salario*0.10<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
        else if(salario >1200 && salario <=2000)
    {
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario*1.07<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<salario*0.07<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
    else
    {
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario*1.04<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<salario*0.04<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }

    return 0;
}

#endif // ex12



#ifdef ex13

/*
Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível segundo o esquema abaixo,
da esquerda para a direita.  Em seguida conclua qual dos animais seguintes foi escolhido,
através das três palavras fornecidas.

Entrada
A entrada contém 3 palavras, uma em cada linha, necessárias para identificar o animal segundo a figura acima, com todas as letras minúsculas.

Saída
Imprima o nome do animal correspondente à entrada fornecida.

*/

using namespace std;

int main(){

    string esqueleto, classe, habAlimentar;

    cin>>esqueleto;

    if(esqueleto == "vertebrado")
    {
        cin >> classe;
        if(classe == "ave")
        {
            cin >>habAlimentar;
            if(habAlimentar == "carnivoro")
            {
                cout << "aguia" <<endl;
            }
            else
            {
               cout << "pomba" <<endl;
            }
        }

        else
        {
            cin >>habAlimentar;
            if(habAlimentar == "onivoro")
            {
                cout << "homem" <<endl;
            }
            else
            {
               cout << "vaca" <<endl;
            }
        }
    }

    else
    {
        cin >> classe;
        if(classe == "inseto")
        {
            cin >>habAlimentar;
            if(habAlimentar == "hematofago")
            {
                cout << "pulga" <<endl;
            }
            else
            {
               cout << "lagarta" <<endl;
            }
        }

        else
        {
            cin >>habAlimentar;
            if(habAlimentar == "hematofago")
            {
                cout << "sanguessuga" <<endl;
            }
            else
            {
               cout << "minhoca" <<endl;
            }
        }

    }

    return 0;
}

#endif // ex13



#ifdef ex14

/*

Leia um número inteiro que representa um código de DDD para discagem interurbana.
Em seguida, informe à qual cidade o DDD pertence, considerando a tabela abaixo:

Se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa deverá informar:
DDD nao cadastrado

Entrada
A entrada consiste de um único valor inteiro.

Saída
Imprima o nome da cidade correspondente ao DDD existente na entrada.
Imprima DDD nao cadastrado caso não existir DDD correspondente ao número digitado.

*/

using namespace std;

int main(){
    int ddd, inc=0;

    int  listaDDD[] = {61,71,11,21,32,19,27,31};
    string listaEstados[] = {"Brasilia","Salvador","Sao Paulo","Rio de Janeiro","Juiz de Fora","Campinas","Vitoria","Belo Horizonte"};
    cin >> ddd;

    for(int i = 0; i<7; i++)
    {
        if(ddd==listaDDD[i])
        {
            cout <<listaEstados[i]<<endl;
            inc++;
            break;
        }
    }

    if(inc ==0)
    {
        cout<<"DDD nao cadastrado"<<endl;
    }


    return 0;
}

#endif // ex14


#ifdef ex15

/*
Em um país imaginário denominado Lisarb, todos os habitantes ficam felizes em pagar seus impostos,
pois sabem que nele não existem políticos corruptos e os recursos arrecadados são utilizados em benefício da população, sem qualquer desvio.
A moeda deste país é o Rombus, cujo símbolo é o R$.

Leia um valor com duas casas decimais, equivalente ao salário de uma pessoa de Lisarb.
Em seguida, calcule e mostre o valor que esta pessoa deve pagar de Imposto de Renda, segundo a tabela abaixo.



Lembre que, se o salário for R$ 3002.00, a taxa que incide é de 8% apenas sobre R$ 1000.00, pois a faixa de salário que fica de R$ 0.00
até R$ 2000.00 é isenta de Imposto de Renda. No exemplo fornecido (abaixo), a taxa é de 8% sobre R$ 1000.00 + 18% sobre R$ 2.00,
o que resulta em R$ 80.36 no total. O valor deve ser impresso com duas casas decimais.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima o texto "R$" seguido de um espaço e do valor total devido de Imposto de Renda, com duas casas após o ponto.
Se o valor de entrada for menor ou igual a 2000, deverá ser impressa a mensagem "Isento".
*/

using namespace std;
#include <iomanip>

int main(){

    double salario, imposto=0;
    cin >> salario;

    if(salario<=2000)
    {
        cout << "Isento" <<endl;
        return 0;
    }
    else if(salario > 2000 && salario <=3000)
    {
        imposto = (salario - 2000)*0.08;
    }

    else if(salario>3000 && salario <=4500)
    {
       imposto = 1000*0.08 + ((salario-3000)*0.18);
    }

    else
    {
        imposto = (1000*0.08) + (1500*0.18)+((salario-4500)*0.28);
    }

    cout <<"R$ "<<fixed<<setprecision(2)<<imposto<<endl;
    return 0;
}

#endif // ex15


#ifdef ex16

/*

Leia um valor inteiro entre 1 e 12, inclusive.
Correspondente a este valor, deve ser apresentado como resposta o mês do ano por extenso, em inglês, com a primeira letra maiúscula.

Entrada
A entrada contém um único valor inteiro.

Saída
Imprima por extenso o nome do mês correspondente ao número existente na entrada, com a primeira letra em maiúscula.

*/

using namespace std;

int main(){
    int num;
    cin >>num;
    string meses[] = {"January","February","March","April","May","June","July","August","September","October","November","December",};

    cout <<meses[num-1]<<endl;

    return 0;
}

#endif // ex16


#ifdef ex17

/*
Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos).
A seguir, mostre a quantidade de valores positivos digitados.

Entrada
Seis valores, negativos e/ou positivos.

Saída
Imprima uma mensagem dizendo quantos valores positivos foram lidos.
*/

using namespace std;

int main(){

    double nums[6];
    int contaPos = 0;

    for(int i = 0; i<6;i++)
    {
        cin >> nums[i];
        if(nums[i]>0)
        {
            contaPos++;
        }
    }

    cout <<contaPos<<" valores positivos"<<endl;

    return 0;
}

#endif // ex17

#ifdef ex18

/*


Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês.
O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

Entrada
Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai começar.
Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de entrada haverá outra informação
no mesmo formato das duas primeiras linhas, indicando o término do evento.

Saída
Na saída, deve ser apresentada a duração do evento, no seguinte formato:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.

*/


using namespace std;

int main(){

    int diaI, horaI, minutoI, segundoI, diaF, horaF, minutoF, segundoF;
    string teste;

    cin >> teste>> diaI;
    cin >> horaI>>teste>>minutoI>>teste>>segundoI;

    cin>> teste>>diaF;
    cin>> horaF>>teste>>minutoF>>teste>>segundoF;


    segundoI = segundoF - segundoI;
    minutoI = minutoF - minutoI;
    horaI = horaF - horaI;
    diaI = diaF-diaI;

    if(segundoI<0)
    {
        segundoI +=60;
        minutoI --;
    }

    if(minutoI<0)
    {
        minutoI+=60;
        horaI--;
    }

    if(horaI<0)
    {
        horaI+=24;
        diaI--;
    }

    cout <<diaI<<" dia(s)"<<endl;
    cout <<horaI<<" hora(s)"<<endl;
    cout <<minutoI<<" minuto(s)"<<endl;
    cout <<segundoI<<" segundo(s)"<<endl;

    return 0;
}
#endif // ex18

#ifdef ex19

/*
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos.
Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante.
Pelo menos um destes números será positivo.

Saída
O primeiro valor de saída é a quantidade de valores positivos.
A próxima linha deve mostrar a média dos valores positivos digitados.
*/

using namespace std;
#include <iomanip>

int main(){

    float n1,n2,n3,n4,n5,n6, numsPos = 0, media = 0;
    int contador = 0;

    cin>>n1>>n2>>n3>>n4>>n5>>n6;

    if(n1>0)
    {
        contador++;
        numsPos += n1;
    }
    if(n2>0)
    {
        contador++;
        numsPos += n2;
    }
    if(n3>0)
    {
        contador++;
        numsPos += n3;
    }
    if(n4>0)
    {
        contador++;
        numsPos += n4;
    }
    if(n5>0)
    {
        contador++;
        numsPos += n5;
    }
    if(n6>0)
    {
        contador++;
        numsPos += n6;
    }

    media = numsPos/contador;

    cout <<contador <<" valores positivos"<<endl;
    cout <<fixed<<setprecision(1)<<media<<endl;
    return 0;
}
#endif // ex19

#ifdef ex20

/*

Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.

*/

using namespace std;

int main(){


    int n1,n2,n3,n4,n5, contaPar=0;

    cin >>n1>>n2>>n3>>n4>>n5;

    if(n1%2 ==0)
    {
       contaPar++;
    }
    if(n2%2 ==0)
    {
       contaPar++;
    }
    if(n3%2 ==0)
    {
       contaPar++;
    }
    if(n4%2 ==0)
    {
       contaPar++;
    }
    if(n5%2 ==0)
    {
       contaPar++;
    }

    cout <<contaPar<<" valores pares"<<endl;

    return 0;
}
#endif // ex20

#ifdef ex21

/*

Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares,
quantos valores digitados foram positivos e quantos valores digitados foram negativos.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.

*/

using namespace std;

int main(){

    int n1,n2,n3,n4,n5, contPos, contNeg,contPar, contImp;
    int nums[5];

    contImp = contPar = contNeg = contPos = 0;

    for(int i = 0; i < 5 ;i++)
    {
        cin>>nums[i];
        if(nums[i]<0)
        {
            contNeg++;
        }
        else if (nums[i] != 0)
        {
            contPos++;
        }
        if(nums[i] %2==0)
        {
            contPar++;
        }
        else
        {
            contImp++;
        }

    }

    cout<<contPar<<" valor(es) par(es)"<<endl;
    cout<<contImp<<" valor(es) impar(es)"<<endl;
    cout<<contPos<<" valor(es) positivo(s)"<<endl;
    cout<<contNeg<<" valor(es) negativo(s)"<<endl;

    return 0;
}
#endif // ex21

#ifdef ex22

/*

Leia um valor inteiro X (1 <= X <= 1000).
Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.

Entrada
O arquivo de entrada contém 1 valor inteiro qualquer.

Saída
Imprima todos os valores ímpares de 1 até X, inclusive X, se for o caso.

*/

using namespace std;

int main(){

    int x;
    cin>>x;

    for(int i = 0; i<=x;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}
#endif // ex22

#ifdef ex23

/*

Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X,
um valor por linha, inclusive o X ser for o caso.

Entrada
A entrada será um valor inteiro positivo.

Saída
A saída será uma sequência de seis números ímpares.

*/

using namespace std;

int main(){

    int x;
    cin >> x;

    for(int i = x; i<x+12;i++)
    {
        if(i%2!=0)
        {
            cout <<i<<endl;
        }
    }

    return 0;
}
#endif // ex23

#ifdef ex24

/*

Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

Entrada
O arquivo de entrada contém dois valores inteiros.

Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos
na entrada que deverá caber em um inteiro.

*/

using namespace std;

int main(){
    int x,y,maiorNum,menorNum, totalImp = 0;

    cin>>x>>y;

    if(x>y)
    {
        maiorNum = x;
        menorNum = y+1;
    }
    else
    {
        maiorNum = y;
        menorNum = x+1;
    }



    for(int i = menorNum; i<maiorNum; i++)
    {
        if(i%2!=0)
        {
            totalImp= totalImp+(i);

        }
    }

   cout <<totalImp<<endl;

    return 0;
}
#endif // ex24

#ifdef ex25

/*

Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
mostrando essas informações.

Entrada
A primeira linha da entrada contém um valor inteiro N (N < 10000), que indica o número de casos de teste.
Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).


Saída
Para cada caso, imprima quantos números estão dentro (in) e quantos valores estão fora (out) do intervalo.

*/

using namespace std;

int main(){

    int N;
    int intervalo[] = {10,11,12,13,14,15,16,17,18,19,20};
    int valores[10000];
    int contaI = 0;

    cin>>N;

    for(int i = 0; i < N; i++)
    {
        cin>>valores[i];
        for(int j = 0; j<11; j++)
        {
            if(valores[i] == intervalo[j])
            {
                contaI++;
            }
        }
    }

    cout <<contaI<<" in"<<endl;
    cout <<N-contaI<<" out"<<endl;


    return 0;
}
#endif // ex25

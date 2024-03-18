#include <iostream>

#define ex13


#ifdef ex01
using namespace std;

int main() {

    int a, b, x;
    cin >> a >> b;
    x = a+b;

    cout << "x = " <<x;

    return 0;
}

#endif // ex01

#ifdef ex02

/*A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que π = 3.14159:

- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.

Entrada
A entrada contém um valor de ponto flutuante (dupla precisão), no caso, a variável raio.

Saída
Apresentar a mensagem "A=" seguido pelo valor da variável area, conforme exemplo abaixo, com 4 casas após o ponto decimal.
Utilize variáveis de dupla precisão (double).
Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".*/

#include <iomanip> //lib pra manipular entrada e saida

/*
    fixed = agora a variavel q eu formatei sempre vai estar com aquelas casa decimais
    setprecision() usada para determinar o número de casas decimais
*/

using namespace std;


int main(){

    double pi = 3.14159, raio, area;
    cin >> raio;
    area = pi*(raio*raio);

    cout << "A=" << fixed << setprecision(4) << area << endl;


    return 0;
}

#endif // ex02


#ifdef ex03

/*
Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.


Entrada
O arquivo de entrada contém 2 valores inteiros.

Saída
Imprima a mensagem "SOMA" com todas as letras maiúsculas, com um espaço em branco antes e depois da igualdade seguido pelo valor correspondente à soma de A e B. Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".
*/

using namespace std;

int main() {

    int a, b, soma;

    cin >> a >> b;
    soma = a+b;

    cout << "SOMA = "<<soma<<endl;


    return 0;
}
#endif // ex03

#ifdef ex04

/*
Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD.
A seguir mostre a variável PROD com mensagem correspondente.


Entrada
O arquivo de entrada contém 2 valores inteiros.

Saída
Imprima a mensagem "PROD" e a variável PROD conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.
Não esqueça de imprimir o fim de linha após o produto, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
*/

    using namespace std;

    int main(){

    int a, b, prod;

    cin >> a >> b;
    prod = a*b;

    cout <<"PROD = " << prod<<endl;;

    }

#endif // ex04


#ifdef ex05

/*
Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno.
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11).
Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

Entrada
O arquivo de entrada contém 2 valores com uma casa decimal cada um.

Saída
Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, com 5 dígitos após o ponto decimal
e com um espaço em branco antes e depois da igualdade.
Utilize variáveis de dupla precisão (double) e como todos os problemas, não esqueça de imprimir o fim de linha após o resultado,
caso contrário, você receberá "Presentation Error".
*/
#include <iomanip>

using namespace std;

int main(){

    double a,b, media;
    cin >> a >> b;

    media = ((a*3.5)+(b*7.5))/11;

    cout << "MEDIA = " << fixed << setprecision(5) << media <<endl;



return 0;
}

#endif // ex05


#ifdef ex06

#include<iomanip>

using namespace std;

/*Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno.
 A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.
 Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

Entrada
O arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão (double).

Saída
Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo,
com 1 dígito após o ponto decimal e com um espaço em branco antes e depois da igualdade.
Assim como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".*/

int main(){

    double a,b,c, media;

    cin >> a >> b >> c;

    media = ((a*2)+(b*3)+(c*5))/10;

    cout << "MEDIA = " <<fixed<< setprecision(1)<<media<<endl;

return 0;
}


#endif // ex06

#ifdef ex07

/*
Leia quatro valores inteiros A, B, C e D.
A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

Entrada
O arquivo de entrada contém 4 valores inteiros.

Saída
Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.
*/

using namespace std;

int main(){

    int a,b,c,d, diferenca;

    cin >> a>>b>>c>>d;

    diferenca = (a * b - c * d);

    cout << "DIFERENCA = " << diferenca<<endl;


return 0;
}

#endif // ex07

#ifdef ex08

/*
Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas,
o valor que recebe por hora e calcula o salário desse funcionário.
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.

Entrada
O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, representando o número,
quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada, respectivamente.

Saída
Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco antes e depois da igualdade.
No caso do salário, também deve haver um espaço em branco após o $.

*/
#include <iomanip>
using namespace std;

int main(){

    int nFuncionario;
    float horasTrabalhadas, salarioHora;

    cin >> nFuncionario >> horasTrabalhadas >> salarioHora;

    cout << "NUMBER = " <<nFuncionario<<endl;
    cout << "SALARY = U$ " <<fixed << setprecision(2) << salarioHora*horasTrabalhadas <<endl;

    return 0;
}

#endif // ex08

#ifdef ex09

/*
Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro).
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês,
com duas casas decimais.

Entrada
O arquivo de entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla precisão (double) com duas casas decimais,
representando o salário fixo do vendedor e montante total das vendas efetuadas por este vendedor, respectivamente.

Saída
Imprima o total que o funcionário deverá receber, conforme exemplo fornecido.
*/
#include <iomanip>

using namespace std;

int main(){

    string name;
    double salario, totalVendas;

    cin >> name >> salario >> totalVendas;

    cout << "TOTAL = R$ " << fixed <<setprecision(2)<< salario+(totalVendas*0.15) << endl;
}
#endif // ex09

#ifdef ex10

#include <iomanip>
using namespace std;

/*Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).

Entrada
O arquivo de entrada contém dois valores: um valor inteiro X representando a distância total percorrida (em Km), e um valor real Y representando o total de combustível gasto,
com um dígito após o ponto decimal.

Saída
Apresente o valor que representa o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".*/

int main(){

    int distancia;
    float combustivel;

    cin >> distancia >> combustivel;

    cout << fixed << setprecision(3)<<distancia/combustivel <<" km/l"<<endl;

}

#endif // ex10

#ifdef ex11

/*
Dois carros (X e Y) partem em uma mesma direção. O carro X sai com velocidade constante de 60 Km/h e o carro Y sai com velocidade constante de 90 Km/h.

Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quilômetros do carro X, ou seja, consegue se afastar um quilômetro a cada 2 minutos.

Leia a distância (em Km) e calcule quanto tempo leva (em minutos) para o carro Y tomar essa distância do outro carro.

Entrada
O arquivo de entrada contém um número inteiro.

Saída
Imprima o tempo necessário seguido da mensagem "minutos".
*/

using namespace std;

int main(){

    int x;
    cin >> x;
    cout << x*2 <<" minutos"<< endl;

}

#endif // ex11


#ifdef ex12

/*Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.*/

using namespace std;

int main (){

    int segundos, minutos = 0, horas = 0;

    cin >>segundos;

    while(segundos >=60)
    {
        segundos -= 60;
        minutos ++;

        if(minutos >=60)
        {
            minutos -=60;
            horas ++;
        }
    }

    cout << horas<<":"<<minutos<<":"<<segundos<<endl;

return 0;
}

#endif // ex12

#ifdef ex13

/*
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:

maior ab = (a+b+abs(a-b))/2

Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
*/

#include <cmath>
using namespace std;


int main(){

int a,b,c, maior;
    cin >>a >>b >>c;

    maior = ((a+b)+abs(a-b))/2;
    if(maior > c)
    {
        cout <<maior <<" eh o maior"<< endl;
    }

    else{
      cout <<c <<" eh o maior"<< endl;
    }


return 0;
}

#endif // ex13

#ifdef ex14

using namespace std;

/*
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
Entrada
O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída
O arquivo de saída deverá conter 5 linhas de dados.
Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente
e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.
*/

#include <iomanip>

int main(){
    double a, b, c;

    cin >>a>>b>>c;

    cout <<"TRIANGULO: "<<fixed << setprecision(3)<<(a*c)/2<<endl;
    cout <<"CIRCULO: "<<fixed << setprecision(3)<<(c*c)*3.14159<<endl;
    cout <<"TRAPEZIO: "<<fixed << setprecision(3)<<(a+b)*c/2<<endl;
    cout <<"QUADRADO: "<<fixed << setprecision(3)<<b*b<<endl;
    cout <<"RETANGULO: "<<fixed << setprecision(3)<<a*b<<endl;

return 0;
}

#endif // ex14

#ifdef ex15
using namespace std;
 /*
 Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R).
 A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.

Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++),
assumem que o resultado da divisão entre dois inteiros é outro inteiro.

Entrada
O arquivo de entrada contém um valor de ponto flutuante (dupla precisão), correspondente ao raio da esfera.

Saída
A saída deverá ser uma mensagem "VOLUME" conforme o exemplo fornecido abaixo, com um espaço antes e um espaço depois da igualdade. O valor deverá ser apresentado com 3 casas após o ponto.
 */

#include <iomanip>


int main(){
 double pi = 3.14159, raio;
 cin >> raio;

 cout <<"VOLUME = "<<fixed << setprecision(3) << 4.0/3*(pi*(raio*raio*raio)) <<endl;
return 0;
}
#endif // ex15


#ifdef ex16

/*
Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1,
o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

Entrada
O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores,
respectivamente dois inteiros e um valor com 2 casas decimais.

Saída
A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo,
lembrando de deixar um espaço após os dois pontos e um espaço após o "R$".
O valor deverá ser apresentado com 2 casas após o ponto.
*/

#include <iomanip>
using namespace std;

int main(){

    int codPeca1, codPeca2, nPeca1, nPeca2;
    double  vPeca1, vPeca2;

    cin >> codPeca1 >> nPeca1 >> vPeca1 >> codPeca2 >> nPeca2 >> vPeca2;

    cout <<"VALOR A PAGAR: R$ " <<fixed << setprecision(2) <<(nPeca1*vPeca1) + (nPeca2*vPeca2) <<endl;



return 0;
}
#endif // ex16

#ifdef ex17

/*
Leia um valor inteiro.
A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto.
As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido.
Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
*/

using namespace std;
int main(){

int n, nota100, nota50, nota20, nota10, nota5, nota2, nota1;

    nota100 = nota50 = nota20 = nota10 = nota5 = nota2 = nota1 = 0;

    cin >> n;
    cout <<n<<endl;

    while(n>=100)
    {
        n -=100;
        nota100++;
    }
    while(n>=50)
    {
        n-=50;
        nota50 ++;
    }
    while(n>=20)
    {
        n-=20;
        nota20 ++;
    }
    while(n>=10)
    {
        n-=10;
        nota10 ++;
    }
    while(n>=5)
    {
        n-=5;
        nota5 ++;
    }

    while(n>=2)
    {
        n-=2;
        nota2 ++;
    }

    while(n>=1)
    {
        n-=1;
        nota1 ++;
    }

    cout <<nota100<<" nota(s) de R$ 100,00" <<endl;
    cout <<nota50<<" nota(s) de R$ 50,00" <<endl;
    cout <<nota20<<" nota(s) de R$ 20,00" <<endl;
    cout <<nota10<<" nota(s) de R$ 10,00" <<endl;
    cout <<nota5<<" nota(s) de R$ 5,00" <<endl;
    cout <<nota2<<" nota(s) de R$ 2,00" <<endl;
    cout <<nota1<<" nota(s) de R$ 1,00" <<endl;

return 0;
}

#endif // ex17

#ifdef ex18
/*
Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem,
ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse através de um simples programa.
Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h).
Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários.
Mostre o valor com 3 casas decimais após o ponto.

Entrada
O arquivo de entrada contém dois inteiros. O primeiro é o tempo gasto na viagem (em horas)
e o segundo é a velocidade média durante a mesma (em km/h).

Saída
Imprima a quantidade de litros necessária para realizar a viagem, com três dígitos após o ponto decimal
*/

#include <iomanip>

using namespace std;

int main(){

    int tempo, vm;
    cin >>tempo >> vm;
    double litros = (tempo*vm)/12.00;

    cout << fixed << setprecision(3) << litros <<endl;


return 0;
}

#endif // ex18

#ifdef ex19


/*
Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias.
Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364.
Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

Entrada
O arquivo de entrada contém um valor inteiro.

Saída
Imprima a saída conforme exemplo fornecido.
*/
using namespace std;



int main(){

    int dias, anos, meses;
    dias = anos = meses = 0;

    cin >>dias;

    while(dias>=365)
    {
        dias -=365;
        anos
        ++;
    }

        while(dias>=30)
    {
        dias -=30;
        meses ++;
    }

    cout <<anos <<" ano(s)" <<endl;
    cout <<meses <<" mes(es)" <<endl;
    cout <<dias <<" dia(s)" <<endl;


return 0;
}

#endif // ex19

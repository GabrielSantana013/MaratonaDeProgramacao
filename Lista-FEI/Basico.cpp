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

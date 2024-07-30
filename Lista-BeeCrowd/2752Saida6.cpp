/*

O seu professor de programação gostaria que você fizesse um programa com as seguintes características:

Crie uma variável para armazenar 50 caracteres;
Atribua a variável anterior a frase: "AMO FAZER EXERCICIO NO URI";
Mostre na primeira linha o carácter <, o valor armazenado na variável com o formato "%s" e o carácter >;
Mostre na linha seguinte o carácter < , o valor armazenado na variável com o formato "%30s" e o carácter >;
Mostre na linha seguinte o carácter < , o valor armazenado na variável com o formato "%.20s" e o carácter >;
Mostre na linha seguinte o carácter < , o valor armazenado na variável com o formato "%-20s" e o carácter >;
Mostre na linha seguinte o carácter < , o valor armazenado na variável com o formato "%-30s" e o carácter >;
Mostre na linha seguinte o carácter < , o valor armazenado na variável com o formato "%.30s" e o carácter >;
Mostre na linha seguinte o carácter < , o valor armazenado na variável com o formato "%30.20s" e o carácter >;
Mostre na linha seguinte o carácter < , o valor armazenado na variável com o formato "%-30.20s" e o carácter >;
Entrada
Não há.

Saída
O resultado de seu programa deve ser escrito conforme o exemplo da saída.

*/

#include <iostream>
#include<cstdio>

int main(){
    char frase[50] = "AMO FAZER EXERCICIO NO URI";
    printf("<%s>\n", frase);
    printf("<%30s>\n", frase);
    printf("<%.20s>\n", frase);
    printf("<%-20s>\n", frase);
    printf("<%-30s>\n", frase);
    printf("<%.30s>\n", frase);
    printf("<%30.20s>\n", frase);
    printf("<%-30.20s>\n", frase);
    return 0;
}
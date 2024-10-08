/*
Pedrinho é um garoto que adora festas em família, principalmente o Natal, quando ganha presente dos pais e dos avós. Esse ano, 
seu pai lhe prometeu um PS4, mas somente se Pedrinho conseguir resolver alguns desafios ao longo do ano, sendo um deles, escrever um programa 
que calcule quantos dias faltam para o Natal.

Entretanto, Pedrinho tem somente 9 anos e não tem noção alguma de programação, mas sabe que você, primo dele, mexe com "coisas de computador", 
e dessa forma, pediu para você escrever o programa para ele. Não somente isso, mas prometeu que deixaria você jogar todo final de semana e por 
quanto tempo quiser!
Entrada

A entrada é composta por vários casos de teste. Cada linha contém o mês e o dia do ano de 2016 (ano bissexto). A entrada termina com fim de 
arquivo.
Saída

Se for Natal, imprima "E natal!"; se faltar somente um dia, imprima "E vespera de natal!"; se já passou, imprima "Ja passou!". Caso contrário, 
imprima "Faltam X dias para o natal!", sendo X o número de dias que faltam para o Natal.
*/


#include <iostream>

int main(){

    int mes, dia;
    int diasMeses[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

    while(std::cin>>mes>>dia)
    {
        for(int i = 0; i < 12; i++)
        {
            if(mes == 12 && dia == 25)
            {
                std::cout<<"E natal!"<<std::endl;
                break;
            }
            else if(mes == 12 && dia == 24)
            {
                std::cout<<"E vespera de natal!"<<std::endl;
                break;
            }
            else if(mes == 12 && dia > 25)
            {
                std::cout<<"Ja passou!"<<std::endl;
                break;
            }
            else
            {
                int diasFaltam = 0;
                for(int j = mes-1; j < 12; j++)
                {
                    diasFaltam += diasMeses[j];
                }
                diasFaltam -= dia+6;
                std::cout<<"Faltam "<<diasFaltam<<" dias para o natal!"<<std::endl;
                break;
            }
        }
    }

    return 0;
}
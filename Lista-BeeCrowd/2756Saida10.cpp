/*
O seu professor de programação gostaria que você fizesse um programa com as seguintes características:

Coloque sete espaços em branco e coloque o carácter 'A';
Coloque seis espaços em branco e coloque o carácter 'B', um espaço em branco e o carácter 'B';
Coloque cinco espaços em branco e coloque o carácter 'C', três espaço em branco e o carácter 'C';
Coloque quatro espaços em branco e coloque o carácter 'D', cinco espaço em branco e o carácter 'D';
Coloque três espaços em branco e coloque o carácter 'E', sete espaço em branco e o carácter 'E';
Repita o procedimento 4;
Repita o procedimento 3;
Repita o procedimento 2;
Repita o procedimento 1.
Entrada
Não há.

Saída
O resultado de seu programa deve ser escrito conforme o exemplo de saída.

*/

#include <iostream>

int main(){

    int espaco = 7;
    std::string letras = {'A','B','C','D','E'};
    int espacoEntre[] = {1,3,5,7};
    
    for(int i = 0; i < 5; i++)
    {
        if(i==0){std::cout<<std::string(espaco,' ')<<letras[i]<<std::endl;espaco--;}
        else{std::cout<<std::string(espaco,' ')<<letras[i]<<std::string(espacoEntre[i-1],' ')<<letras[i]<<std::endl;espaco--;}
    }

    espaco = 4;

    for(int i = 3; i >=0; i--)
    {
        if(i==0){std::cout<<std::string(espaco,' ')<<letras[i]<<std::endl;espaco++;}
        else{std::cout<<std::string(espaco,' ')<<letras[i]<<std::string(espacoEntre[i-1],' ')<<letras[i]<<std::endl;espaco++;}
    }

    return 0;
}
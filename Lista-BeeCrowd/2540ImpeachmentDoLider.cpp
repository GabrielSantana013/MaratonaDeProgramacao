/*
Analógimôn Go! é um jogo bastante popular. Os jogadores de Analógimôn Go! são divididos em três grandes times: 
Time Valor, Time Instinto e Time Místico, que são liderados pelos seus líderes Kandera, Esparky e Blanque, respectivamente. 
Naturalmente, você faz parte de um desses times!

O líder do seu time está sendo acusado de infringir as regras do jogo por gerenciar incorretamente os doces 
recebidos do Professor que são destinados ao time. Isto criou uma grande polêmica dentro da equipe: 
alguns jogadores defendem que o líder realmente agiu incorretamente e deve sofrer um impeachment e ser afastado de seu cargo, 
enquanto outros defendem que ele não infringiu as regras, que a acusação é inverídica e que ele deve continuar no cargo.

Para resolver a situação, uma votação será realizada entre todos os N jogadores do seu time. 
Cada jogador deverá votar se o impeachment deve ou não ocorrer. 
Se o número de votos favoráveis ao impeachment foi maior ou igual a 2/3 (dois terços) do total de jogadores, 
o líder será afastado. Caso contrário, a acusação é arquivada e ele continuará no cargo.
Dados os votos de todos os jogadores, determine o resultado da votação.
*/

#include <iostream>

int main()
{

    int n, votosFavoraveis = 0, votosContras = 0;

    while (std::cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            int voto;
            std::cin >> voto;
            if (voto)
            {
                votosFavoraveis++;
            }
            else
            {
                votosContras++;
            }
        }

        if (votosFavoraveis >= (float(2 * n) / 3))
        {
            std::cout << "impeachment\n";
        }
        else
        {
            std::cout << "acusacao arquivada\n";
        }
        votosFavoraveis = 0;
        votosContras = 0;
    }
    return 0;
}
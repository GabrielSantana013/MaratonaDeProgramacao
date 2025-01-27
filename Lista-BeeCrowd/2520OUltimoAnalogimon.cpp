/*
Analógimôn Go! é um jogo bastante popular. Em sua jornada, o jogador percorre diversas cidades capturando pequenos monstrinhos virtuais,
chamados analógimôns. Você acabou de chegar em uma cidade que contém o último analógimôn que falta para sua coleção!

A cidade pode ser descrita como um grid de N linhas e M colunas. Você está em uma dada posição da cidade,
enquanto o último analógimôn está em outra posição da mesma cidade. A cada segundo, você pode se mover (exatamente) uma posição ao norte,
ao sul, a leste ou a oeste. Considerando que o analógimôn não se move,
sua tarefa é determinar o menor tempo necessário para ir até a posição do monstrinho.

A figura abaixo descreve o exemplo da entrada, e apresenta um caminho percorrido em 5 segundos.
Outros caminhos percorridos no mesmo tempo são possíveis, mas não há outro caminho que pode ser percorrido em um tempo menor.
*/

#include <iostream>

int main()
{

    int n, m, pos_x1, pos_y1, pos_x2, pos_y2;
    while (std::cin >> n >> m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x;
                std::cin >> x;
                if(x == 2)
                {
                    pos_x1 = i;
                    pos_y1 = j;
                }

                if (x == 1)
                {
                    pos_x2 = i;
                    pos_y2 = j;
                }
            }
        }

        std::cout << abs(pos_x1 - pos_x2) + abs(pos_y1 - pos_y2) << std::endl;
    }

    return 0;
}
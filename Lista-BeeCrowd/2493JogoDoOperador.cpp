/*
Samu Elmito adora criar jogos peculiares para desafiar seus amigos.
Desta vez, ele inventou um jogo chamado "Jogo do Operador", em que ele cria expressões
básicas e cada jogador deve escolher uma expressão e preencher a lacuna com o
operador correto para validá-la. Os jogadores poderão escolher operadores de
somente três tipos: adição, subtração e multiplicação. Porém, se o jogador achar
que não há operador entre os três tipos que valide a expressão, poderá responder
Impossível.

Sua tarefa é simples: dadas as expressões e as respostas dos jogadores,
determinar os jogadores que não passarão para a outra fase do jogo.
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t;

    while (std::cin >> t)
    {

        std::string nomes[1000];
        std::vector<std::pair<std::string, int>> erros;
        char operadores[1000];
        int n1[1000], n2[1000], resultado[1000];
        int indice[1000];
        

        for (int i = 0; i < t; i++)
        {
            std::cin >> n1[i];
            std::cin.ignore();
            std::cin >> n2[i];
            std::cin.ignore();
            std::cin >> resultado[i];
        }

        for(int i = 0; i < t; i ++)
        {
            std::cin >> nomes[i];
            std::cin.ignore();
            std::cin >> indice[i];
            std::cin.ignore();
            std::cin >> operadores[i];
        }

        for(int i = 0; i < t; i ++)
        {
            bool acertou = false;

            switch (operadores[i]) {
                case '+':
                //debbug
                //std::cout << "n1: " << n1[indice[i] - 1] << " n2: " << n2[indice[i] - 1] << " resultado: " << resultado[indice[i] - 1] << std::endl;
                    acertou = (n1[indice[i] - 1] + n2[indice[i] - 1] == resultado[indice[i] - 1]);
                    break;
                case '-':
                //std::cout<< "n1: " << n1[indice[i] - 1] << " n2: " << n2[indice[i] - 1] << " resultado: " << resultado[indice[i] - 1] << std::endl;
                    acertou = (n1[indice[i] - 1] - n2[indice[i] - 1] == resultado[indice[i] - 1]); 
                    break;
                case '*':
                //std::cout<< "n1: " << n1[indice[i] - 1] << " n2: " << n2[indice[i] - 1] << " resultado: " << resultado[indice[i] - 1] << std::endl;
                    acertou = (n1[indice[i] - 1] * n2[indice[i] - 1] == resultado[indice[i] - 1]);
                    break;
                case 'I':
                    acertou = (n1[indice[i] - 1] + n2[indice[i] - 1] != resultado[indice[i] - 1] &&
                               n1[indice[i] - 1] - n2[indice[i] - 1] != resultado[indice[i] - 1] &&
                               n1[indice[i] - 1] * n2[indice[i] - 1] != resultado[indice[i] - 1]);
                    break;
            }

            if (!acertou) {
                erros.push_back({nomes[i], indice[i]});
            }
        }

        if(erros.empty())
        {
            std::cout << "You Shall All Pass!" << std::endl;
        }
        else if(erros.size() == t)
        {
            std::cout << "None Shall Pass!" << std::endl;
        }
        else
        {
            std::sort(erros.begin(), erros.end());
            for(int i = 0; i < erros.size(); i++)
            {
                if(i == erros.size() - 1)
                {
                    std::cout << erros[i].first << std::endl;
                }
                else
                {
                    std::cout << erros[i].first << " ";
                }
            }
        }
    }

    return 0;
}
#include <iostream>

int main()
{

    std::string mensagem;
    int n, posicao;
    while (std::cin >> mensagem)
    {
        std::cin >> n;

        for (int i = 0; i < n; i++)
        {
            std::cin >> posicao;
            std::cout << mensagem[posicao - 1];
        }
        std::cout << std::endl;
    }
    return 0;
}
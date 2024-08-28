#include <iostream>

int main()
{

    int n, t, total = 0;
    std::string alimento;
    std::cin >> t;

    while (t != 0)
    {
        total = 0;
        for (int i = 0; i < t; i++)
        {
            std::cin >> n;
            std::cin.ignore();
            std::getline(std::cin, alimento);

            if (alimento == "suco de laranja")
            {
                total += n * 120;
            }
            else if (alimento == "morango fresco" || alimento == "mamao")
            {
                total += n * 85;
            }
            else if (alimento == "goiaba vermelha")
            {
                total += n * 70;
            }
            else if (alimento == "manga")
            {
                total += n * 56;
            }
            else if (alimento == "laranja")
            {
                total += n * 50;
            }
            else if (alimento == "brocolis")
            {
                total += n * 34;
            }
        }

        if (total > 130)
        {
            std::cout << "Menos " << total - 130 << " mg" << std::endl;
        }
        else if(total <110)
        {
            std::cout << "Mais " << 110 - total << " mg" << std::endl;
        }
        else
        {
            std::cout << total << " mg" << std::endl;
        }
        std::cin>>t;
        std::cin.ignore();
    }

    return 0;
}
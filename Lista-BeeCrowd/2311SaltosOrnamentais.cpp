#include <iostream>
#include <iomanip>
int main()
{

    int n;
    float gd, maior, menor, nota;
    std::string nome;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> nome;
        std::cin >> gd;
        float soma = 0;


        for (int j = 0; j < 7; j++)
        {
            std::cin >> nota;

            if (j == 0)
            {
                menor = nota;
                maior = nota;
            }
            else
            {
                if (nota < menor)
                {
                    menor = nota;
                }
                if (nota > maior)
                {
                    maior = nota;
                }
            }
            soma += nota;
        }
        std::cout<<std::fixed<<std::setprecision(2);
        std::cout<<nome<<" "<< (soma - (maior + menor)) * gd<<std::endl;
    }

    return 0;
}
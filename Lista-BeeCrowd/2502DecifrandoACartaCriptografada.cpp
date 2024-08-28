#include <iostream>
#include <map>
#include <string>
#include <cctype>

int main()
{

    int n, m;
    std::string cifra1, cifra2, frase;

    while (std::cin >> n >> m)
    {
        std::map<char, char> mapa;
        std::cin.ignore();
        getline(std::cin, cifra2);
        getline(std::cin, cifra1);

        for (int i = 0; i < n; i++)
        {
            char maiuscula1 = cifra1[i];
            char minuscula1 = isalpha(cifra1[i]) ? tolower(cifra1[i]) : cifra1[i];
            char maiuscula2 = cifra2[i];
            char minuscula2 = isalpha(cifra2[i]) ? tolower(cifra2[i]) : cifra2[i];

            mapa[maiuscula1] = maiuscula2;
            mapa[minuscula1] = minuscula2;
            mapa[maiuscula2] = maiuscula1;
            mapa[minuscula2] = minuscula1;

        }

        for (int i = 0; i < m; i++)
        {
            getline(std::cin, frase);

            for (char& c : frase)
            {
                if (mapa.find(c) != mapa.end())
                {
                    std::cout << mapa[c];
                }
                else
                {
                    std::cout << c;
                }
            }
            std::cout << std::endl;
        }
        std::cout<<std::endl;
    }

    return 0;
}
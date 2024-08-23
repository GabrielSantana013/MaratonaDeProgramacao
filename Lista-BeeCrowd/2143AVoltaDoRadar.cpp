#include <iostream>

int main()
{

    int T, N;

    while (1)
    {
        std::cin >> T;
        if (T == 0)
        {
            break;
        }

        for (int i = 0; i < T; i++)
        {
            std::cin >> N;
            if (N % 2 == 0)
            {
                std::cout << (N - 2) * 2 + 2 << std::endl;
            }
            else
            {
                std::cout << (N - 1) * 2 + 1 << std::endl;
            }
        }
    }

    return 0;
}
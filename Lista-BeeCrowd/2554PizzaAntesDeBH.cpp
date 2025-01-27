#include <iostream>

int main()
{

    int N, D;

    while (std::cin >> N >> D)
    {
        bool data = false;
        for (int i = 0; i < D; i++)
        {
            int dia, mes, ano;
            std::cin >> dia;
            std::cin.ignore();
            std::cin >> mes;
            std::cin.ignore();
            std::cin >> ano;

            bool difZero = true;

            for (int j = 0; j < N; j++)
            {
                int num;
                std::cin >> num;
                if(num == 0)
                {
                    difZero = false;
                }
            }
            if(difZero && !data)
            {
                std::cout<<dia<<"/"<<mes<<"/"<<ano<<std::endl;
                data = true;
            }
        }
        if(!data)
        std::cout<<"Pizza antes de FdI"<<std::endl;
        
    }

    return 0;
}
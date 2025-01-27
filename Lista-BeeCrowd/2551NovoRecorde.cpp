#include <iostream>
#include <vector>

int main()
{

    int N;

    while (std::cin >> N)
    {
        int diaRecord = 0;
        double record = 0;
        double T, D;
        std::vector<int> recordDays;
        for (int i = 0; i < N; i++)
        {   
            
            std::cin >> T >> D;
            double media = D / T;

            if (media > record)
            {
                record = media;
                diaRecord = i + 1;
                recordDays.push_back(diaRecord);
            }
        }

        for (int day : recordDays)
        {
            std::cout << day << std::endl;
        }
    }

    return 0;
}
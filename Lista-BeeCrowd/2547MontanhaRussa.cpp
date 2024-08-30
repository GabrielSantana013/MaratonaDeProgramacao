#include <iostream>

int main()
{

    int n, x, min, max;

    while (std::cin >> n >> min >> max)
    {
        int y = 0;
        for (int i = 0; i < n; i++)
        {
            std::cin>> x;
            if(x >=min && x <=max)
            {
                y++;
            }
        }
        std::cout<<y<<std::endl;
    }   

    return 0;
}
#include <iostream>
#include <iomanip>
#include <vector>

int main(){

    int m;

    while(std::cin>>m)
    {
        std::vector<int> c(m), h(m);

        for(int i = 0; i < m; i++)
        {
            std::cin>>c[i]>>h[i];
        }

        int somaNotaPonderada = 0, somaHoraTotal = 0;

        for(int i = 0; i < m; i++)
        {
            somaNotaPonderada += c[i]*h[i];
            somaHoraTotal += h[i];
        }

        std::cout<<std::fixed<<std::setprecision(4)<<somaNotaPonderada/(somaHoraTotal*100.0)<<std::endl;
    }

    return 0;
}
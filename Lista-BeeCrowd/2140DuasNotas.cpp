
#include <iostream>

int main(){

    int N, M;
    std::cin>>N>>M;

    while(N != 0 && M != 0)
    {
        int troco = M - N;

        if(troco == 7 || troco == 12 || troco == 22 || troco == 52 || troco == 102 || troco == 15 || troco == 25 || troco == 55 || troco == 105 || troco == 30 || troco == 60 || troco == 110 || troco == 70 || troco == 120 || troco == 150)
        {
            std::cout<<"possible"<<std::endl;
        }
        else
        {
            std::cout<<"impossible"<<std::endl;
        }

        std::cin>>N>>M;
    }


    return 0;
}
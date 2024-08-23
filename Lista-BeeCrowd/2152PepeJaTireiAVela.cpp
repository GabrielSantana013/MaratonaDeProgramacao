#include <iostream>

int main(){

    int N;
    std::cin >> N;

    for(int i = 0; i < N; i++)
    {
        int H, M, O;
        std::cin >> H >> M >> O;

        if(H < 10)
        {
            std::cout<<"0";
        }

        if(O)
        {
            std::cout<<H<<":";
            if(M < 10)
            {
                std::cout<<"0";
            }
            std::cout<<M<<" - A porta abriu!"<<std::endl;
        }
        else
        {
            std::cout<<H<<":";
            if(M < 10)
            {
                std::cout<<"0";
            }
            std::cout<<M<<" - A porta fechou!"<<std::endl;
        }
    }

    return 0;
}
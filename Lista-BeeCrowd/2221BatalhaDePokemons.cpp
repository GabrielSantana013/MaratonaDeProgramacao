#include <iostream>

int main(){

    int N;
    std::cin>>N;
    int gabriel[4], duarte[4];
    for(int i = 0; i < N; i++)
    {
        int bonus; std::cin>>bonus;
        for(int j = 0; j < 3; j++)
            std::cin>>gabriel[j];

        for(int j = 0; j < 3; j++)
            std::cin>>duarte[j];

        int gabrielPower = (gabriel[0] + gabriel[1]) / 2;
        int duartePower = (duarte[0] + duarte[1]) / 2;

        if(gabriel[2] % 2 == 0)
            gabrielPower += bonus;
        
        if(duarte[2] % 2 == 0)
            duartePower += bonus;

        if(gabrielPower > duartePower)
            std::cout<<"Dabriel\n";
        else if(duartePower > gabrielPower)
            std::cout<<"Guarte\n";
        else
            std::cout<<"Empate\n";
    }

    return 0;
}
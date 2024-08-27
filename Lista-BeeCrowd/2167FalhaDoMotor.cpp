#include <iostream>

int main(){

    int n; std::cin>>n;
    int anterior, atual;

    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            std::cin>>atual;
            anterior = atual;
            continue;
        }

        std::cin>>atual;
        

        if(atual<anterior)
        {
            std::cout<<i+1<<std::endl;
            return 0;
        }
        anterior = atual;
    }

    std::cout<<0<<std::endl;

    return 0;
}


#include <iostream>

int main(){

    int a,b;
    char c;
    int minutos = 8*60;
    while(std::cin>>a>>c>>b)
    {
        int minutosBino = a*60+b+60;
        int atraso = minutosBino-minutos;
        if(atraso>0)
        {
            std::cout<<"Atraso maximo: "<<atraso<<std::endl;
        }
        else
        {
            std::cout<<"Atraso maximo: 0"<<std::endl;
        }
    }


    return 0;
}
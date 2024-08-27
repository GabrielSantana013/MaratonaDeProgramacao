#include <iostream>

void retangulo(int a, int b, int c){

    if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
    {
        std::cout<<"Retangulo: S"<<std::endl;
    }
    else
    {
        std::cout<<"Retangulo: N"<<std::endl;
    }

}


int main(){

    int a,b,c;
    std::cin>>a>>b>>c;

    if(a+b>c && b+c>a && c+a>b)
    {
        std::cout<<"Valido-";
        if(a == b || b == c || c == a)
        {
            if(a == b && b == c)
            {
                std::cout<<"Equilatero"<<std::endl;
            }
            else
            {
                std::cout<<"Isoceles"<<std::endl;
            }
        }
        
        else
        {
            std::cout<<"Escaleno"<<std::endl;
        }
        retangulo(a,b,c);
    }
    else
    {
        std::cout<<"Invalido"<<std::endl;
    }

    return 0;
}
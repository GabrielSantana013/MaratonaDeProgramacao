#include <iostream>
#include <iomanip>

int main(){

    int n; std::cin>>n;

    double raiz = 0.0;

    while(n--)
    {
        raiz +=2.0;
        raiz = 1/raiz;
    }

    raiz += 1.0;

    std::cout<<std::fixed<<std::setprecision(10);
    std::cout<<raiz<<std::endl;

    return 0;
}
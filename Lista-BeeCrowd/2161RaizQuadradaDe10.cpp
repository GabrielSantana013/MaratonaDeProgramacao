#include <iostream>
#include <iomanip>
int main(){

    int N;
    std::cin>>N;

    double raiz = 0.0;
    for(int i = 0; i < N; ++i)
    {
        raiz = 1.0 / (6.0 + raiz);

    }
    raiz +=3.0;
    std::cout<<std::fixed<<std::setprecision(10);
    std::cout<<raiz<<std::endl;
    return 0;
}
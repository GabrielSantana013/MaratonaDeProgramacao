#include <iostream>
#include <iomanip>
#include <math.h>

int main(){

    std::cout<<std::fixed<<std::setprecision(1);

    int n;
    std::cin>>n;

    double fibbonaci = (pow(((1+sqrt(5))/2),n)-pow(((1-sqrt(5))/2),n))/sqrt(5);
    std::cout<<fibbonaci<<std::endl;
    return 0;
}
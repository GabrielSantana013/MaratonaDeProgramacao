/*

*/

#include <iostream>
#include <iomanip>

int main(){

   //pi r²*h = v
   //h = v/pir²

    double V, D;
    while(std::cin>>V>>D)
    {
        double r = D/2.0;
        double h = V/((3.14)*(r*r));
        std::cout<<std::fixed<<std::setprecision(2)<<"ALTURA = "<<h<<std::endl;
        double area = 3.14*(r*r);
        std::cout<<"AREA = "<<area<<std::endl;
    }
    return 0;
}
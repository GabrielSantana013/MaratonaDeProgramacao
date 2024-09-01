#include <iostream>

int main(){

    std::string status;
    int turistas = 0, total = 0;

    while(std::cin >> status){
        if(status == "ABEND"){
            break;
        }
        int num;
        std::cin >> num;
        if(status == "SALIDA"){
            turistas += num;
            total ++;
        }else{
            turistas -= num;
            total --;
        }
        
    }
    
    std::cout<<turistas<<std::endl;
    std::cout<<total<<std::endl;

    return 0;
}
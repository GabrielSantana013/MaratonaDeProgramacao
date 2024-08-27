#include <iostream>

int main(){

    int n, esquina[101][101];

    std::cin >> n;
    for(int i = 0; i < n+1; i++){
        for(int j = 0; j < n+1; j++){
            std::cin >> esquina[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(esquina[i][j] + esquina[i+1][j] + esquina[i][j+1] + esquina[i+1][j+1] >= 2){
                std::cout << "S";
            }else{
                std::cout << "U";
            }
        }
        std::cout << std::endl;
    }


    return 0;
}
#include <iostream>

int main(){

    int n, id, input;
    bool cs = true;

    while(std::cin>>n)
    {
        int cont = 0;
        std::cin>>id;
        for(int i = 0; i < n; i++)
        {
            std::cin>>input>>cs;
            if(id == input && !cs)
            {
                cont++;
            }
        }
        std::cout<<cont<<std::endl;
    }


    return 0;
}
#include <iostream>

int main(){

    std::string s;
    std::cin>>s;
    int contaUm = 0;
    int size = s.size();

    for(int i = 0; i < size; i++)
    {
        if(s[i] == '1')
        {
            contaUm++;
        }
    }

    if(contaUm % 2 == 0)
    {
        std::cout<<s<<"0"<<std::endl;
    }
    else
    {
        std::cout<<s<<"1"<<std::endl;
    }

    return 0;
}
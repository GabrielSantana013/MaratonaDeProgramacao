/*

*/

#include <iostream>

int main(){

    int N;
    int contaCaso=1;
    while(std::cin>>N)
    {
    int numCasos=0;
    for(int i = 0; i <= N; i++)
    {
        if(i==0){numCasos++;}
        else{numCasos+=i;}
    }
    if(numCasos==1)
    {
        std::cout<<"Caso "<<contaCaso<<": "<<numCasos<<" numero"<<std::endl;
    }
    else
    {
        std::cout<<"Caso "<<contaCaso<<": "<<numCasos<<" numeros"<<std::endl;
    }
    
    for(int i = 0; i <= N;i++)
    {
        if(i==0){std::cout<<"0 ";}
        int contaNum=0;
        while(contaNum<i)
        {
            if(i+1>N && contaNum+1>i)
            {
                std::cout<<i;
            }
            else
            {
                std::cout<<i<<" ";
            }
            
            contaNum++;
        }
        
    }
    contaCaso++;
    std::cout<<std::endl;
    std::cout<<std::endl;
    }

    return 0;
}
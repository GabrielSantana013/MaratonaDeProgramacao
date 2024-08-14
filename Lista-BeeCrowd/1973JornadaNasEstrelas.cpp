/*

*/

#include <iostream>
#include <vector>

int main(){

    int N; std::cin>>N;
    int x, planetas = 0;
    //std::vector <int> estrelas;
    int estrelas[N];

    for(int i = 0; i<N; i++)
    {
        std::cin>>x;
        estrelas[i] = x;
    }

    int j = 0;
    while(1)
    {
        if(estrelas[j]%2==0)
        {
            estrelas[j] = (estrelas[j]-1);
            break;
        }
        else
        {
            estrelas[j] = (estrelas[j]-1);
            j++;
        }
        planetas++;
        //std::cout<<"To no "<<j-1<<std::endl;
        if(j<0 || j>=N){break;}
    }

    int total = 0;

    for(int i = 0; i < N; i++)
    {
        total+= estrelas[i];
    }

    std::cout<<planetas<<" "<<total<<std::endl;



    /*for(int i = 0; i<N && i>=0;)
    {
        std::cin>>x;
        if(x%2==0)
        {
            estrelas.insert(estrelas.begin() + i, (x-1));
            i--;
        }
        else
        {
            estrelas.insert(estrelas.begin() + i, (x-1));
            i++;
        }
        planetas++;
    }*/

    /*int total = 0;
    for(int i = 0; i< N; i++)
    {
        total += estrelas[N];
    }
    std::cout<<planetas<<" "<<total<<std::endl;*/

    return 0;
}
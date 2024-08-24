#include <iostream>

int main(){

    int N, M, sabres[1000][1000];
    std::cin>>N>>M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cin>>sabres[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(sabres[i][j] == 42)
            {
                if(i > 0 && i < N-1 && j > 0 && j < M-1)
                {
                    if(sabres[i-1][j] == 7 && sabres[i+1][j] == 7 && 
                       sabres[i][j-1] == 7 && sabres[i][j+1] == 7 &&
                       sabres[i-1][j-1] == 7 && sabres[i-1][j+1] == 7 &&
                       sabres[i+1][j-1] == 7 && sabres[i+1][j+1] == 7)
                    {
                        std::cout<<i+1<<" "<<j+1<<std::endl;
                        return 0;
                    }
                }
            } 
        }
    }
    std::cout<<"0 0"<<std::endl;
    return 0;
}

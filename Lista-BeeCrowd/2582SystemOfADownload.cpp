#include <iostream>

int main(){

    int c, x, y;

    std::cin>>c;

    for(int i = 0; i < c; i++)
    {
        std::cin>>x>>y;
        int sum = x+y;

        switch(sum)
        {
            case 0:
                std::cout<<"PROXYCITY\n";
                break;
            case 1:
                std::cout<<"P.Y.N.G.\n";
                break;
            case 2:
                std::cout<<"DNSUEY!\n";
                break;
            case 3:
                std::cout<<"SERVERS\n";
                break;
            case 4:
                std::cout<<"HOST!\n";
                break;
            case 5:
                std::cout<<"CRIPTONIZE\n";
                break;
            case 6:
                std::cout<<"OFFLINE DAY\n";
                break;
            case 7:
                std::cout<<"SALT\n";
                break;
            case 8:
                std::cout<<"ANSWER!\n";
                break;
            case 9:
                std::cout<<"RAR?\n";
                break;
            case 10:
                std::cout<<"WIFI ANTENNAS\n";
                break;
        }
    }

    return 0;
}
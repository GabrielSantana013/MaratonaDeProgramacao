#include <iostream>
#include <math.h>

int main()
{

    int x1, y1, x2, y2, v, r1, r2;

    while (std::cin >> x1 >> y1 >> x2 >> y2 >> v >> r1 >> r2)
    {
        double d = std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        double distancia = v * 1.5;

        if (d + distancia > r1 + r2)
            std::cout << "N"<<std::endl;
        else
            std::cout << "Y"<<std::endl;
    }

    return 0;
}
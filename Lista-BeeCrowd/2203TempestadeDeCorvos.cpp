#include <iostream>

int main()
{

    int x1, y1, x2, y2, v, r1, r2;

    std::cin >> x1 >> y1 >> x2 >> y2 >> v >> r1 >> r2;

    int d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    std::cout<<d;
    return 0;
}
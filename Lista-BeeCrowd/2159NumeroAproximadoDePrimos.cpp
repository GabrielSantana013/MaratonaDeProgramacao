#include <iostream>
#include <cmath>
#include <iomanip>
int main(){

    long long int N;
    std::cin >> N;

    double min = N / std::log(N);
    double max = 1.25506 * min;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << min << " " << max << std::endl;
    return 0;
}
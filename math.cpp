#include <iostream>
#include <cmath>

int main()
{
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y);
    std::cout << z << "\n";

    z = std::min(x, y);
    std::cout << z << "\n";

    z = pow(x, y);
    std::cout << z << "\n";

    z = sqrt(y);
    std::cout << z << "\n";

    z = abs(-x);
    std::cout << z << "\n";

    z = round(2.6);
    std::cout << z << "\n";

    z = floor(2.6);
    std::cout << z << "\n";

    z = ceil(2.6);
    std::cout << z << "\n";

    return 0;
}

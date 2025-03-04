#include <iostream>

int plus(int a, int b);
int max(int a, int b);
int min(int a, int b);
int sqrt(int a);
int minus(int a, int b);
void compiled();

int main(int argc, char const *argv[])
{
    compiled();

    int x = 1234, y = 123;

    std::cout << "sum: " << plus(x, y) << std::endl;
    std::cout << "sqrt: " << sqrt(x) << std::endl;

    std::cout << "max: " << max(x, y) << std::endl;
    std::cout << "min: " << min(x, y) << std::endl;

    std::cout << "minus: " << minus(x, y) << std::endl;

    

    return 0;
}
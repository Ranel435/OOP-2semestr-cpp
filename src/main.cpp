#include <iostream>

int sum(int a, int b);
int max(int a, int b);
int min(int a, int b);
int sqrt(int a);

int main(int argc, char const *argv[])
{
    std::cout << "I am compiled!" << std::endl;

    int x = 1234, y = 123;

    std::cout << "sum: " << sum(x, y) << std::endl;
    std::cout << "sqrt: " << sqrt(x) << std::endl;

    std::cout << "max: " << max(x, y) << std::endl;
    std::cout << "min: " << min(x, y) << std::endl;







    return 0;
}
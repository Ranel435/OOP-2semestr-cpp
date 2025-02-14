#include <iostream>

int plus(int a, int b) {
    return a + b;
}

int minus(int a, int b) {
    return a - b;
}

int sqrt(int a) {
    return a * a;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

void compiled() {
    std::cout << "I am compiled!" << std::endl;
}
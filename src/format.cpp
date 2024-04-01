#include <iostream>

int add(int a, int b) {
    if (a < 0) {
        return -1;
    }

    if (b < 0) {
        return -1;
    }

    return a + b;
}

int main() {
    auto a = 3;
    auto b = 4;
    auto c = -2;

    std::cout << add(a, b) << std::endl;
    std::cout << add(b, c) << std::endl;

    return 0;
}

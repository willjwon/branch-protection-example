#include <iostream>

int main() {
    std::cout << "Hello, world!" << std::endl;

    auto sum = 0;
    for (auto i = 1; i <= 15; i++) {
        sum += i;
    }
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}

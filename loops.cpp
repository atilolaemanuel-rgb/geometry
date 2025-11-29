#include <iostream>
#include <string>

int main() {
    std::cout << "For loop (1..5):\n";
    for (int i = 1; i <= 5; ++i) {
        std::cout << i << " ";
    }
    std::cout << "\n\n";

    std::cout << "While loop (sum 1..5):\n";
    int i = 1;
    int sum = 0;
    while (i <= 5) {
        sum += i;
        ++i;
    }
    std::cout << "sum = " << sum << "\n\n";


    return 0;
}


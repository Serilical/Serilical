#include <iostream>
#include <cmath>
bool is_even(int n);

int main() {
    int z;
    std::cout << "input a number\n";
    std::cin >> z;
    if (is_even(z)) {
        std::cout << "even";
    }
    else {
        std::cout << "odd";
    }
}

bool is_even(int n) {
    if ((n % 2) == 0) {
        return true;
    }
    else {
        return false;
    }
}
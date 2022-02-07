#include <iostream>
bool is_even(int n);
int evens_between(int n, int m);

int main() {
    int z,f;
    std::cout << "input two numbers\n";
    std::cin >> z >> f;
    if (z > f) {
        std::cout << "The number of even numbers in between " << f << " and " << z << " is equal to...\n" << evens_between(z,f) << std::endl;
    }
    else {
        std::cout << "The number of even numbers in between " << z << " and " << f << " is equal to...\n" << evens_between(z,f) << std::endl;
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

int evens_between(int n, int m) {
    int j;
    if (n > m) {
        for (;n > m;m++) {
            j += is_even(m);
        }
        return j;
    }
    else if (m > n) {
        for (;m > n;n++) {
            j += is_even(n);
        }
        return j;
    }
    else {
        return is_even(n);
    }
}
#include <iostream>
#include <cstdlib>
#include <ctime>
int die(int& n);

int main() {
    int z;
    std::cout << "input a number\n";
    std::cin >> z;
    std::cout << die(z);
}

int die(int& n) {
    srand(time(NULL));
    return n = (rand() % (n + 1));
}
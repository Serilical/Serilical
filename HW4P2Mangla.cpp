#include <iostream>
#include <cmath>
using namespace std;

int main() { 
    int n, i;
    std::cout << "Input an integer that is positive\n";
    std::cin >> n;
    int c = n;
    for(n; n > 2; n--) {
        double y = (c % (n-1));
        if (y == 0) {
            std::cout << "the number is divisible by " << (n - 1) << "!\n";
            std::cout << c << " is not prime!\n";
            break;
        }
        else {
            std::cout << "it is not divisible by " << (n - 1) << std::endl;
            continue;
        }
    }
}
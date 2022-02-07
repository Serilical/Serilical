#include <iostream>
bool isprime(int n);

int main() { 
    for (int i, n; i != -1;) {
        std::cout << "Input an integer that is positive\n";
        std::cin >> n;
        std::cout << isprime(n) << std::endl;
        std::cout << "Would you like to continue this function? \nInput any integer other than -1 if so.\nInput -1 if not.\n";
        std::cin >> i;
    }
}

bool isprime(int n) {
     int c = n;
     for(n; n > 2; n--) {
        double y = (c % (n-1));
        if (y == 0) {
            return true;
            break;
        }
        else {
            continue;
        }
    }
    return 0;
}

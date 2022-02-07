#include <iostream>
bool isprime(int n);

int main() { 
    int n, i;
    std::cout << "Input an integer that is positive\n";
    std::cin >> n;
    std::cout << isprime(n);
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
#include <iostream>
#include <cmath>
int largePow2(int n);
std::string decToBin(int n);

int main() {
    int inte;
    std::cout << "Input a value\n";
    std::cin >> inte;
    std::cout << "The exponent of the largest power of 2 that is smaller than " << inte << " is " << largePow2(inte) << std::endl;
    std::cout << "And " << inte << " in binary is...:\n" << decToBin(inte) << std::endl;
}

int largePow2(int n) {
    int i, j = 0;
    for (i=1; j < n; i++) {
        j = pow(2,i);
    }
    return (i-2);
}

std::string decToBin(int n) {
    std::string e;
    std::string b;
    std::string f = "1";
    int integer;
    int d;
    while (n/2 != 0) {
        d = (n%2);
        n /= 2;
        e = std::to_string(d);
        b += e;
        integer++;
    }
    for(integer; integer > 0; integer--) {
        f += b[integer - 1];
    }
    return f;
}


//Divide the initial number by 2
//Then, take the remainder and quotient of that
//Append the remainder to a string
//Make it so that the next iteration of the for loop uses the new value
//Continue until you get to 1/2
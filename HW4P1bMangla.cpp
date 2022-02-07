#include <iostream>
#include <cmath>
using namespace std;
int main() {
    for (long n, j = 0, z = 0, b = 1; n != -1;) {
        std::cout << "Input a quiz score\n";
        std::cin >> n;
        if (n >= 0 && n <= 30) {
            j += n;
            z++;
        }
        else if (n == -1) {
            std::cout << "The average of the quiz scores is equal to...\n" << (j / z) << "!\n";
        }
        else {
            for (b; b > 0;) {
            std::cout << "Input a proper value!!!!\n\n";
            --b;
            break;
            }
        }
        b = 1;
    }
 }
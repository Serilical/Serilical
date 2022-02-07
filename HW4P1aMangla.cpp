#include <iostream>
#include <cmath>
using namespace std;

int main() {
for (int n, j = 0, z = 0; n != -1;) {
    std::cout << "Input a quiz score\n";
    std::cin >> n;
    if (n >= 0) {
        j += n;
        z++;
    }
    else {
        std::cout << "The average of the quiz scores is equal to...\n" << (j / z) << "!\n";
    }
}
}
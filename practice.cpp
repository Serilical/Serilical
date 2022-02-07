#include <iostream>
using namespace std;
#include <cmath>
long factorial(long n) {
    long j = n;
    for (n; n > 2; n--)
    abs(j *= (n));
    return j;
}

int main() {
    long u;
    std::cin >> u;
    std::cout << factorial(u);
}

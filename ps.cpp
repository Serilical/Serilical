#include <iostream>
#include <cmath>
using namespace std;

double pyth(double a, double b) {
  return sqrt((pow(a, 2) + pow (b, 2)));
}
int absolute(int x) {
  return abs(x);
}
int main() {
  std::cout << pyth(5, 5);
  std::cout << std::endl;
  int x;
  std::cin >> x;
  std::cout << absolute(x);
  return 0;
 }

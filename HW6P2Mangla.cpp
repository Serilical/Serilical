#include <iostream>
#include <cmath>
void functions(double inte, double& sqrte, double& sqre, double& ce);

int main() {
    double sqrt, square, cube, inte;
    std::cout << "Input a value\n";
    std::cin >> inte;
    functions(inte, sqrt, square, cube);
    std::cout << "The square root of " << inte << " is " << sqrt << std::endl;
    std::cout << "The square of " << inte << " is " << square << std::endl;
    std::cout << "The cube of " << inte << " is " << cube << std::endl;
}

void functions(double inte, double& sqrte, double& sqre, double& ce) {
    sqrte = sqrt(inte);
    sqre = pow(inte, 2);
    ce = pow(inte, 3);
}
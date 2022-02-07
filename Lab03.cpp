#include <iostream>
#include <cmath>
using namespace std;

/*
int main() {
    double g = 9.81, x = 0, y, v, y_zero, theta;
    std::cout << "input the angle at which the projectile is launched\n";
    std::cin >> theta;
    std::cout << "now input the speed at which the projectile is launched in meters/seconds\n";
    std::cin >> v;
    std::cout << "lastly, input the initial height of the projectile in meters\n";
    std::cin >> y_zero;
    while (x < 10) {
        x++;
        int y = (y_zero + (x * (tan(theta))) - ((g * (pow(x,2))) / (pow((2 * (v * (cos(theta)))), 2))));
        for (bool c = (y >= 0); c;) {
            std::cout << "the y value for x = " << x << " is: " << y << std::endl;
            break;
        }
    }
    return 0;
}
*/

/*
int main() {
    double g = 9.81, v, y_zero, theta;
    std::cout << "input the angle at which the projectile is launched\n";
    std::cin >> theta;
    std::cout << "now input the speed at which the projectile is launched in meters/seconds\n";
    std::cin >> v;
    std::cout << "lastly, input the initial height of the projectile in meters\n";
    std::cin >> y_zero;
    std::cout << std::endl;
    for(int x = 0, y; x < 10; x++) {
        y = (y_zero + (x * (tan(theta))) - ((g * (pow(x,2))) / (pow((2 * (v * (cos(theta)))), 2))));
        for (bool c = (y >= 0); c;) {
            std::cout << "the y value for x = " << x << " is: " << y << std::endl;
            break;
        }
    }
}
*/

int main() { 
    int n, i;
    std::cout << "Input an integer that is positive\n";
    std::cin >> n;
    int c = n;
    for(n; n > 2; n--) {
        double y = (c % (n-1));
        if (y == 0) {
            std::cout << "the number is divisible by " << (n - 1) << "!\n";
            std::cout << "not prime\n";
            break;
        }
        else {
            std::cout << "it is not divisible by " << (n - 1) << std::endl;
            continue;
        }
    }
}
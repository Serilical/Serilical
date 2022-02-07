#include <iostream>
#include <cmath>
using namespace std;
//need to print out highest + lowest values
int main() {
for (double n, j = 0, z = 0, b = 1, c, d, e, q = 0; n != -1;z++) {
    std::cout << "Input a quiz score\n";
    std::cin >> n;
    if (n >= 0 && n <= 30) {
        if ((c > n) && q > 0) {
            e = n;
            //lower score
        }
        else if ((n > c) && q > 0) {
            d = n;
            //higher score
        }
        else if (q == 0) { 
            q = n;
            //was having issues with the first value not printing correctly later, so I decided to include an individual variable for it
        }
        c = n;
        //I tried including this in my for statement
        //acts as a way to check future inputs and assign them to the correct variable
        j += n;
    }
    else if (n == -1) {
        std::cout << "The average of the quiz scores is equal to...\n" << (j / z) << "!\n";
        if ((d > 0 && e > 0) && (q < d) && (q > e)) {
            //overly complicated way to make sure that the first value isn't relevant to this
            std::cout << "The highest score was: " << d << std::endl;
            std::cout << "The lowest score was: " << e << std::endl;
        }
        else if (z == 1) {
            //basically just a way to check if the user only inputted 1 value. Could do this in other ways, but this was the simplest.
            std::cout << "The highest score was: " << q << std::endl;
            std::cout << "The lowest score was: " << q << std::endl; 
        }
        else if (q > d) {
            //had issues with printing if the initial value was the highest, so made this
            std::cout << "The highest score was: " << q << std::endl;
            std::cout << "The lowest score was: " << e << std::endl;
        }
        else {
            //had issues with printing if the initial value was the lowest, so made this
            std::cout << "The highest score was: " << d << std::endl;
            std::cout << "The lowest score was: " << q << std::endl;
        }
    }
    else {
        for (b; b > 0;) {
            //simple way to clean up incorrect inputs
            std::cout << "Input a proper value!!!!\n\n";
            --b;
            z--;
            break;
        }
    }
    //have to reassign b to 1 to make sure that users are able to input more than 1 incorrect input correctly
    b = 1;
}
}
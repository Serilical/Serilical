//Part A
/*Part A Questions 1-3
The first for loop will return 10 rows of 5 x.
The second for loop will return 5 rows of 10 x
The third for loop will return 10 rows of x interspersed by incrementing positions of o
(for example, o is initially the first thing written to output, then becomes the second on the next loop, etc etc.)
*/

/*Part A Question 4
    #include <iostream>

    int main() {
        for (int i = 0; i < 15; i += 3) {
            int z = i;
            std::cout << " " << z;
            for(int j = 0; j < 2; j++) {
                int p = z/(1.5);
                std::cout << " " << p;
                std::cout << " " << p/2;
                break;
            }
        }   
    }

*/

//Part B
/*Part B Question 2

#include <iostream>
#include <cstdlib>
#include <ctime>
int die(int& n);

int main() {
    int z;
    std::cout << "input a number\n";
    std::cin >> z;
    std::cout << die(z);
}

int die(int& n) {
    srand(time(NULL));
    return n = (rand() % (n + 1));
}
*/
/*Part B Question 4
#include <iostream>
#include <cmath>
bool is_even(int n);

int main() {
    int z;
    std::cout << "input a number\n";
    std::cin >> z;
    if (is_even(z)) {
        std::cout << "even";
    }
    else {
        std::cout << "odd";
    }
}

bool is_even(int n) {
    if ((n % 2) == 0) {
        return true;
    }
    else {
        return false;
    }
}
*/
/*Part B Question 6
#include <iostream>
bool is_even(int n);
int evens_between(int n, int m);

int main() {
    int z,f;
    std::cout << "input two numbers\n";
    std::cin >> z >> f;
    if (z > f) {
        std::cout << "The number of even numbers in between " << f << " and " << z << " is equal to...\n" << evens_between(z,f) << std::endl;
    }
    else {
        std::cout << "The number of even numbers in between " << z << " and " << f << " is equal to...\n" << evens_between(z,f) << std::endl;
    }
}

bool is_even(int n) {
    if ((n % 2) == 0) {
        return true;
    }
    else {
        return false;
    }
}

int evens_between(int n, int m) {
    int j;
    if (n > m) {
        for (;n > m;m++) {
            j += is_even(m);
        }
        return j;
    }
    else if (m > n) {
        for (;m > n;n++) {
            j += is_even(n);
        }
        return j;
    }
    else {
        return is_even(n);
    }
}
*/

//Part C
/*Problem 1 WORK IN PROGRESS DO NOT SUBMIT*/

//Part D
//Parts 1 and 2 were completed in the last report
/*Part D Question 2-4
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
*/

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

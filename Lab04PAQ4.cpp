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

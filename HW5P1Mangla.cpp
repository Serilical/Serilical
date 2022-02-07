#include <iostream>
void for_loop(int x);
void forkloop(int z);

int main() {
    //I wrote the for loops as functions
    std::cout << "Part A.\n";
	int q = 5;
    for_loop(q);
    std::cout<< "\n\nPart B.\n";
    int z = 10;
    forkloop(z);
    return 0;
}


void for_loop(int x) {
    int i = 0;
    for (; i < x;i++) {
        int j = 0, z = 8;
        std::cout << "start ";
        for (; j <= i; j++) {
            std::cout << "o";
        }
        for (; z > j; z--) {
            std::cout << "x";
        }
        std::cout << " end ";
        std::cout << std::endl;
    }
}

void forkloop(int z) {
    for (; z <= 18;z+=2) {
        std::cout << "start ";
        for (int s = 5, j = s; s = j ; j--) {
            std::cout << z;
            std::cout << " " << j << ", ";
        }
        std::cout << " end";
        std::cout << std::endl;
    }
}
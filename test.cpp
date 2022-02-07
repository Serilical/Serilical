#include <iostream>
#include <cmath>
int sumarray(int x[], int y);
int coolfunc(int x[], int size);
/*
int main() {
  temp[10];
  for (int i; i<10; i++) {
    temp[i] = 2*;
  }
  for (int i = 0; i<10; i++) {
    std::cout << temp[i] << std::endl;
  }
  for (int i = 0; i < 10; i += 2) {
    std::cout << temp[i] << std::endl;
  }
}
*/
/*
int main() {
  const int Z = 5;
  int a[Z] = {1,2,32132,3,4};
  std::string names[Z] = {"Person1", "p2", "p3", "p4", "p5"};
  for (int i = 0; i < Z; i++) {
    std::cout << names[i] << " got " << a[i] << std::endl;
  }
}

int coolfunc(int x[], int size) {
  int max_value = x[0];
  for (int i = 0; i < size; i++) {
    if (max_value < x[i]) {
      max_value = x[i];
    }
    return max_value;
  }
  return 0;
}
*/


int main() {
  int scores[5] = {88,76,99,66,82};
  std::string names[5] = {"S", "B", "M", "Sa", "J"};
  std::cout << scores[0] << std::endl;
  double average = sumarray(scores,5)/5.0;
  std::cout << sumarray(scores,5) << std::endl;
  std::cout << "average = " << average << std::endl;
  for (int i=0; i < 5; i++) {
    std::cout << scores[i] << std::endl;
  }
}

int sumarray(int x[], int y) {
  int total = 0;
  for(int i; i < y; i++) {
    total += x[i];
  }
  return total;
}

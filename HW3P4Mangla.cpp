#include <iostream>
using namespace std;

int main() {
  double height;
  int plant = 0;
  char potted;
  std::cout << "What is the height of your plant in inches?\n";
  std::cin >> height;
  if ((height > 0) && (height <= 12)) {
    std::cout << "Would you like it potted(y/n)?\n";
    std::cin >> potted;
    if (((height < 4) && (potted == 'y') || (((height > 6) && (height <= 8)) && (potted == 'n')))) {
      std::cout << "Your plant is " << ((plant += 7)) << " dollars!\n";
    }
    else if ((height < 4) && (potted == 'n')) {
        std::cout << "Your plant is " << ((plant += 5)) << " dollars!\n";
    }
    else if (((height > 4) && (height <= 6)) && (potted == 'n')) {
      std::cout << "Your plant is " << ((plant += 6)) << " dollars!\n";
    }
    else if (((height > 4) && (height <= 6)) && (potted == 'y') || ((height > 8) && (height <= 10)) && (potted == 'n')) {
        std::cout << "Your plant is " << ((plant += 9)) << " dollars!\n";
    }
    else if (((height > 6) && (height <= 8)) && (potted == 'y')) {
      std::cout << "Your plant is " << ((plant += 11)) << " dollars!\n";
    }
    else if (((height > 10) && (height <= 12)) && (potted == 'n')) {
      std::cout << "Your plant is " << ((plant += 10)) << " dollars!\n";
    }
    else if (((height > 8) && (height <= 10)) && (potted == 'y')) {
      std::cout << "Your plant is " << ((plant += 13)) << " dollars!\n";
    }
    else if (((height > 10) && (height <= 12)) && (potted == 'y')) {
      std::cout << "Your plant is " << ((plant += 15)) << " dollars!\n";
}
}
  else {
    std::cout << "Please input a number greater than 0 and less than 12\n";
  }
}

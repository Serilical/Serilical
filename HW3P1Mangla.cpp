#include <iostream>
using namespace std;

int main() {
  char day;
  std::cout << "Enter a day of the week that school is in session\n";
  std:cin >> day;
  switch (day) {
    case 'M':
      std::cout << "Math 12 at 11:45 \nC&I at 2:15 \nCS10 at 4:45\n";
      break;
    case 'T':
      std::cout << "Physics at 12:10 \nCSCI 10 lab at 2:00 \n";
      break;
    case 'W':
      std::cout << "Math 12 at 11:45 \nC&I at 2:15 \nCS10 at 4:45 \n";
      break;
    case 'R':
      std::cout << "Physics at 12:10\n";
      break;
    case 'F':
      std::cout << "Math 12 at 11:45 \nC&I at 2:15 \nCS10 at 4:45 \n";
      break;
  }
  return 0;
}

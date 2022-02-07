#include <iostream>
using namespace std;

int main() {
  string name;
  int age, height;
  std::cout << "Enter your cousin's first name\n";
  std::cin >> name;
  if (name == "Katie" || name == "katie") {
     std::cout << "Take " << name << " to the Winchester Mystery House\n";
   }
  else {
    std::cout << "Enter your cousin's age and height(in feet)\n";
    std::cin >> age >> height;
    if ((height >= 5) && (age >= 12))
      std::cout << "Take " << name << " to Great America\n";
    else if ((height >= 5) && (age < 12))
      std::cout << "Take " << name << " to the carnival\n";
    else if ((height < 5) && (age >= 12))
      std::cout << "Take " << name << " to the mall\n";
    else
      std::cout << "Take " << name << " to Chuck E. Cheese\n";
    }
   }

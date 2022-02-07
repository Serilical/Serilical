/*
#include <iostream>
using namespace std;

int main() {
  char grade;
  std::cout<<"Enter a grade: "<< std::endl;
  cin>>grade;
  switch (grade) {
    case 'A':
      std::cout << "Amazing job!\n";
      break;
    case 'B':
      std::cout << "Great work!\n";
      break;
    case 'C':
      std::cout << "You pass, good job.\n";
      break;
    case 'D':
      std::cout << "You pass, but barely.\n";
      break;
    case 'F':
      std::cout << "You need to improve!!\n";
      break;
    default:
      std::cout << "That is not a valid grade\n";
  return 0;
  }
}
*/

/*
#include <iostream>
using namespace std;

int main() {
string parent1;
string parent2;

std::cout<< "Enter genotypes of both parents with format parent 1 parent 2 \n";
std::cin >> parent1 >> parent2;

if ((parent1 == "GG" && parent2 == "gg") || (parent1 == "gg" && parent2 == "GG")){
	std::cout<<"100% Gg";
}
else if ((parent1 == "GG" && parent2 == "Gg") || (parent1 == "Gg" && parent2 == "GG")) {
	std::cout<<"50% GG, 50% Gg";
}
else if (parent1 == "GG" && parent2 == "GG") {
	std::cout<<"100% GG";
}
else if (parent1 == "gg" && parent2 == "gg") {
	std::cout<<"100% gg";
}
else if ((parent1 == "gg" && parent2 == "Gg") || (parent1 == "Gg" && parent2 == "gg")) {
	std::cout<<"50% Gg, 50% gg";
}
else if (parent1 == "Gg" && parent2 == "Gg") {
	std::cout<<"25% GG, 50% Gg, 25% gg";
}
else {
	std::cout<< "Invalid input";
}
}
*/
#include <iostream>
using namespace std;

int main() {
string parent1;
string parent2;
int a = 500;
int b = 1;
while (a > 499) {
  std::cout<< "Enter genotypes of both parents with format parent 1 parent 2 \n";
  std::cin >> parent1 >> parent2;
  if ((parent1 == "GG" && parent2 == "gg") || (parent1 == "gg" && parent2 == "GG")){
    std::cout<<"100% Gg";
    --a;
  }
  else if ((parent1 == "GG" && parent2 == "Gg") || (parent1 == "Gg" && parent2 == "GG")) {
    std::cout<<"50% GG, 50% Gg";
    --a;
  }
  else if (parent1 == "GG" && parent2 == "GG") {
    std::cout<<"100% GG";
    --a;
  }
  else if (parent1 == "gg" && parent2 == "gg") {
    std::cout<<"100% gg";
    --a;
  }
  else if ((parent1 == "gg" && parent2 == "Gg") || (parent1 == "Gg" && parent2 == "gg")) {
    std::cout<<"50% Gg, 50% gg";
    --a;
  }
  else if (parent1 == "Gg" && parent2 == "Gg") {
    std::cout<<"25% GG, 50% Gg, 25% gg";
    --a;
  }
  else {
    while(b > (0)) {
    std::cout<< "Invalid input\n";
    --b;
    break;
  }
}
  b = 1;
}
}

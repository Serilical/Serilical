#include <iostream>
#include <cmath>
using namespace std;

/*
int main() {
	int pizza_hut = 5;
	int x = pizza_hut;
	cout << "the value is " << x << endl;
}
*/

/*
int main() {
std::string str = "abc";
std::string pizza = str += "212321321";
std::cout << pizza;
}
*/

/*
int main() {
int num = 15;
double cost = 1239219032109.2321;
cout << num << endl << endl << cost;
}
*/

/*
Assume that the int variables i, j and n have been declared, and n has been initialized.
Write code that causes a "triangle" of asterisks to be output to the screen, i.e., n lines should be printed out,
 the first consisting of a single asterisk, the second consisting of two asterisks, the third consisting of three, etc.
 The last line should consist of n asterisks. Thus, for example, if n has value 3, the output of your code should be
*
**
***
*/

//failed attempt at printing pyramid of asterisks
/*
int main() {
	int n = 5;
	   for (int i = 0; i < n; i++) {
			 for (int j = 0; j <= i; j++) {
				 std::cout << "*\n";
			 }
		  }
		}
*/

//prints an upwards pyramid of asterisks, copied.
/*
void ABC(int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "*\n";
	}
}

int main() {
	int n = 5;
	ABC(n);
	return 0;
}
*/

//prints an upwards pyramid of asterisks, copied.
/*
void pypart(int n) {
	int i = 0, j = 0;
	while (i < n) {
		while(j <= i) {
			std::cout << "* ";
			j++;
		}
		j = 0;
		i++;
		std::cout << std::endl;
	}
}

int main() {
	int n = 5;
	pypart(n);
	return 0;
}
*/

//prints an upwards pyramid of asterisks
/*
int main() {
	int j, i;
	int n = 5;
	for (i = 0, j = 0; (i < n); i++) {
		while (j <= i) {
			std::cout << "*";
			j++;
		}
		j = 0;
		std::cout << std::endl;
	}
}
*/

//prints a downwards pyramid of asterisks
/*
int main() {
	int n = 9;
	for (int i = n; i > 0; i--) {
		int j = i;
		while (j > 0) {
			std::cout << " * ";
			j--;
		}
		std::cout << std::endl;
	}
}
*/

//prints aa ab ac ad ae ba...
/*
int main() {
	for (char a = 'a'; a <= 'e'; a++) {
		for (char b = 'a'; b <= 'e'; b++) {
			std::cout << a << b << std::endl;
			}
		}
		return 0;
	}
*/

//practice for c++ test 1
/*
int main() 
{ 
    double value = 5; 
    int i;
	//added semicolon
    if(i==5){ 
        cout << "Hello world! "; 
		//fixed the direction of the arrows
    } 
    else {
		//could do it in two ways, either by making an else if != 5 or just an else statement. an else statent would be better though.
        value = i+1;
		//flipped the equation and made the "v" in value lowercase
    return 0; 
}     
*/

//practice equation for c++ test 1
/*
int main() {
	string flavor, special;
	std::cout << "What flavor of pie would you like(Banana, Chocolate, or Apple)?\n";
	std::cin >> flavor;
	if (flavor == "Chocolate" || flavor == "chocolate") {
		std::cout << "Would you like the special(y/n)?\n";
		std::cin >> special;
		if (special == "y") {
			std::cout << "Your Chocolate Dairy-Free Pie will cost 20 dollars\n";
		}
		else {
			std::cout << "Your Chocolate Pie will cost 16 dollars\n";
		}
	}
	else if (flavor == "Banana" || flavor == "banana") {
		std::cout << "Would you like the special(y/n)?\n";
		std::cin >> special;
		if (special == "y") {
			std::cout << "Your Banana w/ Whipped Cream Pie will be 18 dollars\n";
		}
		else {
			std::cout << "Your Banana Pie will cost 15 dollars\n";
		}
	}
	else if (flavor == "Apple" || flavor == "apple") {
		std::cout << "Would you like the special(y/n)?\n";
		std::cin >> special;
		if (special == "y") {
			std::cout << "Your Apple Gluten-Free Pie is 15 dollars\n";
		}
		else {
			std::cout << "Your Apple Pie is 13 dollars\n";
		}
	}
	else {
		std::cout << "Try inputting a correct value\n";
	}
	return 0;
}
*/


#include <iostream>
#include <ctime>
int longterm(std::string a[], std::string b[]);
int firsttrain(std::string a[], std::string b[]);

int main() {
	std::string spanish[10] = { "hola", "familia", "perro", "gato", "adios" };
	std::string english[10] = { "hello", "family", "dog", "cat", "goodbye" };
	int counter = 0;
	//Long-term Test:
	//std::cout << longterm(spanish, english);
	//First Training:
	std::cout << firsttrain(spanish, english);


}

int longterm(std::string a[], std::string b[]) {
	int counter;
	for (int n = 0; n < 2; n++) {
		for (int i = 0; i < 5; i++) {
			std::string englishword;
			std::cout << "Enter the English translation of: " << a[i] << "!\n";
			std::cin >> englishword;
			if (englishword == b[i]) {
				counter++;
			}
			else {
				std::cout << "The correct answer is:" << b[i] << "!" << std::endl;
			}
		}
	}
	return counter;
}

int firsttrain(std::string a[], std::string b[]) {
	int counter;
	int correct[5] = { 0,0,0,0,0 };
	while (counter != 10) {
		srand(time(NULL));
		int d = (rand() % 5);
		if (correct[d] != 2) {
			std::string englishword;
			std::cout << "Enter the English translation of: " << a[d] << "!\n";
			std::cin >> englishword;
			if (englishword == b[d]) {
				counter++;
				correct[d] += 1;
			}
			else {
				std::cout << "The correct answer is:" << b[d] << "!" << std::endl;
			}
		}
	}
	return counter;
}


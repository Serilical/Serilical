#include <iostream>
bool isPrime(int n);
int nearestPrime(int n);

int main() {
	for (int i, n; i != -1;) {
		std::cout << "Input an integer that is positive\n";
		std::cin >> n;
		std::cout << "Your number is...(1 = non-prime, 0 = prime)\n";
		std::cout << isPrime(n) << std::endl;
		std::cout << "The closest prime number to " << n << " is " << nearestPrime(n) << std::endl;
		std::cout << "Would you like to continue this function? \nInput any integer other than -1 if so.\nInput -1 if not.\n";
		std::cin >> i;
	}
}

bool isPrime(int n) {
	int c = n;
	for (n; n > 2; n--) {
		double y = (c % (n - 1));
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

int nearestPrime(int n) {
	int c = n;
	int d = n;
	for (c = n; isPrime(c); c++) {
	}
	for (d = n; isPrime(d); d--) {
	}
	if (n - d < c - n) {
		return d;
	}
	else {
		return c;
	}
}

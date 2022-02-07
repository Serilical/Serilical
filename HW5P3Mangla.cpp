#include <iostream>

std::string genotype1(char a, char b, char c, char d);
double probability_genotype(char m1, char m2, char p1, char p2, std::string d, double z[]);

int main() {
	for (int a = 1; a != -1;) {
		char m1, m2, p1, p2;
		std::string s;
		double percentage[3];
		//z[0] = GG, z[1] = Gg, z[2] = gg
		std::cout << "Input the genotypes for parent 1\n";
		std::cin >> m1 >> m2;
		std::cout << "Input the genotypes for parent 2\n";
		std::cin >> p1 >> p2;
		std::cout << "Input the genotype you expect\n";
		std::cin >> s;
		std::cout << "The most likely genotype is:\n";
		std::cout << genotype1(m1, m2, p1, p2);
		std::cout << std::endl;
		std::cout << "the % of " << s << " is " << probability_genotype(m1, m2, p1, p2, s, percentage) << " % " << std::endl;
		std::cout << "Would you like to continue this function? Input -1 if not\n";
		std::cin >> a;
	}
}

std::string genotype1(char a, char b, char c, char d) {
	if ((a == 'G' && b == 'G' && c == 'g' && d == 'g') || (a == 'g' && b == 'g' && c == 'G' && d == 'G')) {
		return "Gg\n";
	}
	else if ((a == 'G' && b == 'G' && c == 'G' && d == 'g') || (a == 'G' && b == 'g' && c == 'G' && d == 'G')) {
		return "GG or Gg\n";
	}
	else if (a == 'G' && b == 'G' && c == 'G' && d == 'G') {
		return "GG\n";
	}
	else if (a == 'g' && b == 'g' && c == 'g' && d == 'g') {
		return "gg\n";
	}
	else if ((a == 'g' && b == 'g' && c == 'G' && d == 'g') || (a == 'G' && b == 'g' && c == 'g' && d == 'g')) {
		return "gg or Gg\n";
	}
	else if (a == 'G' && b == 'g' && c == 'G' && d == 'g') {
		return "Gg\n";
	}
	else {
		return "invalid input!\n";
	}
}

double probability_genotype(char m1, char m2, char p1, char p2, std::string d, double z[]) {
	if ((m1 == 'G' && m2 == 'G' && p1 == 'g' && p2 == 'g') || (m1 == 'g' && m2 == 'g' && p1 == 'G' && p2 == 'G')) {
		z[0] = 0;
		z[1] = 100;
		z[2] = 0;
		if (d == "GG") {
			return z[0];
		}
		else if (d == "Gg") {
			return z[1];
		}
		else if (d == "gg") {
			return z[2];
		}
		else {
			return -1;
		}
	}
	else if ((m1 == 'G' && m2 == 'G' && p1 == 'G' && p2 == 'g') || (m1 == 'G' && 2 == 'g' && p1 == 'G' && p2 == 'G')) {
		z[0] = 50;
		z[1] = 50;
		z[2] = 0;
		if (d == "GG") {
			return z[0];
		}
		else if (d == "Gg") {
			return z[1];
		}
		else if (d == "gg") {
			return z[2];
		}
		else {
			return -1;
		}
	}
	else if (m1 == 'G' && m2 == 'G' && p1 == 'G' && p2 == 'G') {
		z[0] = 100;
		z[1] = 0;
		z[2] = 0;
		if (d == "GG") {
			return z[0];
		}
		else if (d == "Gg") {
			return z[1];
		}
		else if (d == "gg") {
			return z[2];
		}
		else {
			return -1;
		}
	}
	else if (m1 == 'g' && m2 == 'g' && p1 == 'g' && p2 == 'g') {
		z[0] = 0;
		z[1] = 0;
		z[2] = 100;
		if (d == "GG") {
			return z[0];
		}
		else if (d == "Gg") {
			return z[1];
		}
		else if (d == "gg") {
			return z[2];
		}
		else {
			return -1;
		}
	}
	else if ((m1 == 'g' && m2 == 'g' && p1 == 'G' && p2 == 'g') || (m1 == 'G' && m2 == 'g' && p1 == 'g' && p2 == 'g')) {
		z[0] = 0;
		z[1] = 50;
		z[2] = 50;
		if (d == "GG") {
			return z[0];
		}
		else if (d == "Gg") {
			return z[1];
		}
		else if (d == "gg") {
			return z[2];
		}
		else {
			return -1;
		}
	}
	else if (m1 == 'G' && m2 == 'g' && p1 == 'G' && p2 == 'g') {
		z[0] = 25;
		z[1] = 50;
		z[2] = 25;
		if (d == "GG") {
			return z[0];
		}
		else if (d == "Gg") {
			return z[1];
		}
		else if (d == "gg") {
			return z[2];
		}
		else {
			return -1;
		}
	}
	else {
		z[0] = -1;
		z[1] = -1;
		z[2] = -1;
		if (d == "GG") {
			return z[0];
		}
		else if (d == "Gg") {
			return z[1];
		}
		else if (d == "gg") {
			return z[2];
		}
		else {
			return -1;
		}
	}
	return 0;
}
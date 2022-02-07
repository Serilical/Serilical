//class problem
/*
#include <iostream>
int bar(int a, int b);
int foo(int q);
int main() {
    int a = 5, b = 7;
    int c = bar(b,a);
    std::cout << "in main c is: " << c << std::endl;
    std::cout << "in main a is: " << a << "\nb is: " << b << "\nr is: " << c << "\nresult of function: \n" << bar(4,a) << std::endl;
}

int bar(int a, int b) {
    int r = a + b;
    a = 100;
    b = 1;
    std::cout << "in bar a is: " << a << "\nb is: " << b << "\nr is: " << r << std::endl;
    return r + foo(b);
}
int foo(int q) {
    return q+1;
}
*/
//problem #1
/*
#include <iostream>
void taketimes(int& A, int& B);
void time_conversion(int& S, char& F);
void time_output(int S, int D, char F);


int main() {
    for (int x; x != -1;) { 
        int Time1, Time2;
        char XM;
        taketimes(Time1, Time2);
        time_conversion(Time1, XM);
        time_output(Time1, Time2, XM);
        std::cout << "Do you wish to end this loop? Input -1 if so.\n";
        std::cin >> x;
    }
}


void taketimes(int& A, int& B) {
    std::cout << "Input a time.\n";
    std::cout << "First, input the hour hand.\n";
    std::cin >> A;
    std::cout << "Next, input the minutes hand.\n";
    std::cin >> B;
    std::cout << "Thank you!\n";
}

void time_conversion(int& S, char& F) {
    if (S >= 12) {
        S -= 12;
        F = 'P';
    }
    else {
        F = 'A';
    }
}

void time_output(int S, int D, char F) {
    std::cout << "Your value in AM/PM is...\n";
    std::cout << S << ":" << D << " " << F << "M" << std::endl;
}
*/
//problem #2
/*
#include <iostream>
#include <cmath>
void arbtri(double a, double b, double c,double& d, double& e );

int main() {
    for (int x; x == 0;) {
        double side1, side2, side3;
        std::cout << "Input the three sides of the triangle\n";
        std::cin >> side1 >> side2 >> side3;
        if (((side1 + side2) > side3) && ((side3 + side2) > side1) && ((side3 + side1) > side2)) {
            double area, perimeter;
            arbtri(side1,side2,side3, area, perimeter);
            std::cout << "The area of the triangle is: " << area << "\nThe perimeter of the triangle is: " << perimeter << std::endl;
            x--;
        }
        else {
            std::cout << "input proper values.\n";
        }
    }
}

void arbtri(double a, double b, double c,double& d, double& e) {
    double s = ((a + b + c) / 2);
    d = (sqrt(s * ((s-a) * (s-b) * (s-c))));
    e = (a + b + c);
}
*/
//problem #3
#include <iostream>
void take_inputs(int&a);
void computeCoin(int coinValue, int& number, int& amountLeft);
//Precondition: 0 < coinValue < 100; 0 <= amountLeft < 100.
//Postcondition: number has been set equal to the maximum number
//of coins of denomination coinValue cents that can be obtained
//from amountLeft cents. amountLeft has been decreased by the
//value of the coins, that is, decreased by number*coinValue.
void any_more();

int main() {
    for(int d; d != -1;) {
        int a, b, c;
        take_inputs(a);
        computeCoin;
        any_more;
    }
}   

void take_inputs(int& a) {
    std::cout << "please input some number of coins\n";
    std::cin >> a;
    if (a > 0 && a < 100) {
        computeCoin;
    }
    else {
        if (a >= 0) {
            "No change is required!\n";
        }
        else {
            "Invalid values.\n";
        }
        any_more;
    }
}

void computeCoin(int coinValue, int& number, int& amountLeft) {
}
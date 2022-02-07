#include <iostream>
//#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    /*b = 2;
    this b = 2 is not necessary, as b is assigned a value later in the code. I'll leave it as a comment since it isn't exactly wrong.
    */
    cout<<"Enter length of hypotenuse"<<endl;
    cin>>c;
    //endl not needed for cin
    cout<<"Enter length of a side"<<endl;
    //cout had >> instead of <<, implying that cout would take input
    cin>>a;
    b = ((c * c) - (a * a));
    //parentheses for formatting
    //If I used cmath, I could achieve the same result by doing b = ((pow(c,2) - (pow(a,2)));
    //I'm not sure if cmath is allowed, so I'll put the equation in the normal c++ form.
    cout<<"Length of other side is the square root of: " << b << endl;
    //added << before b
    //endl instead of endline
    return 0;
}

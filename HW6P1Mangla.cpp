#include <iostream>
using namespace std;
void fun1(int &p1, int &p2, int p3);
void fun2(int p1, int& p2);

int main()
{
    int a = 7, b = 3, p = 9;
    cout<<"Out1:  a = "<<a<<", b = "<<b<<", p = "<<p<<endl;
    fun2(p, a);
    cout<<"Out1:  a = "<<a<<", b = "<<b<<", p = "<<p<<endl;
    if(true)
    {
        int p = 5;
        fun2(a, p);
        cout<<"Out1:  a = "<<a<<", b = "<<b<<", p = "<<p<<endl;
    }
    cout<<"Out1:  a = "<<a<<", b = "<<b<<", p = "<<p<<endl;
    fun1(p, b, p);
    cout<<"Out1:  a = "<<a<<", b = "<<b<<", p = "<<p<<endl;
    return 0;
}

void fun1(int &p1, int &p2, int p3)
{
    int temp = p3;
    p3 = p2;
    p2 = p1;
    p1 = temp;
}


void fun2(int p1, int& p2)
{
    int q = 13;
    p1 = p2;
    p2 = q+p1;
}
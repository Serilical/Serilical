#include <iostream>
#include <cmath>
void avg_into_max(double &avg,double& max);

int main() {
    double avg, max;
    avg_into_max(avg, max);
    std::cout << "The average of the data set is " << avg << "!\n";
    std::cout << "The max value of the data set is " << max << "!\n";
}






void avg_into_max(double &avg,double& max) {
    double total = 0, count = 0, j = 0, d = 0, c = 0;
    int a[100];
    max = -1000000;
    std::cout << "Enter the amount of numbers you would like to test\n";
    std::cin >> count;
    std::cout << std::endl;
    for (int i = 0; i < count; i++) {
        std::cin >> a[i]; 
        d += a[i];
        avg = (d/(i+1));
        if (a[i] > max) {
            max = a[i];
        }
    }
}

/*
double average(){ 
    double val = 0, total = 0, count = 0; 
    cout<<"Please enter a value, or -1 when you're done."<<endl; 
    cin>>val; 
    while(val!=-1){ 
        total+=val; 
        count++; 
        cout<<"Please enter a value, or -1 when you're done."<<endl; 
        cin>>val; 
    } 
    return total/count; 
} 
double max(){ 
    double val = 0, max = -1; 
    cout<<"Please enter a value, or -1 when you're done."<<endl; 
    cin>>val; 
    while(val!=-1){ 
        if(val>max) 
            max = val; 
        cout<<"Please enter a value, or -1 when you're done."<<endl; 
        cin>>val; 
    } 
    return max; 
} 
*/
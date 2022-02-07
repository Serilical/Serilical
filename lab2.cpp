#include <iostream>
using namespace std;

int main()
{
  double far, cost;
  cout<< "How far is it in miles?" <<endl;
  cin>>far;
  //Must be less than 50 miles away
  //use || instead of && if "or statement, and ! if "not"
  //only ask second question if we need to know it
  if(far<50)
  {
    cout<<"How much does it cost in USD?"<<endl;
    //Must cost less than $100
    cin>>cost;
    if(cost<100) {
      cout<<"Go to the concert"<<endl;
    }
    else {
    cout<<"Stay home"<<endl;
    }
  }
  else
  {
    cout<<"Stay home"<<endl;
  }
}

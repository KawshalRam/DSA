#include <iostream>
using namespace std;

int OddEven()
{
    int a;
    cin>>a;
    if (a%2==0)
    cout<<"Even"<<endl;
    else if(a==0)
    cout<<"Zero"<<endl;
    else
    cout<<"Odd"<<endl;
}

int main()
{
    OddEven();
    OddEven();
}
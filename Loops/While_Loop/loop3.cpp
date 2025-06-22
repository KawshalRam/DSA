#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin>> n;
    int i=2;
    while(i<=n)
    {
        sum+=i;
        i=i+2;
    }
    cout<<"the value of sum is "<< sum <<" "<<endl; //endl helps to print in different lines
    return 0;
}
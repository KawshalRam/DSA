#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin>> n;
    int i=1;
    while(i<=n)
    {
        sum+=i;
        i=i+1;
    }
    cout<<sum<<" "<<endl; //endl helps to print in different lines
    return 0;
}
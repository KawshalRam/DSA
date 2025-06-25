#include <iostream>
using namespace std;
int main()
{
    int n, i=1,sum=0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"the sum of n values is"<<sum<<endl;
}
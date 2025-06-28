#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,ans=0,i=0,digit=0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    while(n!=0)
    {
        digit=n%10;
        ans=(ans*10 )+ digit;
        n=n/10;
        i++;
    }
    cout<<ans<<endl;

}
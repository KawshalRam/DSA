#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int nCr()
{
    int n,r;
    cin>>r>>n;
    int numerator=factorial(n);
    int denom=factorial(n-r)*factorial(r);
    int ans= numerator/denom;
    cout<<ans<<endl;
}
int main()
{ 
    nCr();
}
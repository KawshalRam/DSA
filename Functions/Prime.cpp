#include <iostream>
using namespace std;

int Prime(int n)
{
    int c=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==0)
    cout<< "PRIME";
    else
    cout<< "Not Prime";
return 0;
}
 int main()
 {
    int n;
    cin>>n;
    Prime(n);
    return 0;
 }
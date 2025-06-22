#include <iostream>
using namespace std;

int main()
{
    int n,sum=0,c=0;
    cin>> n;
    int i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            c++;
        }
        i=i+1;
    }
    if(c==2)
    {
         cout<<"the number is prime "<<endl; //endl helps to print in different lines
    }
    else
    {
        cout<<"the number is not prime "<<endl; //endl helps to print in different lines
    }
    return 0;
}
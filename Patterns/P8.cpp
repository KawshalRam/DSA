#include <iostream>
using namespace std;

int main()
{
    int n,i=1,c=0;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            c++;
            cout<<c<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
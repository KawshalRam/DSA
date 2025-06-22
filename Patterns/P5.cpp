#include <iostream>
using namespace std;

int main()
{
    int n,i=1,c=0;
    cin>>n;
    while (i<=n)
    {
        int j=1;
        while(j<=n)
        {
            j++;
            c++;
            cout<<" "<<c;
        }
        cout<<endl;
        i++;
    }
}
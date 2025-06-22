#include <iostream>
using namespace std;
int main()
{
    int n,i=1,c=0;
    cin>>n;
    while(i<=n)
    {
        int j=i;
        while(j>=1)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}
#include <iostream>
using namespace std;
int main()
{
    int n,i=1;
    char ch= 65;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<ch<<" ";
            j++;
        }
        ch++;
        cout<<endl;
        i++;
    }
}
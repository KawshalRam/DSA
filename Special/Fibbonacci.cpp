#include <iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter the no of values you want in fibbonacci series"<<endl;
    cin>>n;
    int s=0,c=1;
    cout<<s<<endl<<c<<endl;
    for(i=1;i<=n;i++)
    {
        int NextNumber=s+c;
        cout<<NextNumber<<endl;
        s=c; 
        c=NextNumber;
    }
}
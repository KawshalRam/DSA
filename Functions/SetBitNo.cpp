#include <iostream>
using namespace std;
int SetBitCount(int n)
{
    int c=0,bit=0;
    while(n!=0)
    {
        bit=n&1;
        if(bit==1)
        c++;
        n=n>>1;
    }
    return c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int d=SetBitCount(a);
    int e=SetBitCount(b);
    int Setbits=d+e;
    cout<<Setbits<<endl;
}
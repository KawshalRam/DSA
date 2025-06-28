#include <iostream>
using namespace std;
int powerofAandB(int a,int b){
    int ans=1;
    for (int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    cout<<"answer is "<<ans<<endl;
    return 0;
    }
int main()
{
    //pow(a,b)
    int a,b;
    cin>>a>>b;
    powerofAandB(a,b);
    return 0;
}
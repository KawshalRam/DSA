#include <iostream>
using namespace std;
int powerofAandB(){
    int a, b;
    cin>>a>>b;
    int ans=1;
    for (int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    cout<<ans<<endl;
    return ans;
    }
int main()
{
    //pow(a,b)
    /*int a,b;
    cin>>a>>b;
    int answer=powerofAandB(a,b);
    cout<<answer;
    return 0;*/
    powerofAandB();
    powerofAandB();
}
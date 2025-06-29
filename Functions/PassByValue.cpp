#include <iostream>
using namespace std;

void dummy(int n)
{
    n++;
    cout<<n<<" is the number "<<endl;
}

int main()
{
    int n;
    cin>>n;
    dummy(n);
    cout<<"number n is "<<n<<endl;
    return 0;
}
// In dummy the value of n is copied there the two n's are different
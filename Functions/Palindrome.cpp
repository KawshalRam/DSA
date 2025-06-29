#include <iostream>
using namespace std;

int Palindrome(int n)
{
    int temp=n,rev=0,digit=0;
    while (temp!=0)
    {
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
    }
    if(rev==n)
    cout<<"palindrome"<<endl;
    else
    cout<<"not palindrome"<<endl;
return 0;
}

int main()
{
    int n;
    cin>>n;
    Palindrome(n);
    return 0;
}
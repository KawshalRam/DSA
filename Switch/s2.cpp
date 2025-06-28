#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char ch;
    cout<<"enter the values"<<endl;
    cin>>a;
    cin>>b;
    cout<<"enter the operation"<<endl;
    cin>>ch;
    switch(ch)
    {
        case '+': cout <<a+b<<endl;
        break;
        case '-': cout <<a-b<<endl;
        break;
        case '/': cout <<a/b<<endl;
        break;
        case '*': cout <<a*b<<endl;
        break;
        default: cout<<"defailt case";
    }
}
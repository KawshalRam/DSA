#include<iostream>
using namespace std;

int main()
{
    char ch ;
    cout<<"enter a character"<<endl;
    cin>> ch;
    int num;
    cout<<"Enter the value of Number"<<endl;
    cin>>num;
    switch(num)
    {
        case 1 : cout<<"First"<<endl;
        break;
        case 2: cout<<"Second"<<endl;
        break;
        case 3 : cout<<"Third"<<endl;
        break;
        default: cout<<"NO case satisfied"<<endl;
    }
    switch(ch)
    {
        case 'a' : cout<<"a"<<endl;
        break;
        case 'b': cout<<"b"<<endl;
        break;
        case 'c' : cout<<"c"<<endl;
        break;
        default: cout<<"NO case satisfied"<<endl;
    }
}
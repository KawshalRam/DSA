#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout<< "Enter the value of ch";
    cin>> ch;
    if (ch>='a'&& ch<='z'){
        cout<<"the ch is lowercase";
    }
    else if(ch>='A' && ch<='Z')
    {
        cout<<"the ch is uppercase";
    }
    else{
        cout<<"the ch is a number";
    }
    return 0;
}

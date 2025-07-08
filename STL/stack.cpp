#include <iostream>
#include<stack>
using namespace std;
//last in first out
int main()
{
    stack<string> s;

    s.push("I");
    s.push("Love");
    s.push("You");

    cout<<"top element "<<s.top()<<endl;

    cout<<"Size "<<s.size()<<endl;

    s.pop();

    cout<<"top element "<<s.top()<<endl;

    cout<<"Size "<<s.size()<<endl;
    cout<<"Empty "<<s.empty()<<endl;

    
}
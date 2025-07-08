#include <iostream>
#include <list>

using namespace std;
//cannot directly access the list like an array
//time complexity is order of n
int main()
{
    list<int> l;

    list<int> n(5,100);
    for(int i:n)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    l.push_back(1);
    l.push_front(2);
    l.push_back(3);
    for(int i:l)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    l.erase(l.begin());
    cout<<"after erase "<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"front " <<l.front()<<endl;
    cout<<"last " <<l.back()<<endl;
    cout<<"size "<<l.size()<<endl;
}
#include <iostream>
#include <set>

using namespace std;
//stores all element only once every element shoud be unique
//returns elements in sorted order
int main()
{
    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(3);

    for(int i:s)
    {
        cout<<i<<endl;
    }

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    cout<<endl;
    for(int i:s)
    {
        cout<<i<<endl;
    }

    cout<<endl;
    cout<<s.count(3)<<endl;

    set<int>::iterator  itr=s.find(3);
    cout<<s.find(3)<<endl; 
}


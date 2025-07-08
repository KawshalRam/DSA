#include <iostream>
#include <map>
// one key only points to one value not multiple values
// same value can be pointed by mutiple keys
// sorted 
using namespace std;

int main()
{
    map<int,string> m;
    m[1]="Love";
    m[3]="Delete";
    m[2]="Sorry";
    m.insert({5,"bheem"});

    cout<<"before erase"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 5 : "<<m.count(5)<<endl;

    
    m.erase(3);
    cout<<"after erase"<<endl;

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

}


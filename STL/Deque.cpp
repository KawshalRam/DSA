#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    /*for(int i=0;i<d.size();i++) 
    cout<<d[i]<<endl;
    //d.pop_front();
    
    for(int i=0;i<d.size();i++) 
    cout<<d[i]<<endl;*/
    
    cout<<endl;
    cout<<"Print first Index "<<d.at(1)<<endl;
    cout<<"Front "<<d.front()<<endl;
    cout<<"Last "<<d.back()<<endl;
    cout<<"it is empty "<<d.empty()<<endl;
    cout<<"Before erase "<<d.size()<<endl;
    //d.erase(d.begin(),d.begin()+1);
    //d.erase(d.end()-1);
    d.erase(d.begin());
    cout<<"After erase "<<d.size()<<endl;
}
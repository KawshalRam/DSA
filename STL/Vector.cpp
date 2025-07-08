#include <iostream>
#include <vector>
/*
-->Dynamic array,
-->size can be decreased
-->it double in size if it runs short of memory
--> .front() and .back() gives the same output as in array
*/
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5,1);
    
    vector<int> last(a);
    cout<<"last "<<endl;
    for(int i=0;i<last.size();i++) 
    cout<<last[i]<<endl;
    cout<<"a "<<endl;
    for(int i=0;i<a.size();i++) 
    cout<<a[i]<<endl;

    cout<<"Capacity "<< v.capacity()<<endl; // 
    v.push_back(5);
    cout<<"Capacity "<< v.capacity()<<endl; // 
    v.push_back(3);
    cout<<"Capacity "<< v.capacity()<<endl; // 
    v.push_back(1);
    cout<<"Capacity "<< v.capacity()<<endl; // 
    v.push_back(3);
    cout<<"Capacity "<< v.capacity()<<endl; // 
    v.push_back(6);
    cout<<"Capacity "<< v.capacity()<<endl; // 


    cout<<"Size "<< v.size()<<endl;  // .size() gives the no of elements in the vector
    
    cout<<"Before pop "<<endl;
    
    for(int i=0;i<v.size();i++) 
    cout<<v[i]<<endl;
    
    
    v.pop_back();

    cout<<"After pop "<<endl;

    for(int i=0;i<v.size();i++) 
    cout<<v[i]<<endl;

    cout<<"Before clear "<<endl;

    cout<<"Size "<< v.size()<<endl;
    cout<<"Capacity "<< v.capacity()<<endl;

    cout<<"After clear "<<endl;

    cout<<"Size "<< v.size()<<endl;
    cout<<"Capacity "<< v.capacity()<<endl;
}
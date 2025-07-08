#include <iostream>
#include <queue>
// works on first in firt out (FIFO)
using namespace std;

int main()
{
    queue<string> q;

    q.push("Hello");
    q.push("Mister");
    q.push("Kawshal");

    cout<<"Size "<<q.size()<<endl;

    cout<<"first element "<<q.front()<<endl;
    q.pop();
    cout<<"after pop"<<endl;
    cout<<"first element "<<q.front()<<endl;

    cout<<"Size "<<q.size()<<endl;
}
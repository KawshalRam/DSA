#include <iostream>
using namespace std;

int main()
{
    int num =5;

    cout<<num<<endl;
    int *ptr=&num;
    cout<<"address of the num is "<<&num<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    cout<<"size of address is "<<sizeof(num)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;
    return 0;
}
//pointer stores the address
// int *ptr=&i;  
// char *p= &ch    
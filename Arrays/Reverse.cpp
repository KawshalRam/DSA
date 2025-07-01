#include <iostream>
using namespace std;

voidk Reverse(int arr[],int size)
{
    cout<<"enter the array"<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for (int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[100],size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    Reverse(arr,size);
    return 0;
}
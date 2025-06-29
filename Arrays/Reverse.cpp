#include <iostream>
using namespace std;

int Reverse(int arr[],int size)
{
    for (int i=size;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[100],size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    cout<<"enter the array"<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    Reverse(arr,size);
    return 0;
}
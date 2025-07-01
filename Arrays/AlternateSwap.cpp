#include <iostream>
using namespace std;
void Evenswap(int arr[],int size)
{
    cout<<"enter the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i+=2)
    {
        int temp=0;
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void Oddswap(int arr[],int size)
{
    cout<<"enter the array"<<endl;
    for(int i=0;i<=size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i+=2)
    {
        int temp=0;
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(int i=0;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int size,arr[100];
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    if(size%2==0)
    Evenswap(arr,size);
    else
    Oddswap(arr,size-1);
    return 0;
}
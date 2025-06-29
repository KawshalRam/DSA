#include <iostream>
using namespace std;

int LinearSearch(int arr[],int size,int n)
{
    int c=0;
    for (int i=0;i<size;i++)
    {
        if (arr[i]==n)
        c=1;
    }
    if (c==1)
    {
        cout<<"Number is present"<<endl;
    }
    else
    cout<<"Number is not present"<<endl;
    return 0;
}

int main()
{
    int arr[100],n,size;
    cout<<"enter the number to search"<<endl;
    cin>>n;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    cout<<"enter the array"<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    LinearSearch(arr,size,n);
    return 0;
}
#include <iostream>
using namespace std;

int LargestSmallest(int n)
{
    int a[100];
    cout<<"enter the integers"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max = a[0];
    int min = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>=max) // or max=max(max,a[i]);
        max=a[i];
        if(a[i]<=min)
        min=a[i]; //or min=min(min,a[i]);
    }
    cout<<max<<endl;
    cout<<min<<endl;
    return 0;
}
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    LargestSmallest(n);
    return 0;
}

// can also be initialized as mentioned below
// int num[3]={8,5,9};
// int a[100000]={0}; {This intializes all the indexes with value 0 only works with 0}
// to initialize with a different value  than 0 use std::fill(arr,arr[n],5);
// 2nd index means the element at that same index
// 2nd element means the element at 1st index
// Using a variable as array size is a bad practice
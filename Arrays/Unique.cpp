#include <iostream>
using namespace std;

void Unique(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    cout<<ans<<" ";
}
int main()
{
    int arr[11]={4,4,3,3,2,2,1,7,9,9,1},size=11;
    Unique(arr,size);
}
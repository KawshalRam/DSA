#include <iostream>
using namespace std;
void update(int arr[],int n)
{
    cout<<"Inside the function"<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"going out to main"<<endl;
}
int main()
{
    int arr[3]={2,3,4};
    update(arr,3); 
    /*the address of this array is passed to the 
    function therefore any update in the function
    in the array displays in the main function as well*/
    for (int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
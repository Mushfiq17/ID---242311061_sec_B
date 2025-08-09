/*2. Reverse the Array*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter The number of array element : ";
    cin>>n;

    int a[n];
    cout<<"Enter array elements : ";

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Array before reversing: ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Array after reversing: ";
    for(int i=n-1; i>=0; i--)
    {
        cout<<a[i]<<" ";
    }
}

/*4. Remove Duplicates*/

#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number of elements" <<endl;
    cin>>n;


    int arr[n];
    cout<<"Enter the elements of array" <<endl;
    for(int i=0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    for(int i =0 ; i < n ; i ++)
    {
        bool dup= false;
        for(int j=0 ; j<i ; j ++)
        {
            if (arr[i]==arr[j])
            {
                dup = true;
                break;
            }
        }
        if (dup)
        {
            cout<<"duplicate value : "<<arr[i] << " "<<endl;
        }
    }
}

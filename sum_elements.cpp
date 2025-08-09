/*5. Write a program in C to find the sum of all elements of the array.*/

#include <iostream>
using namespace std;
int main()
{
    int x,sum=0;
    cout<<"Enter the number of elements" <<endl;
    cin>>x;

    int a[x];
    cout<<"Enter the elements of array" <<endl;

    for(int i=0; i < x; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    cout<<"sum of all elements of the array : " << sum<<endl;
}

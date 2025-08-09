/*5. Find Second Largest Element*/
//Find the Secend Largest Number in an Array

#include<iostream>
using namespace std;

int main()
{
    // int arr[]={1,2,3,4,5};
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }



    int largest = arr[0];
    int secondLargest = -1;

    for(int i=1; i<5; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if(secondLargest != -1)
    {
        cout << "Second Largest Number: " << secondLargest << endl;
    }
    else
    {
        cout << "No Second Largest Number Found" << endl;
    }
}

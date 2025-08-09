/*3. Search for an Element*/
#include<iostream>
using namespace std;

int main(){
    int n;
    int element;
    cout<<"Enter the number of array element : ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements : ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter searching element: ";
    cin>>element;

    for(int i=0;i<n;i++){
        if(arr[i]==element){
            cout<<"element is Found at index : "<<i<<endl;
            return 0;
        }
    }
   // return -1;
}

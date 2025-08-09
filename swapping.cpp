/*2. Write a Program in C/C++ to Swap the values of two variables without
using any extra variable.*/
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter Two Number : ";
    cin>>num1>>num2;

    cout<<"Value Before Swapping: "<<endl<<" num1= "<<num1<<endl<<" num2= "<<num2<<endl;
    cout<<endl;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    cout<<"Value After Swapping:"<<endl<<" num1= "<<num1<<endl<<" num2= "<<num2<<endl;
}

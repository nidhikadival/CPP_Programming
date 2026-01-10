/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Division
//  Description :   Returns division of two numbers
//  Input :         T , T
//  Output :        void
//  Author :        Nidhi Girish Kadival
//  Date :          10/01/2026
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void Swap(T &No1, T &No2)
{
    T temp = 0;

    temp = No1;
    No1 = No2;
    No2 = temp;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int no1 = 0, no2 = 0;

    cout<<"Enter first number: \n";
    cin>>no1;

    cout<<"Enter second number: \n";
    cin>>no2;

    Swap(no1,no2);

    cout<<"After Swapping: \n";
    cout<<"First Number: "<<no1<<"\n";
    cout<<"Second Number: "<<no2<<"\n";

    /*float no1 = 0.0f, no2 = 0.0f;

    cout<<"Enter first number: \n";
    cin>>no1;

    cout<<"Enter second number: \n";
    cin>>no2;

    Swap(no1,no2);

    cout<<"After Swapping: \n";
    cout<<"First Number: "<<no1<<"\n";
    cout<<"Second Number: "<<no2<<"\n";*/

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
//
//  Output:
//  Enter first number: 
//  10
//  Enter second number: 
//  11
//  After Swapping: 
//  First Number: 11
//  Second Number: 10
//
//  Output:
//  Enter first number: 
//  20.99  
//  Enter second number: 
//  37.45
//  After Swapping: 
//  First Number: 37.45
//  Second Number: 20.99
//
/////////////////////////////////////////////////////////////////////////////////////////////////
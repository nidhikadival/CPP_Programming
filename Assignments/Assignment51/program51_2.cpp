/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Frequency
//  Description :   Returns the no of times a symbol occurs in the array
//  Input :         T * , int, T 
//  Output :        int
//  Author :        Nidhi Girish Kadival
//  Date :          07/01/2026
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int Frequency(T * arr, int iSize, T No)
{
    int iFrequency = 0;
    int iCnt = 0;

    for(iCnt=0;iCnt<iSize; iCnt++)
    {
        if(arr[iCnt] == No)
        {
            iFrequency++;
        }
    }
    
    return iFrequency;
} // End of Frequency

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    
    cout<<"Frequency 10 is: "<<Frequency(arr,9,10)<<"\n";
    cout<<"Frequency 30 is: "<<Frequency(arr,9,30)<<"\n";
    cout<<"Frequency 40 is: "<<Frequency(arr,9,40)<<"\n";

    cout<<"\n";

    char brr[] = {'a','b','b','a','o','b'};

    cout<<"Frequency b is: "<<Frequency(brr,6,'b')<<"\n";
    cout<<"Frequency a is: "<<Frequency(brr,6,'a')<<"\n";
    cout<<"Frequency k is: "<<Frequency(brr,6,'k')<<"\n";

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
//
//  Output:
//  Frequency 10 is: 4
//  Frequency 30 is: 2
//  Frequency 40 is: 2
//
//  Frequency b is: 3
//  Frequency a is: 2
//  Frequency k is: 0
//
/////////////////////////////////////////////////////////////////////////////////////////////////
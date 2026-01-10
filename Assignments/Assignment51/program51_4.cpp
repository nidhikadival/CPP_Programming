/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : SearchLast
//  Description :   Returns last occurance of the given symbol
//  Input :         T * , int, T 
//  Output :        int
//  Author :        Nidhi Girish Kadival
//  Date :          07/01/2026
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SearchLast(T * arr, int iSize, T No)
{
    int iCnt = 0;
    int iIndex = 0;

    for(iCnt=0;iCnt<iSize; iCnt++)
    {
        if(arr[iCnt] == No)
        {
            iIndex = iCnt;
        }
    }
    
    return iIndex;

} // End of SearchLast

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    
    cout<<"Last Occurance of 40 is: "<<SearchLast(arr,9,40)<<"\n";
    cout<<"Last Occurance of 30 is: "<<SearchLast(arr,9,30)<<"\n";

    cout<<"\n";

    char brr[] = {'a','b','b','a','o','b'};

    cout<<"Last Occurance of b is: "<<SearchLast(brr,6,'b')<<"\n";
    cout<<"Last Occurance of o is: "<<SearchLast(brr,6,'o')<<"\n";
    cout<<"Last Occurance of n is: "<<SearchLast(brr,6,'n')<<"\n";

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
//
//  Output:
//  Last Occurance of 40 is: 7
//  Last Occurance of 30 is: 4

//  Last Occurance of b is: 5
//  Last Occurance of o is: 4
//  Last Occurance of n is: 0
//
/////////////////////////////////////////////////////////////////////////////////////////////////
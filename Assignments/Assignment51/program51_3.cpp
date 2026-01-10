/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : SearchFirst
//  Description :   Returns first occurance of the given symbol
//  Input :         T * , int, T 
//  Output :        int
//  Author :        Nidhi Girish Kadival
//  Date :          07/01/2026
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SearchFirst(T * arr, int iSize, T No)
{
    int iCnt = 0;

    for(iCnt=0;iCnt<iSize; iCnt++)
    {
        if(arr[iCnt] == No)
        {
            break;
        }
    }
    
    if(iCnt == iSize)
    {
        return 0;
    }
    else
    {
        return iCnt;
    }

} // End of SearchFirst

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    cout<<"First Occurance of 40 is: "<<SearchFirst(arr,9,40)<<"\n";
    cout<<"First Occurance of 30 is: "<<SearchFirst(arr,9,30)<<"\n";

    cout<<"\n";

    char brr[] = {'a','b','b','a','o','b'};

    cout<<"First Occurance of b is: "<<SearchFirst(brr,6,'b')<<"\n";
    cout<<"First Occurance of o is: "<<SearchFirst(brr,6,'o')<<"\n";
    cout<<"First Occurance of n is: "<<SearchFirst(brr,6,'n')<<"\n";

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
//
//  Output:
//  First Occurance of 40 is: 5
//  First Occurance of 30 is: 2
//  
//  First Occurance of b is: 1
//  First Occurance of o is: 4
//  First Occurance of n is: 0
//
/////////////////////////////////////////////////////////////////////////////////////////////////
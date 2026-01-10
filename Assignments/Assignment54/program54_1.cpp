/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Search
//  Description :   Returns true if given element is present in the array and false if not
//  Input :         T * , int, value
//  Output :        bool
//  Author :        Nidhi Girish Kadival
//  Date :          09/01/2026
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
bool Search(T * arr, int iSize, T value)
{
    int iCnt = 0;
    bool found = false;

    for(iCnt=0;iCnt<iSize; iCnt++)
    {
        if(arr[iCnt] == value)
        {
            found = true;
        }
    }
    
    return found;
} // End of Search

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    char brr[] = {'a','b','c','d','e'};
    bool bRet = false;

    bRet = Search(arr,9,20);

    if(bRet == true)
    {
        cout<<"Element present in array\n";
    }
    else
    {
        cout<<"Element not present in array\n";
    }

    bRet = Search(brr,5,'z');

    if(bRet == true)
    {
        cout<<"Element present in array\n";
    }
    else
    {
        cout<<"Element not present in array\n";
    }

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
//
//  Output:
//  Element present in array
//  Element not present in array
//
/////////////////////////////////////////////////////////////////////////////////////////////////
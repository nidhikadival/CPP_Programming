/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : CheckSorted
//  Description :   Returns true if array is sorted and false if not sorted
//  Input :         T * , int
//  Output :        bool
//  Author :        Nidhi Girish Kadival
//  Date :          08/01/2026
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
bool CheckSorted(T * arr, int iSize)
{
    int iCnt = 0;

    for(iCnt=0;iCnt<iSize-1; iCnt++)
    {
        if(arr[iCnt] > arr[iCnt+1])
        {
            break;
        }
    }

    if(iCnt == iSize-1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
} // End of CheckSorted

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90};
    float brr[] = {55.5f,44.2f,22.1f,10.2f};
    int iCnt = 0;
    bool bRet = false;

    bRet = CheckSorted(arr,9);

    if(bRet == true)
    {
        cout<<"Array is Sorted\n";
    }
    else
    {
        cout<<"Array is not Sorted\n";
    }

    bRet = CheckSorted(brr,4);

    if(bRet == true)
    {
        cout<<"Array is Sorted\n";
    }
    else
    {
        cout<<"Array is not Sorted\n";
    }


    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
//
//  Output:
//  Array is Sorted
//  Array is not Sorted
//
/////////////////////////////////////////////////////////////////////////////////////////////////
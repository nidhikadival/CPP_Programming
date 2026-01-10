/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : SecondMin
//  Description :   Returns second minimum number of the array
//  Input :         T * , int
//  Output :        bool
//  Author :        Nidhi Girish Kadival
//  Date :          08/01/2026
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T SecondMin(T *arr, int iSize)
{
    T Min, SecondMin;

    if(arr[0] < arr[1])
    {
        Min = arr[0];
        SecondMin = arr[1];
    }
    else
    {
        Min = arr[1];
        SecondMin = arr[0];
    }

    for(int i = 2; i < iSize; i++)
    {
        if(arr[i] < Min)
        {
            SecondMin = Min;
            Min = arr[i];
        }
        else if(arr[i] < SecondMin && arr[i] != Min)
        {
            SecondMin = arr[i];
        }
    }

    return SecondMin;
} // End of SecondMin

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

    cout<<"Second minimum number in arr[] is: "<<SecondMin(arr,9)<<"\n";

    cout<<"Second minimum number in brr[] is: "<<SecondMin(brr,4)<<"\n";

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
//
//  Output:
//  Second minimum number in arr[] is: 20
//  Second minimum number in brr[] is: 22.1
//
/////////////////////////////////////////////////////////////////////////////////////////////////
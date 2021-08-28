/* This program will focus on the recursive implementations
of a function whose goal is to find the minimum of an array.
We will implement a version that will take the size of the array
and another version that will take the range of indices to be considered */
#include <iostream>
using namespace std;

const int SIZE_ARRAY = 10;

int minArray1(int arr[], int arrSize);
// Returns the minimum of the array

int main()
{
    int arr[SIZE_ARRAY] = {9, -2, 14, 12, 3, 6, 2, 1, -9, 15};

    cout<<minArray1(arr, SIZE_ARRAY)<<endl;
    
}

int minArray1(int arr[], int arrSize)
{
    if(arrSize == 1)
    {
        return arr[0];
    }
    else
    {
        return min(arr[arrSize - 1], minArray1(arr, (arrSize - 1)));
    }
}
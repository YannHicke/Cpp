/* This program will focus on the recursive implementation of
two problems.
1. Summing the squares of each value of an array.
2. Returning a boolean stating whether an array is sorted in an ascending order or not. */
#include <iostream>
using namespace std;

const int SIZE_ARRAY = 4;

int sumOfSquares(int arr[], int arrSize);
// returns the sum of the squares of each value of the array
bool isSorted(int arr[], int arrSize);
// returns true if the array is sorted in an ascending order, false otherwise

int main()
{
    cout<<"\nQuestion a.\n";
    int sumSquares;
    int arr[SIZE_ARRAY] = {2, -1, 3, 10};

    sumSquares = sumOfSquares(arr, SIZE_ARRAY);
    cout<<"The sum of squares of this array [";
    for(int i = 0; i < SIZE_ARRAY - 1; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<arr[SIZE_ARRAY - 1]<<"] is: ";
    cout<<sumSquares<<endl;

    cout<<"\nQuestion b.\n";
    int arr2[SIZE_ARRAY] = {1, 2, 3, 4};
    int arr3[SIZE_ARRAY] = {1, 2, 4, 3};

    cout<<"This array [";
    for(int i = 0; i < SIZE_ARRAY - 1; i++)
    {
        cout<<arr2[i]<<", ";
    }
    cout<<arr2[SIZE_ARRAY - 1]<<"] is ";
    cout<<(isSorted(arr2, SIZE_ARRAY)?"sorted.":"not sorted.")<<endl;

    cout<<"This array [";
    for(int i = 0; i < SIZE_ARRAY - 1; i++)
    {
        cout<<arr3[i]<<", ";
    }
    cout<<arr3[SIZE_ARRAY - 1]<<"] is ";
    cout<<(isSorted(arr3, SIZE_ARRAY)?"sorted.":"not sorted.")<<endl;


    return 0;
}

int sumOfSquares(int arr[], int arrSize)
{
    if(arrSize == 1)
    {
        return (arr[0] * arr[0]);
    }
    else
    {
        int rest;
        int lastSquare;
        rest = sumOfSquares(arr, (arrSize - 1));
        lastSquare = (arr[(arrSize - 1)] * arr[(arrSize - 1)]);
        return (rest + lastSquare);
    }
}

bool isSorted(int arr[], int arrSize)
{
    if(arrSize == 1)
    {
        return true;
    }
    else
    {
        if(isSorted(arr, (arrSize - 1)) == false)
        {
            return false;
        }
        else
        {
            if(arr[arrSize - 2] <= arr[arrSize - 1])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

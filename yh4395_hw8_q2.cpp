/* This program will focus on the recursive implementation of
two problems.
1. Summing the squares of each value of an array.
2. Returning a boolean stating whether an array is sorted or not. */
#include <iostream>
using namespace std;

const int SIZE_ARRAY = 4;

int sumOfSquares(int arr[], int arrSize);
// returns the sum of the squares of each value of the array

int main()
{
    int sumSquares;
    int arr[SIZE_ARRAY] = {2, -1, 3, 10};

    sumSquares = sumOfSquares(arr, SIZE_ARRAY);
    cout<<"\nThe sum of squares of this array [";
    for(int i = 0; i < SIZE_ARRAY - 1; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<arr[SIZE_ARRAY - 1]<<"] is:\n";
    cout<<sumSquares<<endl;

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
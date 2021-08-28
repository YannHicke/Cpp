/* This program will focus on the recursive implementations
of a function whose goal is to find the minimum of an array.
We will implement a version that will take the size of the array
and another version that will take the range of indices to be considered */
#include <iostream>
using namespace std;

int minArray1(int arr[], int arrSize);
// Returns the minimum of the array
int minArray2(int arr[], int low, int high);
// Returns the minimum of the array between these indexes

int main()
{
    int arr[10] = {9, -2, 14, 12, 3, 6, 2, 1, -9, 15};
    int res1, res2, res3, res4;

    res1 = minArray1(arr, 10);
    res2 = minArray2(arr, 0, 9);
    cout<<res1<<" "<<res2<<endl;

    res3 = minArray2(arr, 2, 5);
    res4 = minArray1(arr + 2, 4);
    cout<<res3<<" "<<res4<<endl;

    return 0;
    
}

int minArray1(int arr[], int arrSize)
{
    if(arrSize == 1)
    {
        return arr[0];
    }
    else
    {
        int lastElement = arr[arrSize - 1];
        int minRestArray = minArray1(arr, (arrSize - 1));
        return min(lastElement, minRestArray);
    }
}

int minArray2(int arr[], int low, int high)
{
    if(low == high)
    {
        return arr[low];
    }
    else if (low == (high - 1))
    {
        return min(arr[low], arr[high]);
    }
    else
    {
        int minRestArray = minArray2(arr, (low + 1), (high - 1));
        int minArray = min(arr[high], minRestArray);
        return min(arr[low], minArray);
    }
}
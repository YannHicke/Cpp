/* This program will implement a recursive function that will
solve the "Jump it" game. It takes in an array of numbers and returns
the lowest cost to get from the first index to the last index. 
The total cost is the sum of each number associated to the index visited.
The options are incrementing by 1 or incrementing by 2
we reach the last index */
#include <iostream>
using namespace std;

const int SIZE_ARRAY = 6;
const int INCREMENT_JUMP = 2;
const int INCREMENT_NO_JUMP = 1;
int lowestCost(int arr[], int arrSize);
// Returns the lowest cost when playing the "Jump it" game

int main()
{
    int arr[SIZE_ARRAY] = {0, 3, 80, 6, 57, 10};

    cout<<lowestCost(arr, SIZE_ARRAY)<<endl;
}

int lowestCost(int arr[], int arrSize)
{
    if(arrSize == 1)
    {
        return arr[0];
    }
    else if(arrSize == 2)
    {
        return (arr[0] + arr[1]);
    }
    else
    {
        int costJump = lowestCost((arr + INCREMENT_JUMP), (arrSize - INCREMENT_JUMP));
        int costNoJump = lowestCost((arr + INCREMENT_NO_JUMP), (arrSize - INCREMENT_NO_JUMP));
        return arr[0] + min(costJump, costNoJump);
    }
}
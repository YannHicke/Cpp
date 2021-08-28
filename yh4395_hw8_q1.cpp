/* This program will focus on recursive implementations of three problems.
1. Printing a textual image of a right triangle.
2. Printing a textual image of two opposite right triangles.
3. Printing a vertical ruler of 2^n - 1 lines. */
#include <iostream>
using namespace std;

void printTriangle(int n);
// prints a right triangle with n lines
void printOppositeTriangles(int n);
// prints two opposite triangles with each n lines

int main()
{
    int inputUser;
    cout<<"Question a.\n";
    cout<<"Please enter a positive integer: ";
    cin>>inputUser;

    printTriangle(inputUser);

    cout<<"\nQuestion b.\n";
    cout<<"Please enter a positive integer: ";
    cin>>inputUser;

    printOppositeTriangles(inputUser);

    return 0;
}

void printTriangle(int n)
{
    if(n == 1)
    {
        cout<<"*\n";
    }
    else
    {
        printTriangle((n - 1));
        for (int i = 0; i < n; i++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void printOppositeTriangles(int n)
{
    if(n == 1)
    {
        cout<<"*\n*\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout<<"* ";
        }
        cout<<endl;
        printOppositeTriangles((n - 1));
        for (int i = 0; i < n; i++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
}
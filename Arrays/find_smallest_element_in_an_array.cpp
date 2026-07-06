#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 8, 2, 10, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int smallest = arr[0]; // assuming the first element is the smallest
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < smallest)
            smallest = arr[i]; // update the smallest
    }
    cout << "Smallest = " << smallest;
}
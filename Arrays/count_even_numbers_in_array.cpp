#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 4, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
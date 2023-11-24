#include <iostream>
#include <limits.h>
using namespace std;
int largestInArray(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[5] = {1, 2, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int res = largestInArray(arr, size);
    cout << "Largest element in Array is: " << res;
    return 0;
}
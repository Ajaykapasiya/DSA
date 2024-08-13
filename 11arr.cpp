
// Count Maximum Consecutive One's in the array

#include <iostream>
using namespace std;

void Maximum_Consecutive(int arr[], int n)
{

    int count = 0;
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            max = count;
        }
        else
        {
            count = 0;
        }
    }
    cout << max;
    // return max;
}

int main()
{

    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1};
    int n = 11;

    Maximum_Consecutive(arr, n);
}
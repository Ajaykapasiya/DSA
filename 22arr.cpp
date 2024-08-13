// next_permutation : find next lexicographically greater permutation

#include <iostream>
#include <algorithm>
using namespace std;

int nextGreaterPermutation(int arr[], int n)
{
    int id1 = -1;
    int id2 = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            id1 = i;
            break;
        }
        
    }

    for (int i = n - 1; i > id1; i--)
    {
        if (arr[i] > arr[id1])
        {
            id2 = i;
            break;
        }

        
    }

    swap(arr[id1], arr[id2]);

    reverse(arr + id1 + 1, arr + n);

    // return arr[n];
};

int main()
{
    int arr[] = {2, 1, 5, 4, 3, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    nextGreaterPermutation(arr, n);

    cout << "The next permutation is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
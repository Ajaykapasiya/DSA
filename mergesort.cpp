
// Merge sort = divide & merge

// TC = nlogn
// SC = 0(n)

#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= right && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_(arr{left});
            left++;
        }

        else
        {
            temp.push_(arr{right});
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left])
            left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right])
            right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergesort(vector<int> &arr, int low, int high, int mid)
{

    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergesort(arr, low, mid);      // left half
    mergesort(arr, mid + 1, high); // right half
    merge(low, high, mid, arr);    // merging sorted halves
}

int main()
{
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = 7;
    cout << " before apply sorting " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    mergesort(arr, 0, n - 1);
    cout << "after the sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
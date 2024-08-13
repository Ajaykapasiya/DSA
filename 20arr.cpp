// Stock buy and sell

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// brute force approach

int maxpro(int arr[], int n)
{

    int maxprof = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] > arr[i])
            {
                maxprof = max(arr[j] - arr[i] , maxprof);
            }
        }
    }

    return maxprof;



// optimal appraoch

    /*

    int maxi = 0;
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i] - mini);
    }
    return maxi;

    */
}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = maxpro(arr, n);

    cout << "The maximum profit is: " << ans;
}
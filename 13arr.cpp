

// Longest Subarray with given Sum K(Positives)

#include <iostream>
using namespace std;

// optimal approach

int l_subarray(int arr[], int n, int k)
{

    int right = 0;
    int left = 0;
    int sum = arr[0];
    int maxl = 0;

    while (right < n)
    {

        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }

        if (sum == k)
        {
            maxl = max(maxl, right - left + 1);
        }

        right++;
        if (right < n)
            sum += arr[right];
    }

    return maxl;

    /*


        int len = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int sum = 0;
                for (int k = i; k <= j; k++)
                {
                    sum += arr[k];
                }

                if (sum == k)
                {
                    len = max(len, j - i + 1);
                }
            }
        }
        return len;

        */
}

int main()
{
    int arr[] = {2, 3, 5, 1, 9};
    int n = 10;

    int k = 10;
    int len = l_subarray(arr, n, k);

    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
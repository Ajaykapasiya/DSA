// print subarray with Maximum Subarray Sum

 #include <iostream>
 #include <climits>
//#include <bits/stdc++.h>
using namespace std;

int maxisubsum(int arr[], int n)
{
    int sum = 0;
    int maxi = LONG_MIN;

    int start = 0;
    int ansStart = -1, ansEnd = -1;

    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
            start = i;
        sum += arr[i];

        if (sum > maxi)
        {
            maxi = sum;
        }

        ansStart = start;
        ansEnd = i;

         if (sum < 0)
        {

            sum = 0;
        }
    }

    cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]"<<endl;

    return maxi;
}

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = maxisubsum(arr, n);
    cout << "The sum of maximum subaaray is: " << ans;
}
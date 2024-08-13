// Kadane's Algorithm : Maximum Subarray Sum in an Array

 #include <iostream>
 #include <climits>

using namespace std;

int maxisubsum(int arr[], int n)
{
    int sum = 0;
    int maxi = LONG_MIN;

    for (int i = 0; i < n; i++)
    {
       
        sum += arr[i];

        if (sum > maxi)
        {
            maxi = sum;
        }
        

        else if (sum < 0){
        
            sum = 0;
        }
    }
    return maxi;
}

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = maxisubsum(arr, n);
    cout<<"The sum of maximum subaaray is: "<<ans;
}
// 2 sum problem

#include <iostream>
using namespace std;

bool sum_problem(int arr[], int n, int target)
{

    int right = n - 1;
    int left = 0;
    sort(arr, arr + n);

    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            return true;
        }

        else if (sum < target)
        {
            left++;
        }

        else
        {
            right--;
        }
    }

    return false;
}

int main()
{

    int arr[] = {2, 6, 5, 8, 11};
    int n = 5;
    int target = 12;

    if (sum_problem(arr, n, target))
    {
        cout << "Yes, there are numbers in the array that sum up to " << target << endl;
    }
    else
    {
        cout << "No, there are no numbers in the array that sum up to " << target << endl;
    }

    return 0;
}
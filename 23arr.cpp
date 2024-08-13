// Leaders in an Array

#include <iostream>
#include <vector>
using namespace std;

vector<int> leaderarr(int arr[], int n)
{

    vector<int> ans;

    int maxi = arr[n - 1];
    ans.push_back(arr[n - 1]);

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            ans.push_back(arr[i]);
            maxi = ans[n];
        }
    }

    return ans;
}

int main()
{

    int arr[] = {10, 22, 12, 3, 0, 6};
    int n = 6;

    vector<int> ans = leaderarr(arr, n);

    for (int i = ans.size()-1; i >= 0; i--)
    {

        cout << ans[i] << " ";
    }
}
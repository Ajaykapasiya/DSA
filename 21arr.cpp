// Rearrange Array Elements by Sign

#include <iostream>
#include <vector>
using namespace std;


vector <int> rearr(int arr[], int n)
{

    vector<int> cnt(n, 0);

    int posindex = 0;
    int negindex = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            cnt[negindex] = arr[i];
            negindex += 2;
        }

        else
        {
            cnt[posindex] = arr[i];
            posindex += 2;
        }
    }

    return cnt;
}

int main()
{

    int arr[] = {1, 2, -4, -5 };
    int n = sizeof(arr) / sizeof(arr[0]);

   vector <int> ans = rearr(arr, n);

    for (int i = 0; i < n; i++)
    {
       cout<<ans[i]<<" ";
    }
    
}
// Find the Majority Element that occurs more than N/2 times

#include <iostream>
using namespace std;
// optimal approach
int majority_ele(int arr[], int n)
{

    int ele;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            ele = arr[i];
        }

        else if (ele == arr[i])
            cnt++;
        else
            cnt--;
    }

    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
            cnt1++;
    }

    if (cnt1 > (n / 2))
        return ele;

    return -1;

    /*

  for (int i = 0; i < n; i++)
  {
      int cnt = 0;

      for (int j = 0; j < n; j++)
      {
        if (arr[j] == arr[i])
        {
            cnt++;
        }

      }
      if (cnt>(n/2))
  {
    return arr[i];
  }

  }

  return 0;
  */
}

int main()
{
    int arr[] = {2, 2, 1, 1, 1, 2, 2, 3, 3};
    int n = 9;

    int ans = majority_ele(arr, n);

    cout << "the majority element " << ans;
}
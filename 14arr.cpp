
// Longest Subarray with sum K | [Postives and Negatives]

#include <iostream>

#include <algorithm>
using namespace std;

int getLongestSubarray(int a[],  int n, int k) {
   

    int len = 0;
    for (int i = 0; i < n; i++) { 
        int s = 0;
        for (int j = i; j < n; j++) { 
            s += a[j];

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

int main()
{
    int a[] = { -1, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 1;
    int len = getLongestSubarray(a, n , k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}


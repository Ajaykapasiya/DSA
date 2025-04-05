#include <bits/stdc++.h>
using namespace std;

int largestSubarraySumMinimized(vector<int> &a , int k){
    int low = *max_element(a.begin() , a.end());
    int high = accumulate(a.begin() , a.end() , 0);

    while (low<=high)
    {
        int mid = (low+high)/2;
        int partitions = countPartitions(a , mid)
    }
    
}


int main()
{
    vector<int> a = {10, 20, 30, 40};
    int k = 2;
    int ans = largestSubarraySumMinimized(a, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}
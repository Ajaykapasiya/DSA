#include <bits/stdc++.h>
using namespace std;

int florrSqrt(int n){
    int low = 0;
    int high = n;

    while (low<=high)
    {
        long long mid = (low+high)/2;
        long long val = mid*mid;

        if (val <= (long long)(n))
        {
            low = mid + 1;
        }
        else
    }
    
}


int main()
{
    int n = 28;
    int ans = floorSqrt(n);
    cout << "The floor of square root of " << n
         << " is: " << ans << "\n";
    return 0;
}
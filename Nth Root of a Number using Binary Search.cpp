#include <bits/stdc++.h>
using namespace std;

int func(int mid , int n ,int m){
    long long ans = 1;
    
}


int NthRoot(int n , int m ){
    int low = 1;
    iny high = m;
    while (low<=high)
    {
        int mid = (low+high)/2;
        int midN = func(mid , n , m)
    }
    
}



int main()
{
    int n = 3, m = 27;
    int ans = NthRoot(n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}
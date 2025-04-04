#include <bits/stdc++.h>
using namespace std;

int 



int smallestDivisor(vector<int> &arr , int limit){
    int n = arr.size();
    if(n > limt )return -1;

    int low = 1;
    int high = *max_element(arr.begin() , arr.end());

    while (low<=high)
    {
        int mid = (low+high)/2;
        if (sumByD(arr,mid) <= limit){

        }
    }
    
}





int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int limit = 8;
    int ans = smallestDivisor(arr, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;
}

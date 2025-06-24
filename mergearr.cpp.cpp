
#include <bits/stdc++.h>
using namespace std;

vector<long long> merge(long long arr1[], long long arr2[], int n, int m) {

    vector<long long> arr3;  // ✅ Use vector
    int left = 0;
    int right = 0;
    int index = 0;
    
    
    while (left < n && right < m) {
        if (arr1[left] <= arr2[right]) {
            arr3[index] = arr1[left];
            left++, index++;
        }
        else {
            arr3[index] = arr2[right];
            right++, index++;
        }
    }
    while(left < n){
    arr3[index++] = arr1[left++];
    }
    while(right < m){
        arr3[index++] = arr2[right++];
        
    }
    return arr3;
}

int main()
{
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    vector<long long> merged  = merge(arr1, arr2, n, m);
   cout << "The merged array is: ";
    for (auto val : merged) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
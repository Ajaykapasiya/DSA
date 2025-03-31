
#include <bits/stdc++.h>
using namespace std;

bool canWePlaceCow(vector<int> &stalls , int n ,int c ,int dist){

    int count = 1;
    int lastPlaced = stalls[0];
    
    for(int i = 1; i < n; i++){
        if(stalls[i] - lastPlaced >= dist){
            count++;
            lastPlaced = stalls[i];
        }
        if (count == c) return true;
    }
    return false;
}


int aggressiveCows(vector<int> &stalls , int n ,int c){
    sort(stalls.begin() , stalls.end());
    int low = 0;
    int high = stalls[n-1] - stalls[0];
    int ans = 0;
    
    while(low<=high){
        int mid = (low+high)/2;
        
        if(canWePlaceCow(stalls , n , c , mid)){
            ans = mid ;
             low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans ;
}





int main() {
    vector<int> stalls = {1, 2, 8, 4, 9};
    int n = stalls.size(), c = 3;
    
    cout << "Maximum Minimum Distance: " << aggressiveCows(stalls, n, c) << endl;
    return 0;
}

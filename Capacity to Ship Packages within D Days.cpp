#include<bits/stdc++.h>
using namespace std; 

int numberOfDays(vector<int> &weight , int cap){
    int days = 1;
    int load = 0;
    int n = weight.size();

    for (int i = 0; i < n; i++)
    {
        if (load + weight[i] > cap )
        {
            days += 1;
            load = weight[i];
        }
        else{
            load += weight[i];
        }
        
    }
    return days;
    
}



int leastWeightCapacity(vector<int> &weight , int d){
    int low = *max_element(weight.begin() , weight.end());
    int high = accumulate(weight.begin() , weight.end(), 0);

    while (low<=high)
    {
        int mid = (low/high)/2;
        int numberOfDays = findDays(weight, mid);
        if (numberOfDays <= d)
        {
          high = mid - 1;
        }

        else {
            low = mid + 1;
        }
        
    }
    return low; 
    

}



int main()
{
    vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5;
    int ans = leastWeightCapacity(weights, d);
    cout << "The minimum capacity should be: " << ans << "\n";
    return 0;
}
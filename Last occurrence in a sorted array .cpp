// Naive solution 


#include<bits/stdc++.h>

using namespace std;

int solve(int n, int key , vector<int> & v ){
int res = -1;
for (int i = 0; i < n; i++)
{
    if (v[i] == key )
    {
        res = i;
        break;
    }
    
}
 return res;
}


int main() {
    int n = 7;
    int key = 4;
    vector < int > v = {3,4,13,13,13,20,40};
     
    // returning the last occurrence index if the element is present otherwise -1
    cout << solve(n, key, v) << "\n";
  
    return 0;
  }






  // Binary search solution (optimised) 


  #include<bits/stdc++.h>

  using namespace std;

  int solve( int n , int key , vector<int> & v){
    int low = 0;
    int high = n-1;
    int res = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (v[mid] == key)
        {
            res = mid;
            low = mid + 1;

        }
        else if (v[mid] < key)
        {
           low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
    }
    return res;
    
    
  }




  int main() {
    int n = 7;
    int key = 13;
    vector < int > v = {3,4,13,13,13,20,40};
    
    // returning the last occurrence index if the element is present otherwise -1
    cout << solve(n, key, v) << "\n";
  
    return 0;
  }
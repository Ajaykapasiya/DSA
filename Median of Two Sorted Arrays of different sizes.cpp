#include<bits/stdc++.h>
using namespace std;
double median(vector<int>&a , vector<int>&b){
    int n1 = a.size();
    int n2 = b.size();

    if (n1>n2) return median (b,a);
     
    int n = n1+n2;
    
    
}




int main()
{
    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15};
    cout << "The median of two sorted array is " << fixed << setprecision(1)
         << median(a, b) << '\n';
}

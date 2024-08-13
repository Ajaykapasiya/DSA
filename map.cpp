#include <iostream>
#include <map>
// #include<bits/stdc++.p>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // Iterate in the map

    for (auto it : mpp)
    {
        cout << it.first << "=> " << it.second << endl;
    }

    int q;
    cout << "enter the no  of query :";
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << mpp[number];
    }
    return 0;
}
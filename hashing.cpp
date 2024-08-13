#include <iostream>
using namespace std;
/*
int main()
{
    int n;
    cout << "enter no: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "enter q no: ";
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
    return 0;
}

*/

// this is for lower case
/*
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin >> s;

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cout<<"Enter the number of query: ";
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
    }

    return 0;
}

*/

// this is for both upper and lower case

int main()
{

    string s;
    cout << "Enter the string: ";

    cin >> s;

    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    cout << "Enter the number of query: ";

    while (q--)
    {
        char c;
        cin >> c;

        cout << hash[c] << endl;
    }
    return 0;
}

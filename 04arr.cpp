// Remove Duplicates in-place from Sorted Array

#include <iostream>
using namespace std;

int r_duplicates(int arr[], int n)
{

    if (n == 0)
        return 0;

    int i = 0;

    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

int main()
{
    int n;
    cout << "Enter the size of aaray : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The given aaray is : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
int new_length =  r_duplicates(arr, n);
    r_duplicates(arr, n);

    for (int i = 0; i < new_length; i++)
    {
        cout<<arr[i]<< " ";
    }
        cout << endl;


    return 0;
}
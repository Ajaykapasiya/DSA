// Linear Search

#include <iostream>
using namespace std;

// int num = 4;

void linear_search(int arr[], int n, int num)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            cout << "The array at the index: " << i;
            return;
        }
    }

    cout << "The number is not in the array";
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;

    int num;
    cout << "Enter the number to search: ";

    cin >> num;

    linear_search(arr, n, num);

    return 0;
}
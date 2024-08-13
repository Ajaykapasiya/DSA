// Move all Zeros to the end of the array

#include <iostream>
#include <algorithm>
using namespace std;

void move_zero(int arr[], int n)
{

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
        }

        break;
    }

    for (int i = j ; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }

        
    }
}

int main()
{
    int arr[] = {1,0,0,6,4,0,0,1};
    int n = 8;

    cout << "Array before moving zero: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    move_zero(arr, n);

    cout << "Array after moving zero: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

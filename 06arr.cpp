// Left Rotate the Array by D place

#include <iostream>
using namespace std;

void left_rotate(int arr[], int n, int d)
{

    d = d % n;

    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i-d] = arr[i];
    }

    for (int i = n-d; i < n; i++)
    {
        arr[i] = temp[i-(n-d)];
    }
    
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;

    cout<<"Array before rotation: ";

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

cout << endl;

    int d = 3;

    left_rotate(arr, n, d);

    cout << "Array after rotation: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

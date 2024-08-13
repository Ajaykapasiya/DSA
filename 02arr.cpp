// second largest element in the aaray

#include <iostream>
using namespace std;

int largest_element(int arr[], int n)
{
    int largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

void slargest_element(int arr[], int n)
{

    int largest = largest_element(arr, n);
    int slargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (largest > slargest &&  arr[i]!= largest)
        {
            slargest = arr[i];
        }
    }
    cout<<"The second largest element is : "<<slargest;
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

    largest_element(arr, n);

    slargest_element(arr, n);

    return 0;
}
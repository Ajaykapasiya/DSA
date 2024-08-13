// Check if an Array is Sorted

#include <iostream>
using namespace std;

 bool sorted_aaray(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    { 
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
        
    }
    return true;
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
    cout<<endl;



   if( sorted_aaray(arr, n))
   {
    cout<<"The array is sorted."<<endl;
   }
   else
   {
        cout<<"The array is not  sorted."<<endl;

   }
}
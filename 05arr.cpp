// Left Rotate the Array by One place


#include<iostream>
using namespace std;


int rotate_aaray(int arr[] , int n)
{
int temp = arr[0];

for (int i = 1; i < n; i++)
{
    arr[i-1] = arr[i];
}

arr[n-1] = temp;
return 0;

}

int main()
{

int arr[5] = {1,4,7,9,4};
int n = 5;

rotate_aaray(arr , n);

cout<<"Array after rotation: ";

for (int i = 0; i < n; i++)
{
   cout<<arr[i]<<" ";
}

cout<<endl;


return 0;

}
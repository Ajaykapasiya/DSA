
// Sort an array of 0s, 1s and 2s


// understand the optimal approach


#include<iostream>

using namespace std;

void sortarray(int arr[] , int n)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        
        else if (arr[i] == 1 )
        {
            count1++;
        }

        else
        {
           count2++;
        } 
        
    }

    for(int i = 0 ; i<count0 ; i++) arr[i] = 0;

    for(int i = count0 ; i<count0 + count1 ; i++) arr[i] = 1;

    for(int i = count0+count1 ; i<n ; i++) arr[i] = 2;

    
}



int main ()
{
int arr[]={0, 2, 1, 2, 0, 1,0,0,0,0,0,0};
int n = 12;

sortarray(arr , n);
cout<<"After sorting: ";

for (int i = 0; i < n; i++)
{
   cout<<arr[i]<<" ";
}

cout<<endl;

return 0;



}

 
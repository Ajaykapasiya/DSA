//  Find the number that appears once, and the other numbers twice


#include<iostream>
using namespace std;





int once_no(int arr[] , int n)
{



    // optimal approch


int xorr = 0;

for (int i = 0; i < n; i++)
{
    xorr = xorr ^ arr[i];
}

return xorr;




/*

 for (int i = 0; i < n; i++) {
        int num = arr[i]; 
        int cnt = 0;

        
        for (int j = 0; j < n; j++) {
            if (arr[j] == num)
                cnt++;
        }

        
        if (cnt == 1) return num;
    }

    return -1;

    */

}





int main()
{
    int arr[] = {1,2,3,3,4,2,1};
    int n = 7;

   int ans = once_no(arr, n);

   cout<<"The no appears once: "<<ans;
}








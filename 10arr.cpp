// Find the missing number in an array

#include <iostream>
using namespace std;

int missing_no(int arr[], int n)
{






    for (int i = 1; i < n; i++)
    {
        int flag = 0;

        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            return i;
        }
    }
    return -1;

    
}

int main()
{
    int arr[] = {1, 2, 3, 5};
    int n = 5;
    int i;

    int missingnumber = missing_no(arr, n);
    cout << "the missing no is: " << missingnumber;
}





/*

optimal approach

int missingNumber(int arr[], int N) {

    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < N - 1; i++) {
        xor2 = xor2 ^ arr[i]; // XOR of array elements
        xor1 = xor1 ^ (i + 1); //XOR up to [1...N-1]
    }
    xor1 = xor1 ^ N; //XOR up to [1...N]

    return (xor1 ^ xor2); // the missing number
}



*/










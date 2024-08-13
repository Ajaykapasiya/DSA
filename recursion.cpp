// Print name n times
#include <iostream>
using namespace std;

/*
void print (int i , int n){
   // int i , n ;
    if (i>n)
    return ;
    cout<<"Ajay"<<endl;

print(i+1 , n);

}

int main (){
    int n;
    cin>>n;
  print( 1 , n );
  return 0;
}

*/

// print linear number form 1 to n
#include <iostream>
using namespace std;
/*
void linear (int i , int n){
   if(i>n)
    return;
    cout<<i;
    linear(i+1,n);


for (int i = 1; i <= n; i++)
{
    cout<<i;

}
 */

/*
}

int main()
{
 int n;
 cin>>n;
linear(1 , n);

return 0 ;
}

*/

// print n to 1

#include <iostream>
using namespace std;

/*

void lin(int i , int n){
  if (i<1)
  return;
  cout<<i<<endl;
  lin(i-1,n);
}

int main(){
    int n;
    cin>>n;

    lin(n,n);
}

*/

// print linear number form 1 to n using backtracking

#include <iostream>
using namespace std;

/*
void back(int i , int n){
    if (i<1)
    return;
    back(i-1 , n);
    cout<<i<<endl;
}
int main (){
    int n;
    cin>>n;

    back(n,n);

    return 0;

}

*/

// print linear number form n to 1 using backtracking

#include <iostream>
using namespace std;

/*


void back(int i , int n){
    if (i>n)
    return;
    back(i+1 , n);
    cout<<i<<endl;
}
int main (){
    int n;
    cin>>n;

    back(1,n);

    return 0;

}

*/

// reverse an aaray using recusion

#include <iostream>
using namespace std;

/*

void reverseArray(int arr[], int l, int r)
{
    if (l >= r)
        return ;
    swap(arr[l], arr[r]);
    reverseArray(arr, l + 1, r - 1);
}

   int main() {
    int arr[] = {1, 3, 5, 6, 8, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reverse the array
    reverseArray(arr, 0, n - 1);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}

*/

#include <iostream>
using namespace std;

int fibs(int n)
{

    if (n <= 1)
        return n;

    int last = fibs(n - 1);
    int slast = fibs(n - 2);
    return last + slast;
}

int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;

    int result = fibs(n);
    cout << result;
}

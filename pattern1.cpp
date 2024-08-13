#include <iostream>
using namespace std;
void pattern1(int n)

{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n)

{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Print
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // Print
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // Space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;

        else
            start = 0;

        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }

        cout << endl;
    }
}

void pattern12(int n){
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // number
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

void pattern13(int n){
    int value = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << value;
            value = value + 1;
        }

        cout << endl;
    }
}

void pattern14(int n){

    for (int i = 0; i < n; i++)
    {
        char value = 'A';

        for (int j = 0; j <= i; j++)
        {
            cout << value;
            value++;
        }
        cout << endl;
    }
}

void pattern15(int n)
{

    for (int i = 0; i < n; i++)
    {
        char value = 'A';

        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << value;
            value++;
        }
        cout << endl;
    }
}

void pattern16(int n){
    char value = 'A';
    for (int i = n; i > 0; i--)
    {

        for (int j = 0; j <= n - i + 1; j++)
        {
            cout << value;
        }
        cout << endl;
        value++;
    }
}

void pattern17(int n){
    for (int i = 0; i < n; i++)
    {
        // char value = 'A';
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // print

        char value = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << value;
            if (j <= breakpoint)
                value++;
            else
                value--;
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int n){
    for (int i = 0; i < n; i++)
    {
        char value = 'E' - i;
        for (int j = 0; j <= i; j++)
        {
            cout << value;
            value++;
        }
        cout << endl;
    }
}

void pattern19(int n){
    int spacebreak = 0;
    for (int i = 0; i <n; i++)
    {
    //star
    for (int j = 1; j <= n-i; j++)
    {
        cout <<"*";
    }
    //space
    for (int j = 0; j < spacebreak; j++)
    {
        cout <<" ";
    }
    //star
    for (int j = 1; j <= n-i; j++)
    {
        cout <<"*";
    }
    spacebreak+=2;
    cout<<endl;
    }

    spacebreak = 2*n-2;
    for (int i = 1; i <= n; i++)
    {
       
        //star
    for (int j = 1; j <= i; j++)
    {
        cout <<"*";
    }
    //space
    for (int j = 0; j < spacebreak; j++)
    {
        cout <<" ";
    }
    //star
    for (int j = 1; j <= i; j++)
    {
        cout <<"*";
    }
    spacebreak -= 2;
    cout<<endl;
    }
    
  
}

void pattern20(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        
    }
}

int main()
{
    int n;
    cin >> n;

    pattern20(n);
}

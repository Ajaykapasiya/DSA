// Introduction to Linkedlist.

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    public:
    

    node (int data1)
    {
        data = data1;
        next = nullptr;
    }
};

int main ()
{
    vector<int> arr = {1,2,3,4};
    node* y = new node(arr[0]);
    //cout<<y<<'\n';
    cout<<y->data<<'\n';
}
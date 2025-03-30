// Search an element in a Linked List

#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    
    node(int data1 , node*next1)
    {
        data = data1;
        next = next1;
    }
    
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};



int checkIfPresent(node* head , int searchElement)
{
    node* temp = head;
    
    while(temp != NULL)
    {
        if(temp->data == searchElement)
        return 1;
        
        temp= temp->next;
    }
    return 0;
    
}

void printLL(node* head)
{
    while(head != NULL)
    {
      cout<<head->data<<" ";
      head = head->next;
    }
}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    
    node* head = new node(arr[0]);
    head->next = new node(arr[1]);
    head->next->next = new node(arr[2]);
    head->next->next->next = new node(arr[3]);
    head->next->next->next->next = new node(arr[4]);
    
   int val = 4;
   
   cout<<checkIfPresent(head , val);
   
   return 0;
    
}

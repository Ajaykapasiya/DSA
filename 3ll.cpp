// Insert at the head of a Linked List

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;

    // Constructor 1: Initializes both data and next pointer
     Node(int data1, Node* next1) {
        data = data1;
        next = next1;
     }

    public:
        // Constructor 2: Initializes data and sets next pointer to nullptr

    Node (int data1)
    {
         data = data1;
         next = nullptr;
         
    }
};

void printLL(Node* head)
{
    while(head != NULL)
    {
         cout << head->data << " ";
        head = head->next;
    }
}

Node* inserthead(Node* head , int val)
{
    Node* temp = new Node( val , head);
    return temp;
}

int main ()
{
    vector<int> arr = {1,2,3,4,5};
    int val = 10;
    
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    head->next->next->next->next = new Node(arr[4]);
    
    head = inserthead(head , val);
    
       printLL(head);

return 0;
}
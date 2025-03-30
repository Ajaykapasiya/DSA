// Delete Last Node of Linked List

#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    
    node(int data1 , node* next1)
    {
        data = data1;
        next = next1;

    }
    
    public:
    node(int data1){
    data = data1;
    next = nullptr;
    }
};

void printLL (node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

node* deleteTail(node* head)
{
    if(head == NULL || head->next == NULL)
    return NULL;


node* temp = head;
while(temp->next->next != NULL)
{
    temp = temp->next;
}
delete temp->next;
temp->next = nullptr;

return head;
}


int main()
{
    vector<int> arr = {1,2,3,4,5};
    
    node* head = new node(arr[0]);
    head->next = new node(arr[1]);
    head->next->next = new node(arr[2]);
    head->next->next->next = new node(arr[3]);
    head->next->next->next->next = new node(arr[4]);
    
    head = deleteTail(head);
    printLL(head);
}


// Reverse a Linked List


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node(int data1 , node* next1)
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


node* reverseLinkedList(node* head) {
  
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    node* newHead = reverseLinkedList(head->next);
    
  
    node* front = head->next;
    
 
    front->next = head;
    
 
    head->next = NULL;
  
    return newHead;

}

/*
  node* temp = head;
    node* prev = NULL;
    
    while(temp != NULL)
    {
        node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
        
    }
    return prev;
}

*/



void printll (node* head)
{

    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
        
    }

}



int main() {
    
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);


    cout << "Original Linked List: ";
    printll(head);
    
    cout<<endl;
    
    head = reverseLinkedList(head);
    cout << "Reversed Linked List: ";
   printll(head);

    return 0;
    
}

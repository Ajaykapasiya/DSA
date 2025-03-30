// Delete the Middle Node of the Linked List


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }
    
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};


void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* deleteMiddle(Node* head){
    
     if (head == NULL || head->next == NULL) {
        return NULL;
     }
     
    Node* slow = head;
    Node* fast = head;
    fast = head->next->next;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    slow->next = slow->next->next;
    return head;
    
}


int main() {
    // Creating a sample linked list: 
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    
    // Display the orignal linked list
    cout << "Orginal Linked List: ";
    printLL(head);
    
    cout<<endl;

    // Deleting the middle node
    head = deleteMiddle(head);

    // Displaying the updated linked list
    cout << "Orginal Linked List: ";
    printLL(head);

    return 0;
}


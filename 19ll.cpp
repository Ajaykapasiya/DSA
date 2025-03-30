// Remove N-th node from the end of a Linked List

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


Node* deleteNode(Node* head , int N){
    Node* fastp = head;
    Node* slowp = head;
    
    for(int i = 0 ; i< N ; i++)
        fastp = fastp->next;
        
        if(fastp == NULL)
        {
            return head->next;
        }
        
        while(fastp->next != NULL)
        {
            fastp = fastp->next;
            slowp = slowp->next;
        }
        
        Node* delnode = slowp->next;
        slowp->next = slowp->next->next;
        delete delnode;
        return head;
        
    
}


int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int N = 3;
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    head->next->next->next->next = new Node(arr[4]);

    // Delete the Nth node from the end 
    // and print the modified linked list
    head = deleteNode(head, N);
    printLL(head);
}

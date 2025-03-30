// Length of Loop in Linked List

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    
    int data;
    Node* next;
    
    Node(int data1 , Node*next1){
        data = data1;
        next = next1;
    }
    
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};


int lengthOfLoop(Node* head){
int cnt = 1;
    Node* slow = head;
    Node* fast = head;

while(fast != nullptr && fast->next != nullptr)
{
    slow = slow->next;
    fast = fast->next->next;
    
    if (slow == fast ){
       int cnt = 1;
       Node* temp = slow->next;
       while(temp != slow ){
           cnt++;
           temp = temp->next;
       }
       return cnt;
    }
}
  return 0;  
}

    
    
int main() {
    // Create a sample linked
    // list with a loop
    
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    // Create a loop from
    // fifth to second
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    
    // This creates a loop
    fifth->next = second; 

    int loopLength = lengthOfLoop(head);
    cout << "Length of the loop: " << loopLength << endl;
    

    return 0;
}

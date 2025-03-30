// Find middle element in a Linked List

// Brute Force Approach


#include <iostream>

#include <vector>

using namespace std;1

class node{
    public:
    
    int data;
    node* next;
    
    node (int data1 , node* next1){
    data = data1;
    next = next1;
    }
    


node(int data1)
{
    data = data1;
    next = nullptr;
}
};

node* convert2LL(vector<int> &arr){
node* head = new node (arr[0]);
node* prev = head;
for(int i = 1 ;i < arr.size(); i++)
{
    node* temp = new node(arr[i]);
    prev->next = temp;
    prev = temp;
}
return head;

}

void print(node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
        
    }
}


node* findMiddle(node* head){
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    node* temp = head;
    int cnt = 0;
    
    while(temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    
    int mid = cnt/2 +1;
    temp = head;
   
   while(temp != NULL)
   {
       mid = mid - 1;
       
       if(mid == 0){
       break;
       }
       temp = temp->next;
   }
   return temp;
}

int main()
{
    
    vector<int> arr ={1,2,3,4,5};
    node* head = convert2LL(arr);
    print(head);
    
    node* midEle = findMiddle( head);
    cout<<"middle element data is "<<midEle->data;

}






//  Optimal Approach




#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    
    int data;
    node* next;
    
    node(int data1 , node* next1){
        data = data1;
        next = next1;
    }
    
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

node* conver2LL( vector<int> &arr){
    node* head = new node (arr[0]);
    node* prev = head;
    for(int i = 1; i < arr.size() ; i++)
    {
        node* temp = new node(arr[i]);
        prev->next = temp;
        prev = temp;
    }
    return head;
 }

void print(node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
};

node* findMid(node* head)
{
    node* slow = head;
    
    node* fast = head;
    
    while( fast != NULL && fast->next != NULL )
    {
        
        slow = slow->next;
        
        fast = fast->next->next;
        
    }
    
    return slow;
    
}




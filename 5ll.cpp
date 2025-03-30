// Find the Length of a Linked List

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
    
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};


int lenghtOfLL(node* head)
{
    node* temp = head;
    int cnt = 0;
    
    while(temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
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
    
    cout<<lenghtOfLL(head)<<'\n';
}
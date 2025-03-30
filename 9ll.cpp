// Delete k , head and tail Node of a Doubly Linked List


#include <iostream>
#include<vector>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node *back;

    node (int data1, node *next1, node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

node* convertArr2LL(vector<int> &arr)
{
    node* head = new node (arr[0]);
    node* prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
       node* temp = new node(arr[i] , nullptr , prev);
       prev->next = temp;
       prev = temp;
    }
    
    return head;
}

void print(node* head)
{
    while(head!= nullptr)
{
   cout<<head->data<<" ";
   head= head->next;
}
}

node* deleteHead(node* head)
{
    if (head == nullptr || head->next == nullptr){
    return nullptr;
}

node* prev = head;
head = head->next;

head->back = nullptr;
prev->next = nullptr;
return head;

}

node* deleteTail(node* head)
{
     if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }
    
    node* tail = head;
    while(tail->next != nullptr)
    {
        tail = tail->next;
    }
    
    node* newtail = tail->back;
    newtail->next = nullptr;
    tail->back = nullptr;
    
    
    delete tail;
    return head;
}

node* removekelement(node* head , int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    int cnt = 0;
    node* knode = head;
    while(knode != NULL)
    {
        cnt++;
        if(cnt == k)
            break;
            knode = knode->next; 
    }
    node* prev = knode->back;
    node* front = knode->next;
    
    
    if(prev == NULL && front  == NULL)
    {
    return NULL;
    }
    
    else if(prev == NULL)
    {
        return deleteHead(head);
    }
    else if (front == NULL)
    {
        return deleteTail(head);
    }
    
    prev->next = front;
    front->back = prev;
    
    knode->next = nullptr;
    knode->back = nullptr;
    delete knode;
    
    return head;
    
}






int main(){
    vector<int> arr;
    arr.push_back(12);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(7);
    arr.push_back(4);

    
    node* head = convertArr2LL(arr);
    cout << "Doubly Linked List Initially: " << endl;
    print(head);
    
    cout << "\n\nAfter deleting the Head node: ";
    head = deleteHead(head);
    print(head);
    
     cout << "\n\nAfter deleting the Tail node: ";
    head = deleteTail(head);
    print(head);

cout << "\n\nAfter deleting the kth node node: ";
head = removekelement(head , 3);
print(head);

    return 0;

    
}

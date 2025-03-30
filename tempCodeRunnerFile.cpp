#include<bits/stdc++.h>

using namespace std;

struct Node {
    public:
    int data;
    Node* next;

    public:
    Node( int data1  ){
        data = data1;
        next = nullptr;
    }
};

Node* converArr2LL(vector<int> &arr)
{
    Node*head = new Node(arr[0]);
    Node*mover = head;
    for(int i= 1; i<arr.size(); i++)
    {
      Node*temp = new Node(arr[i]);
      mover->next = temp;
      mover = temp;
    }
    return head;
}





int main ()
{
  vector<int> arr = {2, 2, 1, 1, 1, 2, 2, 3, 3};

    Node* head = converArr2LL(arr);
    cout<<head->data;
}



int main ()
{
  vector<int> arr = {2, 2, 1, 1, 1, 2, 2, 3, 3};

    Node* y = new Node (arr[0] , nullptr);
    Node* head = converArr2LL(arr);
    cout<<head->data;
}
#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int data1, Node* next1 = nullptr) : data(data1), next(next1) {}
};

int main() {
    // Initialize vector with values
    vector<int> arr = {1, 2, 3, 4, 5};
    
    // Create a new Node using the first value in the vector
    Node* y = new Node(arr[0]);
    
    // Print the data of the node
    cout << "Node data: " << y->data << endl;

    // Clean up the allocated memory
    delete y;

    return 0;
}

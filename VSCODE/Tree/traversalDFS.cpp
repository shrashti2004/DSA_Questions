// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

Node* Create() {
    cout << "Enter data: ";
    int data;
    cin >> data;

    if (data == -1)
        return nullptr;
    Node* root = new Node(data);

    cout << "Enter left child" << endl;
    root->left = Create();

    cout << "Enter right child" << endl;
    root->right = Create();

    return root;
}

void PrintTreePreOrder(Node* root) {
    if (root == nullptr)
        return;
        cout << root->data << " ";
       PrintTreePreOrder(root->left);
       PrintTreePreOrder(root->right);
}
void PrintTreeInOrder(Node* root) {
    if (root == nullptr)
        return;

    PrintTreeInOrder(root->left);
    cout << root->data << " ";
    PrintTreeInOrder(root->right);
} 
void PrintTreePostOrder(Node* root) {
    if (root == nullptr)
        return;
        
       PrintTreePostOrder(root->left);
       PrintTreePostOrder(root->right);
       cout << root->data << " ";
}
int main() {
    Node* root = Create();
    PrintTreePreOrder(root);
     cout<<endl;
     PrintTreeInOrder(root);
     cout<<endl;
     
     PrintTreePostOrder(root);
     cout<<endl;
return 0;
}

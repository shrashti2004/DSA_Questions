#include <iostream>
using namespace std;

struct Tree{
    public:
    
    int data;
    Tree *left;
    Tree *right;
    
    Tree(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Tree* create(){
    int data;
    cin>>data;
    
    if (data == -1){
        return NULL;
    }
    
    Tree* node = new Tree(data);
   
    node->left = create();
    
    node->right = create();
     
     return node;
}

void pre(Tree* root){
    if(root != nullptr){
        cout<<root->data;
       pre(root->left);
       pre(root->right);
        
    }
}
int main() {
    // Write C++ code here
   Tree* node = create();
   pre(node);
   
   return 0;
}

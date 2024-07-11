#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void printRightView(Node* root){
    if(root == NULL) return;

    queue<Node *> q;
    
    while (!q.empty())
    {
        
    }
    
}

void printLeftView(Node* root);
int main()
{
    return 0;
}
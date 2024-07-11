#include<iostream>
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

int count_nodes(Node* root){
    if (root == NULL)
    {
        return 0;
    }
    return count_nodes(root->left) + count_nodes(root->right) + 1;
}

int sumofNodes(Node* root){
    if(root == NULL) return 0;
    int sum = sumofNodes(root->left) + sumofNodes(root->right) + root->data;
    return sum;
}

int heightOfTree(Node* root){
    if(root == NULL) return 0;
    
    int leftHeight = heightOfTree(root->left);
    int righHeight = heightOfTree(root->right);

    return max(leftHeight, righHeight) + 1;
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout << count_nodes(root) <<endl;
    cout <<sumofNodes(root) <<endl;
    cout <<heightOfTree(root);
    return 0;
}
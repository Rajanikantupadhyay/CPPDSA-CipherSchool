//All doubly operation should be donep̣'

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head, int data){
    Node* newNode = new Node(data);
    Node* temp = head;
    
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void display(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout <<temp->data <<" ";
        temp = temp->next;
    }
    
}
int main()
{
    Node* head = NULL;
    insert_at_tail(head,10);
    insert_at_tail(head,20);
    insert_at_tail(head,30);
    display(head);
    return 0;
}
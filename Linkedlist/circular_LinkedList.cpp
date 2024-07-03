#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insert_at_begining(Node* &head, int data){
    Node* newNode = new Node(data);
    
    if (head == NULL)
    {
        newNode->next = newNode;
        head = newNode;
        return;
    }
    
    Node* temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node* &head,int val){
    if (head == NULL)
    {
        insert_at_begining(head, val);
    }
    
}

void delete_by_pos(Node* &head, int pos){
    int count = 1;
    Node* temp = head;
    while (count != (pos-1))
    {
        temp = temp->next;
        count++;
    }
    
}

void deleteHead(Node* &head){
    Node* temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    Node* toDelete = head;
    head = head->next;
    temp->next = head;
    delete toDelete;
}

void display(Node* head){
    Node* temp = head;
    do
    {
        cout <<temp->data <<" ";
        temp = temp->next;
    } while (temp != head);
    
}

int main()
{
    Node* head = NULL;
    insert_at_begining(head,10);
    insert_at_begining(head,20);
    insert_at_begining(head,30);
    insert_at_begining(head,40);
    display(head);
    deleteHead(head);
    cout <<endl;
    display(head);
    return 0;
}
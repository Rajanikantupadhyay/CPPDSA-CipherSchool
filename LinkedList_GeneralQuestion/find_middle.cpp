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
void insert(Node* &head,int data){
    Node* newNode = new Node(data);
    Node* temp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
Node* findMiddle(Node* head){
    
    if (head == NULL)
    {
        return NULL;
    }
    
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout <<"Middle value of the list is : "<< slow->data;
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
    insert(head,5);
    insert(head,10);
    insert(head,15);
    insert(head,4);
    insert(head,5);
    display(head);
    cout <<endl;
    findMiddle(head);
    return 0;
}
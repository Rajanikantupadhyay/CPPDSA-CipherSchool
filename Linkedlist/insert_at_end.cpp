#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
void insertintoTail(Node* &head, int val){
    Node* node1 = new Node(val);

    if (head == NULL)
    {
        head = node1;
        return;
    }
    
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node1;
}

bool searchKey(Node* head, int key){
    Node* temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void display(Node* head){
    Node* temp = head;
    while (temp != NULL )
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    
}
int main()
{
    Node* head = NULL;
    insertintoTail(head,5);
    insertintoTail(head,10);
    insertintoTail(head,15);
    display(head);
    bool res = searchKey(head,11);
    if(res){
        cout <<"\nYes.";
    }else{
        cout <<"\nNo";
    }
    return 0;
}
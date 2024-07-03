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
    Node* n1 = new Node(data);
    n1->next = head;
    head = n1;
}

void display(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout <<temp->data <<" ";
        temp = temp->next;
    }
}

void delete_by_Key(Node* &head, int key){
    Node* temp = head;
    Node* temp2;

    if (temp->data == key)
    {
        Node* deleteNode = temp;
        head = temp->next;
        delete deleteNode;
        return;
    }
    
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            Node* deletenode = temp;
            temp2->next = temp->next;
            delete deletenode;
            break;
        }
        temp2 = temp;
        temp = temp->next;
    }
    
}
int main()
{
    Node* head = NULL;
    insert_at_begining(head,10);
    insert_at_begining(head,15);
    insert_at_begining(head,16);
    insert_at_begining(head,17);
    insert_at_begining(head,18);

    display(head);
    delete_by_Key(head,18);
    cout <<endl;
    display(head);
    delete_by_Key(head,17);
    cout <<endl;
    display(head);
    return 0;
}
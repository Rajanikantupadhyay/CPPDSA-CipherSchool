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

void createLoop(Node* &head){
    Node* random ;
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    random = head->next;
    temp->next = random;
}

Node* loopDetector(Node* head){
    if(head == NULL) return NULL;
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && slow != NULL)
    {
        slow = slow->next;
        if (fast->next != NULL)
        {
            fast = fast->next->next;
        }
        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}

Node* getStartingPoint_of_Loop(Node* head){
    if (head == NULL) return NULL;
    Node* intersection = loopDetector(head);
    Node* slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return intersection;
}

void removeLoop(Node* head){
    if (head == NULL)
    {
        return;
    }
    Node* start = getStartingPoint_of_Loop(head);
    Node* temp = start;
    while (temp->next != start)
    {
        temp = temp->next;
    }
    temp->next = NULL;
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
    insert(head,20);
    insert(head,25);
    insert(head,30);
    createLoop(head);
    // display(head);
    Node* intersect = loopDetector(head);

    cout << "Loop detected at " <<intersect->data <<endl;
    Node* val = getStartingPoint_of_Loop(head);
    cout <<"Starting point of the Loop is: " <<val->data <<endl;
    cout <<"After Removing the loop:" <<endl;
    removeLoop(head);
    display(head);
    return 0;
}
#include <iostream>
using namespace std;

// add value in linked list...

class Node{
public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    };

};
// insert first
void insert_at_start(Node **n, int value){
    Node *new_node_st = new Node(value);
    Node *temp = *n;
    new_node_st->next = *n;
    *n = new_node_st;
    new_node_st = temp;
   


}

// insert end
void insert_at_tail(Node *n , int value){
    Node *new_node = new Node(value);
    if (n->next == NULL){
        n->next = new_node;
        return;
    }
    // Node *n = head;
    while(n->next != NULL){
        n = n-> next;
    }
    n->next = new_node;
}

void print_data(Node *n){
   
    while(n != NULL){
        cout << n->data << " ";
        n = n-> next;
        if (n == NULL){
            cout << "find null " << "That's why I can't access next data...";
        }
    }
}
int main (){

    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    print_data(head);
    cout << endl;
    insert_at_tail(head,15);
    print_data(head);
    cout << endl;
    insert_at_start(&head, 13);
    print_data(head);

    return 0;
}
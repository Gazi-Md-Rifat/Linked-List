#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    };
    Node(){

    };

};

//reverse functiio...
Node *reverse_function(Node *&head){
    Node *current_ptr = head;
    Node *next_ptr ;
    Node *previous_ptr = NULL;
    while(current_ptr != NULL){
        next_ptr = current_ptr->next;
        current_ptr->next = previous_ptr;

        // increase pointer..
        previous_ptr = current_ptr;
        current_ptr = next_ptr;
    }
    head = previous_ptr;
    return head;
}
// print functioin..

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
    Node *reverse_head= reverse_function(head);
    print_data(reverse_head);


    return 0;
}
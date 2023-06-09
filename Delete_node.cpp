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

// delete functiion..
void delete_function(Node *head){
    int i = 1;
    while (i < 2){ // 3rd node i delete...
        head = head->next;
        i++;
    }
    head->next = head->next->next;
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
    delete_function(head);
    print_data(head);


    return 0;
}
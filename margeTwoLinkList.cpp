#include <iostream>
using namespace std;


// Hacker Rank Question Link : https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem

class SinglyLinkedListNode{
    public:
    int data;
    SinglyLinkedListNode *next;
};

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode *temp = new SinglyLinkedListNode;
    SinglyLinkedListNode *root = temp;
    while (head1 && head2){
        if (head1->data < head2->data){
            temp->data = head1->data;
            head1 = head1->next;
        }
        else {
            temp->data = head2->data;
            head2 = head2->next;
        }
        temp->next = new SinglyLinkedListNode;
        temp = temp->next;
    }
    if (head1){
        temp->data = head1->data;
        temp->next = head1->next;
    }
    if (head2){
        temp->data = head2->data;
        temp->next = head2->next;
    }
    
    return root;
}



int main(){

    SinglyLinkedListNode *head1 = new SinglyLinkedListNode;
    head1->data = 1;
    SinglyLinkedListNode *one = new SinglyLinkedListNode;
    head1->next = one;
    one->data = 3;
    SinglyLinkedListNode *two = new SinglyLinkedListNode;
    two->data = 7;
    one->next = two;
    two->next = NULL;


    SinglyLinkedListNode *c = new SinglyLinkedListNode;
    c->data = 3;
    SinglyLinkedListNode *d = new SinglyLinkedListNode;
    c->next = d;
    d->data = 4;
    d->next = NULL;


    SinglyLinkedListNode *node = mergeLists(head1, c);
    while (node){
        cout << node->data << " ";
        node = node->next;
    }

    return 0;
}
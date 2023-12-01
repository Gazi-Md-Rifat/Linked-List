#include <iostream>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem

class SinglyLinkedListNode{
public:
    int data;
    SinglyLinkedListNode *next;
};

SinglyLinkedListNode *makeList(int arr[], int n, SinglyLinkedListNode *node){
    SinglyLinkedListNode *result = node;
    for (int i = 0; i < n; i++){
        int x = arr[i];
        node->data = x;
        if (i == n -1){
            node->next = NULL;
            break;
        }
        node->next = new SinglyLinkedListNode;
        node = node->next;
    }

    return result;
}


SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {

    SinglyLinkedListNode *root = llist;

    while (llist->next){

        if (llist->data == llist->next->data){
            llist->next = llist->next->next;
            continue;
        }
        llist = llist->next;
    }

    return root;
}

int main(){

    SinglyLinkedListNode *node = new SinglyLinkedListNode;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    SinglyLinkedListNode *root = makeList(arr, n, node);

    
    SinglyLinkedListNode *newNode = removeDuplicates(root);

    while (newNode){
        cout << newNode->data << " ";
        newNode = newNode->next;
    }

    return 0;
}
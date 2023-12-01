// Hacker Rank Question Link : https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem?isFullScreen=true

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode *head = llist;
    while(llist){
        if (!llist->prev && (llist->data > data || llist->data == data)){ // check for fisrt place..
            DoublyLinkedListNode *node = new DoublyLinkedListNode(0);
            node->data = data;
            node->next = llist;
            node->prev = NULL;
            llist->prev = node;
            
            return node;
        }
        else if (!llist->next && (llist->data < data || llist->data == data)){ // check for last place..
            DoublyLinkedListNode *node = new DoublyLinkedListNode(0);
            node->data = data;
            node->next = NULL;
            node->prev = llist;
            llist->next = node;
            return head;
        }
        else if (llist->next && llist->data < data && (llist->next->data > data || llist->next->data == data)){ // check for midle in two node..
            DoublyLinkedListNode *node = new DoublyLinkedListNode(0);
            node->data = data;
            llist->next->prev = node;
            node->next = llist->next;
            node->prev = llist;
            llist->next = node;
            return head;
        }
        llist = llist->next;
    }
    return head;
}

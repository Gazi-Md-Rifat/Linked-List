// Hacker Rank Question Link : https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem?isFullScreen=true


// I didn't understand  question and ans..ans collected from Discussion ...

DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
  
  if(llist == NULL){
    return NULL;
  }
  DoublyLinkedListNode*curr = llist;
  
  
  while(curr){
    DoublyLinkedListNode*back = curr->prev;
    DoublyLinkedListNode*front = curr->next;
      
    curr->next = back;
    curr->prev = front;
    
    curr = front;    
  }
  while(llist->prev){
    llist = llist->prev;
  }
  return llist;

}
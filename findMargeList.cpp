// Hacker Rank Question Link : https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem?isFullScreen=true




// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *temp1 = head1;
    SinglyLinkedListNode *temp2 = head2;
    int ans = 0;
    int list1 = 0, list2 = 0;
    while(temp1 || temp2){
        if (temp1){
            temp1 = temp1->next;
            list1++;
        }
        if (temp2){
            temp2 = temp2->next;
            list2++;
        }
    }
    while(head1 || head2){
        if (list1 > list2){
            head1 = head1->next;
            list1--;
        }
        else if (list1 < list2){
            head2 = head2->next;
            list2--;
        }
        else {
            if (head1 == head2){
                ans = head1->data;
                break;
            }
            head1 = head1->next;
            head2 = head2->next;
            list1--;
            list2--;
        }
    }
    
    return ans;
}
#include <iostream>
using namespace std;

// cycle linked list..

class Node{
public:
    int data;
    Node *next;
    // paramitarised constractor..
    Node(int value){
        data = value;
        next = NULL;
    };
    Node(){
    // deafult constractor..
    };
};

bool detect_link_list(Node *head){ // checking liked list have cycle or not.....
    Node *first_ptr = head;
    Node *slow_ptr = head;
    while (first_ptr != NULL && first_ptr->next != NULL){
        first_ptr = first_ptr->next->next;
        slow_ptr = slow_ptr->next;
        if (first_ptr == slow_ptr){
            return true;
        }
    }
    return false;  
}
// remove cycle from linked list......
void remove_cycle(Node *head){
    Node *first_ptr = head;
    Node *slow_ptr = head;
    while (first_ptr != NULL && first_ptr->next != NULL){
        first_ptr = first_ptr->next->next;
        slow_ptr = slow_ptr->next;
        if (first_ptr == slow_ptr){
            first_ptr = head;
            while(first_ptr->next!= slow_ptr->next){
                first_ptr = first_ptr->next;
                slow_ptr = slow_ptr->next;
            }
            slow_ptr->next = NULL;
            return ;
        }
    }

}
void print_info(Node *head){
    while(head != NULL){
        cout << head->data << "-> ";
        head = head->next;
    }
}

int main (){

    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);
    Node *sixth = new Node(6); //create cycle in this point......
    Node *seventh = new Node(7);
    Node *eight = new Node(8);
    Node *nine = new Node(9);
    Node *ten = new Node(10);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eight;
    eight->next = nine;
    nine->next = ten;
   // ten->next = NULL; // .......if i use this line so cycle will not create.... 
    ten->next = sixth; //sixth; // am not last node make NULL. am make sixth node address on last node address..so when we go last thats men ten then we go again sixth node..becauge am linked sixth..this list have no ending point..becauge am nevet can find null point and cant't break..........this is cycle linked list...
    bool result = detect_link_list(head);
    if(result){
        cout << "This Linked List Have CYCLE" << endl;
        cout << "Do your want to remove CYCLE form your linked List ... SO Type YES  otherwise NOT : ";
        string ans;
        cin >> ans;
        if (ans == "YES"){
            remove_cycle(head);
            cout << "your Linked List is : " << endl;
            print_info(head);
        }
        else {
            cout << "Good Bye";
        }

    }
    else{
        cout << "This Linked List Have No CYCLE";
        cout << endl;
        cout << "your Linked list is : " << endl;
        print_info(head);
    }
    


    return 0;
}
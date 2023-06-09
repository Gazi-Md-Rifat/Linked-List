#include <iostream>
using namespace std;

class Linked{
public:
    int age;
    Linked* next;
};

void add_value(Linked **n, int p){
    Linked *add = new Linked; // Create new pointer...
    add->age = p;
    add->next = *n;
    *n = add; // new created pointer set head..thats mean add pointer will be first pointer...
    
}

void print_info(Linked *n){
   
    while(n != NULL){
        cout << n->age << " ";
        n = n-> next;
        if (n == NULL){
            cout << "find null " << "That's why I can't access next data...";
        }
    }
}

int main (){
  
    Linked *first = new Linked;
    Linked *second = new Linked;
    Linked *third = new Linked;
    Linked *fourth = new Linked;
    Linked *fifth = new Linked;
    first->age = 12;
    first->next = second;
    second->age = 14;
    second->next = third;
    third->age = 15;
    third->next = fourth;
    fourth->age = 16;
    fourth->next = fifth;
    fifth->age = 18;
    fifth->next = NULL;

    add_value(&first, 3); // pass locaton of first pointer 
    print_info(first);
    cout << endl << first->age; // i want to previous head value....thats mean first pointer..but i can't...becauge first pointer set for add pointer....
   







   



    return 0;
}
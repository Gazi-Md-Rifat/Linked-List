#include <iostream>
using namespace std;

class Linked{
public:
    int age;
    Linked* next;
};

Linked *add_value(Linked **n, int p){ // object return type funtion..
    Linked *add = new Linked; // Create new pointer...
    add->age = p;
    add->next = *n;
    Linked *temp = *n;
    *n = add;
    add = temp;

    cout << add->age << endl; // this is the previous head...
    return add;
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

    Linked *retn = add_value(&first,3);
    print_info(first);
    cout << retn->age; // i can access my previous head....


    return 0;
}
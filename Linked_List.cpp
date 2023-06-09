#include <iostream>
using namespace std;

class Linked{
public:
    int age;
    Linked* next;
};
 /*
 >>>>>>>>>>>if i use part 2...........

 void set_value(int array[] , int n, Linked *t){

    
    for (int i = 0; i < n; i++){
        // int x = array[i];
        Linked *ptr_i = new Linked; // create pointer ...
        t->age = array[i];
        if (i == n -1){
            t->next = NULL;
            break;
        }
        t->next = ptr_i; // set address in next variable for link next node..
        t = ptr_i;
        
    }
}
 */

void print_info (Linked *n){
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
    print_info(first);






    /*
  >>>>>>>>>>>>>>>>  this is part 2......... Try to make different......

    int n = 5;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    set_value(array, n, first);
    cout << endl;
    */

   



    return 0;
}
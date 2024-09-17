#include <iostream>
using namespace std;

struct Node {
    char val;
    Node* next = nullptr;
    Node(int val) : val(val) {}
    Node(int val, Node* next) : val(val), next(next) {}
};

Node* middle(Node* head){
    Node *fast = head;
    Node *slow = head;

    while (fast != nullptr && fast -> next != nullptr){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    
    return slow == nullptr ? nullptr : slow;
}

Node* reverse(Node* head){

    Node * prev = nullptr;
    Node * curr = head; 

    while(curr != nullptr ){
        Node *next  = curr -> next;
        curr-> next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
    return head;
}


void print(Node* head) {
    Node* curr = head;
    
    while (curr != nullptr) {
        std::cout << curr->val;
        curr = curr->next;
    }
     cout << "\t";
}




bool isPalindrome(Node* head) {

        //find the middle of list
        Node* mid = middle(head);

        //reverse the list to get the last node
        Node* last = reverse(head);

        //reverse again to get the first node 
         Node* first = reverse(last);
        

        //while the node that we work with isnt the middle 
        while( first != mid){
            
            //checking if the two pointers have the same value if not then the list isnt a Palindrome 
            if (first->val == last->val){

                // if so, then we make two temp pointers to later delete the data off the heap (memory management)
                Node* temp = first;
                Node* temp2 = last;

                //move our first pointer up one
                first = first->next;

                //reverse the list to move our last pointer up one (or down what ever you like lol)
                last = reverse(first);

                //moving last node up
                last = last->next;

                //reversing again to allow for first node pointer to move up during the next loop. 
                //would be easier with a doubly linked list but we work with what we have
                reverse(last);

                //managing memory and deleting the old nodes that are no longer in the list.
                delete(temp);
                delete(temp2);
                
                        
                      
            }else{
                 return false;
              
            }
         }
     return true;
}


void test1() {
    Node* a4 = new Node('a');
    Node* a3 = new Node('b', a4);
    Node* a2 = new Node('b', a3);
    Node* a1 = new Node('a', a2);

    std::cout << "Test 1: ";
    print(a1);
    std::cout << " : ";

    if (isPalindrome(a1)) std::cout << "Passed" << std::endl;
    else std::cout << "Failed" << std::endl;
}

void test2() {
    Node* a3 = new Node('a');
    Node* a2 = new Node('b', a3);
    Node* a1 = new Node('a', a2);

    std::cout << "Test 2: ";
    print(a1);
    std::cout << " : ";

    if (isPalindrome(a1)) std::cout << "Passed" << std::endl;
    else std::cout << "Failed" << std::endl;
}

void test3() {
    Node* a1 = new Node('a');

    std::cout << "Test 3: ";
    print(a1);
    std::cout << " : ";

    if (isPalindrome(a1)) std::cout << "Passed" << std::endl;
    else std::cout << "Failed" << std::endl;
}

void test4() {
    Node* a7 = new Node('r');
    Node* a6 = new Node('a', a7);
    Node* a5 = new Node('c', a6);
    Node* a4 = new Node('e', a5);
    Node* a3 = new Node('c', a4);
    Node* a2 = new Node('a', a3);
    Node* a1 = new Node('r', a2);

    std::cout << "Test 4: ";
    print(a1);
    std::cout << " : ";

    if (isPalindrome(a1)) std::cout << "Passed" << std::endl;
    else std::cout << "Failed" << std::endl;
}

int main() {
    test1();
    test2();
     test3();
     test4();
}
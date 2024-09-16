#include <iostream>
 using namespace std;
class linked_list{
    public:
        linked_list(){}

        int remove(int pos){
            int val= (int)NULL;
              Node* prev = head;
             Node* curr = head->next;
             for (int i = 1; i < pos; i++ ){
            prev = curr;
            curr = head->next;
        }
        val = curr->val;
        prev->next = curr->next;
        delete curr;
        m_size--;
        return val;
        }

        void push_front(int val){
            Node* temp = new Node(val);
            temp->next = head;
            head = temp;
            m_size ++;
        }

        int pop_front(){
            if(empty()){
                return(int)NULL;
            }
            Node* temp = head;
            head = head->next;
            m_size--;
            int val = temp->val;
            delete temp;
            return val;
  

        }

    void insert(int pos, int val){
         if(empty() || pos < 1){
               push_front(val);
               return;
            }

        Node* prev = head;
        Node* curr = head->next;
        for (int i = 0; i <= pos; i++ ){
            prev = curr;
            curr = head->next;
        }

        Node* temp = new Node(val, curr);
        prev->next = temp;
        m_size++;

    }


    void print(){
        Node* curr = head;
        while (curr != nullptr){
            cout << curr->val << endl;
            curr = curr->next;
        }
    }

    bool empty(){
        return head == nullptr;
    }
    int size(){
        return m_size;
    }

    private:
    struct Node{
        int val;
        Node* next = nullptr;
        Node(int val) : val(val){}
        Node(int val, Node* next ) : val(val), next(next){}
        
    };
    
    Node* head = nullptr;
    int m_size = 0;




};

int main(){
cout << "-stack-" << endl;

linked_list stack;

stack.push_front(0);
stack.push_front(1);
stack.push_front(2);
stack.push_front(3);

stack.print();

cout << "---" << endl;

stack.pop_front();
stack.print();

cout << "-list-" << endl;
linked_list list = stack;

list.insert(0,3);
stack.print();
cout << "---" << endl;

list.remove(3);
list.print();

}
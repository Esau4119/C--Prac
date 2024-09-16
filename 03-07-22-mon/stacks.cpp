#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void printRev (vector<int>& a){
    stack<int> b {};
    for (int n : a){
            b.push(n);
        }

    while (!b.empty()){
        cout << b.top()<<endl;
        b.pop();
        }
}

void compute (string s){
    stack<char> b {};
    for (char n : s){
            b.push(n);
        }

    while (!b.empty()){
        char t = b.top();
        // if (t == "+"){
        
        // }

        

        cout << b.top()<<endl;
        b.pop();
        }

}
int main (){
vector<int> a {1,2,3,4,5,6,7};

printRev(a);
cout<< endl;

// 2 + 2 - > infix notation where operater is inbetween 
// operand operator operand
// 22 + -> postfix
// operand operand operator 
// prints the output of the post fix expression 
// The expression will only have plus and minus
// some digits in from of 322+
compute("33+");
}
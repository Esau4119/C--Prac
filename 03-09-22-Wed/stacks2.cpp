#include <iostream>
#include <stack>
#include <vector>
using namespace std;


bool isOperator (char c){
 return (c == '+') || (c == '-');
}
int operate(int a, int b, char c){
    switch (c){
        case '+':
         return a + b;
          case '-':
         return a - b;
    }
}

void compute (string s){
    stack<char> digits;
    for (char c : s){
        if (isOperator(c)){
            int b = digits.top();
                digits.pop();
            int a = digits.top();
                digits.pop();

                digits.push(operate(a,b,c));

        }else{
            digits.push(c-'0');
        }
          
        }
        cout << digits.top() << endl;

}
int main (){
vector<int> a {1,2,3,4,5,6,7};


// 2 + 2 - > infix notation where operater is inbetween 
// operand operator operand
// 22 + -> postfix
// operand operand operator 
// prints the output of the post fix expression 
// The expression will only have plus and minus
// some digits in from of 322+
compute("33+");
}
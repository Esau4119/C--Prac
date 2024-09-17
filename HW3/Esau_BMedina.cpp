#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Implement this function
// input a string with parenthesis
// return true if parenthesis are valid, false if not\


/**
 * 
 * You can assume every character is either an open or closing parenthesis/bracket.
 * Your code should check that every opening parenthesis/bracket has a corresponding closing parenthesis/bracket.
 * 
 */

bool isValid(string s) {
    stack<char> characters;
     bool decider;
  // parenthesis
  int oP =0;
  int cP =0;
  // normal brackets
  int oB =0;
  int cB =0;
  // squiggly brackets
  int oSB =0;
  int cSB =0;
    // adding into our stack
    for (char c : s){
        characters.push(c);
        
    }
    //checking if we have a pair
        while(characters.size() > 0 ){
              char currentChar =  characters.top(); // closing
                        characters.pop();

          if  (currentChar == '[' && cB >= 1){
             oB++;
          } else if  (currentChar == '{'&& cSB >= 1){
            oSB++;
          }else if  (currentChar == '('&& cP >= 1){
            oP++;
          }else if  (currentChar == ']'){
            cB++;
          }else if  (currentChar == '}' ){
            cSB++;
          }else if  (currentChar == ')' ){
            cP++;
          }
     
        }     
     
        if (oB == cB && oP == cP && oSB == cSB){
          decider = true;
        }else{
         
          decider = false;
        }
     
       return decider;
  
}



int main(int argc, const char * argv[]) {
    
    if (isValid("()")) {
        cout << "Test 1 passed" << endl;
    } else {
        cout << "Test 1 failed" << endl;
    }
    
    if (isValid("((){}[])")) {
        cout << "Test 2 passed" << endl;
    } else {
        cout << "Test 2 failed" << endl;
    }
    
    if (!isValid("(]")) {
        cout << "Test 3 passed" << endl;
    } else {
        cout << "Test 3 failed" << endl;
    }
}

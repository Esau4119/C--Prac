#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
using namespace std;



/**
 n = 10
 n = 9
 n = 8
 ...
 n = 2
 n = 1
 n = 0


 */

 void printForward (int n ){
  
     if ( n == 0) return;
         
        printForward(n-1);
        cout << n << endl;
     
 }
 /**
 n = 10
 n = 9
 n = 8
 ...
 n = 2
 n = 1
 n = 0


 */
 void printbackward (int n ){
     
     if ( n == 0) return;
     cout << n << endl;
     printbackward(n-1);
 }

 int next(list <int>& arr){}
  void printListBackward (list <int>& arr){
  
     if ( arr.size() == 0) return;
        int n = next(arr);

        printListBackward(arr);
        cout << n << endl;
     
 }
  void printListForward(list <int>& arr){
  
     if ( arr.size() == 0) return;
        int n = next(arr);
        cout << n << endl;
        printListBackward(arr);
      
     
 }

unordered_map<int,int> fibMemo;

int fib (int n ){
    if (n <= 1) return n;

    // if i dont find in fibmemo
    if(fibMemo.count(n) < 1 ){
        fibMemo[n] = fib(n-1) + fib(n-2);
    }
    return fibMemo[n];
}


int climbStairs(int n){
     
    
        if (n <= 2){
            return n;
        }    
        
        if(fibMemo.count(n) < 1 ){
            fibMemo[n] = fib(n-1) + fib(n-2);
            return fibMemo[n];
         }
       return fibMemo[n];

        }
           
     





int main(){
    int n = 10;

    cout << "Print nums 1 to" ;
    cout << "Print list forward" << n << endl;
    printForward(n);
     cout << "Print list backward" << n << endl;
    printbackward(n);

    //  cout << "Print fib" << endl;
    // cout << fib(10) << endl;

    cout << " Climb N Stairs" << endl;
    cout << climbStairs(10);

}


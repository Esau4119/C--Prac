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

int fib (int n ){
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
int main(){
    int n = 10;

    cout << "Print nums 1 to" ;
    cout << "Print list forward" << n << endl;
    printForward(n);
     cout << "Print list backward" << n << endl;
    printbackward(n);

}


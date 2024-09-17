
/**
 *  Author: Esau Bojorquez Medina
 *  class: CSC 340-06
 *  date: 02/08/22
 * 
 */
#include <iostream>
using namespace std;


// This method checks if a number is divisable by 3
bool fizz(int num){
if ( num % 3 == 0 ){
        return true;
    }else{
        return false;
    }

    
}

// This method checks if a number is divisable by 5
bool buzz(int num){
if ( num % 5 == 0 ){
        return true;
    }else{
        return false;
    }

    
}

int main (){

    int userNum;

    cout << "Enter a number: " ;

    cin >> userNum ;


    for(int i = 1; i <= userNum; i ++){
        // cout << i << endl;
        if ( buzz(i) == true && fizz(i) == true ){
            // calling both methods to see if both return true. If so then we output "FizzBuzz"
            cout << "FizzBuzz"<< endl;

        }else if(buzz(i) == true){
            // calling the buzz method to see if it returns true. If so then we output "Buzz"
            cout << "Buzz" << endl;

        }else if(fizz(i) == true){
            // calling the fizz method to see if it returns true. If so then we output "Fizz"
            cout << "Fizz" << endl;
            
        }else{
            cout << i << endl;
        }

    }

}
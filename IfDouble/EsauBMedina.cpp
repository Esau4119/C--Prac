#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


bool checkMap(vector<int> arr) {

  unordered_map<int, int> testArr;
   

   // add our array into the map 
  for (int i = 0; i < arr.size(); i++) {
    testArr[arr[i]] = i; 
  } 


// check if the map has a double.
  for (int i = 0; i < arr.size(); i++) {
    int targetDouble =  arr[i]*2;
    if (testArr.count(targetDouble) > 0 && testArr[targetDouble] != i) { 
      return true; 
    }
  } 

 return false;
}


bool checkIfExists(vector<int>& arr) {

 return checkMap(arr);
    

}


void test(vector<int>& arr, bool expected, int num) {
    if (checkIfExists(arr) != expected) {
        cout << "Test #" << num << " Failed" << endl;
        cout << "Test Input: [ ";
        for (int n : arr) {
            cout << n << " ";
        }
        cout << "]" << endl << endl;
    } else {
        cout << "Test #" << num << " Succeeded" << endl << endl;
    }
}

int main(int argc, const char * argv[]) {
    vector<int> t1 { 10, 2, 5, 3 };
    bool exp1 = true;
    
    test(t1, exp1, 1);
    
    vector<int> t2 { 7, 1, 14, 11 };
    bool exp2 = true;
    
    test(t2, exp2, 2);
    
    vector<int> t3 { 3, 1, 7, 11 };
    bool exp3 = false;
    
    test(t3, exp3, 3);
    
    return 0;
}

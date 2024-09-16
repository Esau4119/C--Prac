#include <iostream>

using namespace std;


int main(){

cout << "basic pointers" << endl;


int item = 10; // normal variable
int& item_ref = item; //  reference variable
int* item_ptr = &item; //  pointer declaration reads as take
//the address from item and 
//assign it to item_ptr


cout << "the Value of item: " ;
cout << item << endl ;

cout << "the Value of item_ref: " ;
cout << item_ref << endl ;

cout << "the Value of &item_ref: " ;
cout << &item_ref << endl ;

cout << "the Value of &item: " ;
cout << &item << endl ;



cout << "the Value of *item_ptr: " ;
cout << *item_ptr << endl ;

cout << "the Value of item_ptr: " ;
cout << item_ptr << endl ;


// ******************************
cout << "\n\nArray Pointers";
// ******************************

int* items = new int[10];// array allocation with size known at compile

for (int i = 0 ; i < 10 ; i ++ ){
    items[i] = i; // items + (i * sizeof(int))
}

cout << "enters a number for the size of an array: ";

int size;
cin >> size;

int* items_d = new int[size]; // array allocation
// a size known at runtime


for (int i = 0 ; i < size ; i ++ ){
    items_d[i] = i; 
    //we can use the subscript 
    //operator on our pointer just
    //the same way we would an array
}


cout << "using items_d[i]: ";
for (int i = 0 ; i < size - 1 ; i ++ ){
   cout <<  items[i] << ", ";
       //using the subscript 
    //operator reads  the value of items_d at index i

}
cout << items_d[size-1] << endl << endl;


cout << "using &items_d[i]: ";
for (int i = 0 ; i < size - 1 ; i ++ ){
   cout <<  &items[i] << ", ";
       //using the subscript and address of operator
    //operator reads  the address of items_d at index i

}
cout << &items_d[size-1] << endl << endl;


cout << "using *(items_d) + i:  ";
for (int i = 0 ; i < size - 1 ; i ++ ){
   cout <<  *(items_d + i) << ", ";
       //using the dereference
    //operator reads  the value of items_d at the address item_d plus i

}
cout << *(items_d + (size - 1)) << endl << endl;



cout << "using (items_d) + i:  ";
for (int i = 0 ; i < size - 1 ; i ++ ){
   cout <<  (items_d + i) << ", ";
      

}
cout << (items_d + (size - 1)) << endl << endl;

int a = 0 ; 
int b = a;

int* items_d_ptr = items_d;

cout << "using *items_d_ptr:  ";
while (items_d_ptr < items_d + (size-1)){
   cout <<  *items_d_ptr++ << ", ";
     

}
cout <<*items_d_ptr << endl << endl;

items_d_ptr = items_d;

cout << "using items_d_ptr:  ";
while (items_d_ptr < items_d + (size-1)){
   cout <<  items_d_ptr++ << ", ";
       

}
cout <<items_d_ptr << endl << endl;

}
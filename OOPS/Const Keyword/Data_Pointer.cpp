// Const keyword with data values and pointers

#include<iostream>
using namespace std;

// Few patterns to keep in mind -> Important
// 1. Const data, Non-const pointer
// 2. Non-const data, Const pointer
// 3. Const data, Const pointer

int main2(){

    // // 1. Const data, Non-const pointer
    // int const *a = new int(5);

    // // *a = 10;    // Error | Data -> Constant

    // int b = 10;
    // a = &b;     // Storing address of b in a | Pointer -> Non-const

    // cout << *a << endl;



    // // 2. Non-const data, Const pointer
    // int *const a = new int(5);

    // *a = 10;        // Re-assigning values -> Data (Non-const)
    // cout << *a << endl;

    // int b = 20;
    // // a = &b;         // Error | Pointer -> Constant



    // 3. Const data, Const pointer    
    // const int *const a = new int(5);

    // *a = 20;           // Error | Data -> Constant

    // int b = 100;
    // a = &b;             // Error | Pointer -> Constant
}
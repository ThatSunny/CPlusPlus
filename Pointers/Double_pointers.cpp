#include<iostream>
using namespace std;


// Function using double pointer
int somefunc(int** ptr){

    // ptr += 1;   // Without using de-referencing operator  ||  No change in original value 

    // *ptr += 1;  // Using de-referencing operator  ||  Changes 'a' value IFF single pointer is used

    **ptr += 1;    // Using de-referencing operator  ||  To make changes in original value for double pointers

    // Printing values inside function
    cout << "Inside function" << endl;
    cout << "ptr: " << ptr << endl;
    cout << "&ptr: " << &ptr << endl;
    cout << "*ptr: " << *ptr << endl;
    cout << "**ptr: " << **ptr << endl << endl;
} 


int main(){

    // Understanding Double Pointers

    // // Declaring a variable
    // int a = 5;

    // // Pointer to a (int) datatype
    // int* p = &a;

    // // Pointer to p (int*) datatype
    // int** q = &p;

    // // Printing all values
    // cout << "a: " << a << endl;
    // cout << "&a: " << &a << endl;

    // cout << endl;

    // cout << "p: " << p << endl;
    // cout << "&p: " << &p << endl;
    // cout << "*p: " << *p << endl;
    
    // cout << endl;

    // cout << "q: " << q << endl;
    // cout << "&q: " << &q << endl;
    // cout << "*q: " << *q << endl;
    // cout << "**q: " << **q << endl;





    // // Pointers (single) through function

    // // Declaring variable
    // int a = 5;

    // // Declaring pointer to a
    // int* p = &a;

    // // Printing before values
    // cout << "Before: " << endl;
    // cout << "a: " << a << endl;
    // cout << "p: " << p << endl;
    // cout << "*p: " << *p << endl;
    // cout << endl;

    // // Calling function
    // somefunc(p);        // Passed by value to function | By default a copy is created
    //                     // To make change in value, * is used in function

    // // Printing after values
    // cout << "After: " << endl;
    // cout << "a: " << a << endl;
    // cout << "p: " << p << endl;
    // cout << "*p: " << *p << endl;





    // Pointers (double) through function

    // Declaring variable
    int a = 5;

    // Declaring pointer to a
    int* p = &a;

    // Declaring double pointer to p
    int** q = &p;

    // Printing before values
    cout << "Before: " << endl;
    cout << "a: " << a << endl;
    cout << "**q: " << **q << endl;
    cout << endl;

    // Calling function
    somefunc(q);

    // Printing after values
    cout << "After: " << endl;
    cout << "a: " << a << endl;
    cout << "**q: " << **q << endl;
    cout << endl;
}
#include<iostream>
using namespace std;


int replace(int arr[]){         //Pointer of array is passed

    // Size of pointer
    cout << "Size of ptr: " << sizeof(arr) << endl;

    cout << "arr: " << arr << endl;         // Passes the base address
    cout << "&arr: " << &arr << endl;       // Also passes the base address


    // Replacing the value
    arr[0] = 50;

}



int main(){

    // // Defining a variable
    // int a = 5;

    // // Declaring a pointer to a
    // int *ptr = &a;      // Stores the address of a

    // cout << "Value inside a: " << a << endl;
    // cout << "Pointer ptr is pointing to: " << *ptr << endl;
    // cout << endl << endl;

    // cout << "Address of a: " << &a << endl;
    // cout << "Value inside ptr: " << ptr << endl;
    // cout << endl << endl;

    // cout << "Address of ptr: " << &ptr << endl; 

    // // Size of pointer
    // cout << "Size of pointer: " << sizeof(ptr) << endl;

    // Declaring an empty pointer the right way
    // int* ptr2 = NULL;
    // cout << *ptr2 << endl;




    // Character array
    
    // Declaring an array 
    int arr[10] = {1, 2, 3, 4, 5};

    // Printing the array 
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;


    cout << "Calling function" << endl;
    // Calling replace()
    replace(arr);           // Pointer is passed

    // Printing the new result
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
}
// Difference between :
// int* ptr[10];           Array of pointers
// int (*ptr)[10];         Pointer to first element of array

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    
    // Array of pointers
    cout << "Array of pointers" << endl;
    int* ptr[5];

    for(int i=0; i<5; i++){
        ptr[i] = &arr[i];   // Storing address of arr elements
    }

    // Accessing member using pointer notation
    for(int i=0; i<5; i++){
        cout << *ptr[i] << " ";
    }

    cout << endl << endl;

    // Pointer to an array
    cout << "Pointer to an array" << endl;
    int (*ptr2)[5] = &arr;     // Points to first element of array

    // Accessing member using pointer notation
    for(int i=0; i<5; i++){
        cout << (*ptr)[i] << " ";
    }

}
#include<iostream>
using namespace std;

int update(int& num){       // Creating a reference to a
    num++;                  // Updating the reference variable
}

int main(){

    // Declaring a variable
    int a = 5;

    // // Declaring a reference variable to a
    // int& b = a;

    // // Printing both values
    // cout << a << endl << b << endl;

    // Calling function
    update(a);

    // Printing new value
    cout << "New a: " << a << endl;
}
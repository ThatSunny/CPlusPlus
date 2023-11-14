// Recursive program to printing counting upto n terms

#include<iostream>
using namespace std;

void count(int n){
    // Base condition
    if(n==0){
        return;
    }

    // Recursive condition
    count(n-1);

    // Printing the values
    cout << n << " ";
}

int main(){

    // Declaring variable and asking user input
    int a;
    cout << "Enter terms: ";
    cin >> a;

    // Calling function
    count(a);

    return 0;
}
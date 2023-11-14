#include<iostream>
using namespace std;

void count(int n){
    // Base condition
    if(n==0){
        return;
    }

    // Printing the value
    cout << n << " ";

    // Recursive Relation
    return count(n-1);
}

int main(){
    
    // Declaring variable and asking user input
    int n;
    cout << "Enter the terms: ";
    cin >> n;

    // Calling function
    count(n);
}
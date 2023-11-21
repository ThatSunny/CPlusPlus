// You're given a number, Print all of its digit using Recursion

#include<iostream>
using namespace std;

void printdig(int n){
    
    // Base condition
    if(n==0){
        return;
    }

    // Recursive Relation
    printdig(n/10);

    // Processing
    int digit = n%10;
    cout << digit << " ";

}

int main(){

    // Declaring variable and asking user input
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // Calling function
    printdig(n);
}
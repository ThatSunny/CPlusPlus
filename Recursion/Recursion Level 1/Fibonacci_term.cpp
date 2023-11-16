// Recursive program to find nth term of fibonacci series 

#include<iostream>
using namespace std;

int fib(int n){
    // Base case
    if(n==1)    return 0;   // First term
    if(n==2)    return 1;   // Second term

    // Recursive Relation -> fib(n) = fib(n-1) + fib(n-2)
    return fib(n-1) + fib(n-2);
}

int main(){

    // Declaring a variable and asking user input
    int n;
    cout << "Enter the term: ";
    cin >> n;

    // Calling function
    int ans = fib(n);

    // Printing the nth term value
    cout << ans << endl;
}
#include<iostream>
using namespace std;

int exponent(int a, int b){
    
    // Base condition
    if(b==0){
        return 1;
    }

    // Declaring other variable
    int ans = 0;

    // Recursive Relation -> [2 * exponent(2,4)] + [2 * exponent(2,3)] + ...
    ans += a * exponent(a, b-1); 
    return ans;
}

int main(){

    // Declaring variables and taking user input
    int a, b;

    cout << "Enter base number: ";
    cin >> a;

    cout << "Enter the exponent: ";
    cin >> b;

    // Calling function
    int ans = exponent(a, b);

    // Printing the answer
    cout << "Output: " << ans;
}
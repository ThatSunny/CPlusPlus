// GFG : Find the GCD of two given numbers

#include <iostream>
using namespace std;


// Approach 1 : Euclid's Theorem / Algorithm 
int findgcd(int a, int b){

    // Checking for 0
    if(a == 0){
        return b;
    } 
    
    if(b == 0){
        return a;
    }

    while(a>0 && b>0){
        
        // Checking if a > b?
        if(a > b){
            a = a - b;
        } else{
            b = b - a; 
        }
    }

    // Returning the final answer
    return a == 0 ? b : a;
}

int main(){

    // Declaring two variables
    int a, b;

    // Taking user input
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Calling function and storing in ans
    int ans = findgcd(a, b);

    // Printing the answer
    cout << "GCD/HCF of " << a << " and " << b << " is: " << ans;
    return 0; 
}
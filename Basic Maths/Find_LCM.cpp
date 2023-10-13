// GFG : Find the LCM of two given numbers
// We will use concept of Euclid's Algorithm

// LCM = (a * b) / gcd(a, b)

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
    int ans = (a * b) / findgcd(a, b);

    // Printing the answer
    cout << "LCM of " << a << " and " << b << " is: " << ans;
    return 0; 
}
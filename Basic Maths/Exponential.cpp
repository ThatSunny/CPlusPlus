// Find exponential : a ^ b

#include <iostream>
using namespace std;


// // Approach 1 : Using loop  |  T.C : O(b)
// int main(){
    
//     // Declaring two variables
//     int a, b;

//     // Taking user input
//     cout << "Enter base number: ";
//     cin >> a;

//     cout << "Enter exponent: ";
//     cin >> b;

//     // Declaring other variables
//     int ans = 1;

//     // Loop traverses till b
//     for(int i=1; i<=b; i++){
//         ans *= a ;
//     }

//     // Printing final answer
//     cout << "Output: " << ans;
//     return 0;
// }





// Approach 2 : Using Divide and Conquer  |  T.C : O(log b)

int fastexp(int a, int b){
    int ans = 1;

    // Loop traverses when b is positive
    while(b > 0){

        // Checking if b is odd
        if(b & 1){              // OR if ( b%2 != 0 ) { ... }
            ans = ans * a; 
        }

        // To be implemented each time
        a = a * a;              // Square of a

        // Decreasing 2 by half
        b >>= 1;           // OR b = b / 2;
    }
    return ans;
}

int main(){
    
    // Declaring two variables
    int a, b;

    // Taking user input
    cout << "Enter base number: ";
    cin >> a;

    cout << "Enter exponent: ";
    cin >> b;

    // Calling the function and storing the value
    int output = fastexp(a, b);

    // Printing final answer
    cout << "Output: " << output;
    return 0;
}
#include<iostream> 
#include<cmath> 
using namespace std;

// Decimal to Binary
// Using Bitwise operator
int dectobin(int n){
    int i=0, bin=0, rem;

    while(n > 0){
        rem = (n & 1);
        bin = rem * pow(10, i++) + bin;

        // Right shifting the number
        n = n >> 1;
    }
    return bin;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Binary number is: " << dectobin(n);
    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;

// Decimal to Binary
// Using Division

int dectobin(int n){
    int rem, i=0, bin = 0;

    while(n > 0){
        rem = n % 2;
        bin = rem * pow(10, i++) + bin;

        // New number to perform operation on
        n = n / 2;
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

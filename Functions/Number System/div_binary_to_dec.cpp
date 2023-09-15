#include<iostream>
#include<cmath>
using namespace std;

// Binary to Decimal
// Using Division

int bintodec(int n){
    int dec = 0, i=0, rem = 0;

    while(n>0){
        rem = n % 10;
        dec = rem * pow(2, i++) + dec;

        // New number to perform operation on
        n = n / 10;
    }
    return dec;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Decimal number is: " << bintodec(n);
    return 0;
}
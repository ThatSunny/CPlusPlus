#include<iostream>
using namespace std;

int set(int n){
    int setbit = 0;

    while(n != 0){
        if (n & 1 == 1){    // Cant use bitwise OR
            setbit++;
        }
        
        // Right shifting the number
        n = n >> 1;
    }
    return setbit;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "The number of bits is: " << set(n);
    return 0;
}
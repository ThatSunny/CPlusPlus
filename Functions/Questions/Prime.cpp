#include<iostream>
using namespace std;

int prime(int n){
    int check = 0;

    for(int i=1; i<=n; i++){
        if(n%i == 0){
            check++;
        }
    }
    if(check == 2){
        cout << "The number is prime" << endl;
    } else {
        cout << "The number is not prime" << endl;
    }
}


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    prime(n);
    return 0;
}

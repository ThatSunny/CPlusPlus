#include<iostream>
using namespace std;

void even(int n){
    if(n%2 == 0){
        cout << "The number is even.";
    } else {
        cout << "The number is odd.";
    }
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    even(n);
    return 0;
}
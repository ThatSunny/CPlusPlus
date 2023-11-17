#include<iostream>
using namespace std;

int printfib(int n){

    // Base condition
    if(n==0 || n==1){
        return n;
    }

    // Recursive Relation
    return printfib(n-1) + printfib(n-2);
}

int main(){

    // Declaring variable and asking user input
    int n;
    cout << "Enter the terms: ";
    cin >> n;

    // Calling function
    for(int i=0; i<=n; i++){
        cout << printfib(i) << " ";
    }
    
    return 0;
}
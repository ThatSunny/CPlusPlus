#include<iostream>
#include<cstring>
using namespace std;

void printPermutation(string& str, int i){

    // Base condition
    if(i >= str.length()){

        // Print base-case result
        cout << str << " ";
        return;
    }

    // Traverse loop for other elements || i -> str.length()
    for(int j=i; j<str.length(); j++){

        // Swap
        swap(str[i], str[j]);

        // Recursion call  ||  For other elements of string
        printPermutation(str, i+1);

        // Backtracking  ||  To recreate the original string
        swap(str[i], str[j]);
    }
}


int main(){
    
    // Declaring string
    string str = "abc";

    // Declaring other variables
    int i=0;

    // Calling function
    printPermutation(str, i);
}
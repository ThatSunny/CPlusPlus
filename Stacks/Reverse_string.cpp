// Reverse a given string using stacks

#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

int main() {
    string str = "Hello";

    // Creating a stack
    stack<char> s;

    // Iterating through each element of string
    for(int i=0; i<str.length(); i++) {
        s.push(str[i]);                 // Inserting the ith element of string to stack(s)
    }

    // Printing the stack -> Gives reversed order
    while(!s.empty()) {
        cout << s.top() << " ";         // Printing the top element
        s.pop();
    }
}

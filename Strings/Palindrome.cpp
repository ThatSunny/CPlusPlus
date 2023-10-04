#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch[100];
    cout << "Initial string: ";

    // Storing the user value in ch;
    cin.getline(ch, 50);

    // Calculating the string size
    int size = strlen(ch);

    // Declaring variables
    int i = 0;
    int j = size - 1;

    // Declaring other variable
    bool isPalindrome = true;

    // Loop terminates when i exceeds the value of j
    while(i<=j){
        
        // If the [i] element is equal to [j] element
        if(ch[i] == ch[j]){
            
            // Update the value of variables
            i++;
            j--;
        }

        else{
            isPalindrome = false;   // Not a palindrome
            break;                  // Breaking the loop
        }
    }


    // Printing the final answer
    if (isPalindrome){ 
        cout << "Palindrome";
    }

    else{
        cout << "Not a Palindrome";
    }
}
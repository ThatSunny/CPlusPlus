// Leetcode : Check if a given string is valid palindrome or not
//            deleting 'one' character "at most".

#include<iostream>
#include<cstring>
using namespace std;


// Function to check for palindrome before and after a selected element
bool checkPalindrome(string s, int i, int j) {

    // Loop stops when i exceeds the value of j 
    while(i<=j){
                            
        // If 'i'th and 'j'th element are not equal
        if(s[i] != s[j]){

            // Returning false
            return false; 
        }

        // Else they both are equal
        else{

            // Updating the values
            i++;
            j--;
        }
    }
    return true;
}

int main(){

    // Given original string
    string s ("level");

    // Declaring variables
    int i = 0;
    int j = s.length() - 1;

    // Declaring other variable
    bool palindromeFound = false;

    while(i<=j){
        
        // 1 | If no removal is required
        if(s[i] == s[j]){
            
            // Update the value of i and j
            i++;
            j--;
        }

        // 2 || If one is to be removed, Either i or j
        // i || We check from i+1 to j
        // j || We check from i to j-1
        else{

            // Checking if removing s[i] makes a palindrome
            if(checkPalindrome(s, i+1, j)){
                palindromeFound = true;
                break;
            } 
            
            // Checking if removing s[j] makes a palindrome
            if(checkPalindrome(s, i, j-1)){
                palindromeFound = true;
                break;
            }

            else{
                palindromeFound = false;
                break;
            }
        }
    } 
    
    if(palindromeFound){
        cout << "True";
    }
    else{
        cout << "False";
    }
}
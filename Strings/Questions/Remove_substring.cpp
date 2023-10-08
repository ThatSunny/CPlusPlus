// Leetcode : Remove all occurences of a substring

#include<iostream>
#include<cstring>
using namespace std;


int main(){
    
    // Given original string
    string s ("daabcbaabcbc");
    
    // Substring to remove
    string sub ("abc");

    // Creating a variable that finds position of substring ("abc")
    // This variable finds and stores the first index of substring
    int pos = s.find(sub);    // Similar to 'i' variable

    // Loop traverses until 'pos' variable is equal to 'npos'
    // Stops when npos arises
    while(pos != string::npos){

        // If true | We erase the substring
        s.erase(pos, sub.length());     // Parameters (first_index, full_length_of_substring)

        // Then updating the value of variable
        pos = s.find(sub);    // Similar to updating mid in Binary Search 
    }

    // Printing the answer
    cout << "Output: " << s;
}
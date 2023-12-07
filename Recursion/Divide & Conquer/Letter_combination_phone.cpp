// You're given an old telephone and are required to print the possible letter combinations of a given number
// The digits are given as string data type

// eg -> Input: "2"
//       Output: "a", "b", "c"

// eg -> Input: "23"
//       Output: "ad", "ae", "af", "bd", "be", "bf"

#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

void solveCombination(vector<string> &ans, int n, string output, int index, string &digits, vector<string> mapping){

    // Base condition  -> Index exceeds the given string(original)
    if(index >= digits.length()){
        
        // Store final answer
        ans.push_back(output);
        return;
    }

    // Solving 1 case -> Including "a" / character in output string
    int digit =  digits[index] - '0';        // Storing one number at a time  ||  '-0' to convert string -> int

    // Fetching string corresponding to that digit
    string letters = mapping[digit];        // eg -> 2 : "abc"

    // Fetching one character from string
    for(int i=0; i<letters.length(); i++){

        // Storing single character
        char ch = letters[i];

        
        // Storing in output 
        output.push_back(ch);

        // Recursive relation
        solveCombination(ans, n, output, index+1, digits, mapping);         // For next index

        // Back-tracking
        output.pop_back();
    }

}

int main(){

    // Declaring digits and taking user input
    string digits;
    cout << "Enter number: ";
    cin >> digits;

    // If empty string is given -> Print empty string
    if(digits.length() == 0){
        cout << "No combination";
        return 0;
    }


    // Declaring other variables
    int n = digits.length();        // Size of digits string
    vector<string> ans;             // Declaring an ans string (final ans)
    string output = "";             // Output string to store current character
    int index = 0;                  // Used for index of digits string


    // Declaring a string to correspond each number to its alphabets
    vector<string> mapping(10);
    mapping[2] = "abc";
    mapping[3] = "def";
    mapping[4] = "ghi";
    mapping[5] = "jkl";
    mapping[6] = "mno";
    mapping[7] = "pqrs";
    mapping[8] = "tuv";
    mapping[9] = "wxyz";


    // Calling function
    solveCombination(ans, n, output, index, digits, mapping);

    // Printing the answer
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] <<  " ";
    }
    cout << endl;
}
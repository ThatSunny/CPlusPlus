// You're given number of brackets -> () counts as '1'
// Find all possible combinations of well-formed parenthesis

// eg -> Input: 3
//       Output: [ "((()))", "(() ())", "(()) ()", "() (())", "() () ()"]


// ISSUE : UNABLE TO PRINT THE FINAL ANS VECTOR  ||  BLANK OUTPUT


#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

void solveParenthesis(vector<string> &ans, int n, int open, int close, string& output){

    // Base condition
    if(open == close){
        
        // Store all the output to ans string
        ans.push_back(output);
        
        return;
    }

    // Including opening bracket
    if(open > 0){
        output.push_back('(');

        // Revursive Relation
        solveParenthesis(ans, n, open-1, close, output);    // 1 Open is used

        // Backtracking
        output.pop_back();
    }

    // Including closing bracket
    if(close > open){
        output.push_back(')');

        // Recursive Relation
        solveParenthesis(ans, n, open, close-1, output);    // 1 close is used

        // Backtracking
        output.pop_back();
    }

}

int main(){
    // Declaring variable and taking user input
    int n;
    cout << "Enter pairs: ";
    cin >> n;

    // Declaring other variables
    int open = n;
    int close = n;    

    // Vector to store answer
    vector<string> ans; 

    // Empty string to store current character
    string output = "";

    // Calling function
    solveParenthesis(ans, n, open, close, output);
    

    cout << "Output: " << endl;
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

    cout << endl;
}
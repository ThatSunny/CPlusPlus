// You're given a string, print all the substrings of it

#include<iostream>
#include<cstring>
using namespace std;

void findsubstr(string& str, string ans, int i){
    // Base condition
    if(i >= str.length()){   // Index exceeds the size 
        cout << ans << endl;
        return;
    }

    // Exclude the ith element
    findsubstr(str, ans, i+1);      // No `return` keyword because func() is of void data type
    // Excluding first allows to explore all the possible combinations without i-th element
    // Since we're changing the value `ans.push_back(str[i])`. Hence, we're doing exclude first

    // Include the ith element
    ans.push_back(str[i]);          // Responsible for concatenation of i-th element to answer string
    findsubstr(str, ans, i+1);

}

int main(){
    
    // Declaring a string
    string str = "abc";
    string ans = "";

    // Declaring other variables
    int i = 0;

    // Calling function
    findsubstr(str, ans, i);
}
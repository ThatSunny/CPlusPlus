// Find a given character in a string using recursion

#include<iostream>
#include<cstring> 
using namespace std;

int findstr(string& str, int i, int& len, char& key){
    // Base condition
    if(i >= len){
        // Whole string is traversed
        // Possible when key not found
        return -1;
    }   

    // Processing
    if(str[i] == key){
        return i;       // Returning the correct index to main()
    }

    // Recursion Relation
    findstr(str, i+1, len, key);
}

int main(){
    string str = "hellothere";
    int len = str.length();

    char key = 't';
    
    // Passing Index
    int i=0;

    // Calling function
    int ans = findstr(str, i, len, key);

    // Printing answer
    if(ans){
        cout << "YES" << " at " << ans;
    } else {
        cout << "NO";
    }

}

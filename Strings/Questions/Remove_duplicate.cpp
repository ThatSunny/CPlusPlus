// Leetcode : Remove all duplicate adjacent elements in string

#include<iostream>
#include<cstring>
using namespace std;

int main(){

    // Given original string
    string str ("abbaca");

    // Creating an ans string
    string ans;

    int i = 0;

    // Loop traverses for all the element of 'str'
    while(i < str.length()){

        // Checking if the ith element of 'str' == last element of 'ans' 
        // Making sure ans.length() - 1 is in bounds || Doesn't gets lower than required
        if( str[i] == ans[ans.length()-1] && (ans.length()-1) >=0 ){

            // If true | Removing the last element from 'ans' string
            ans.pop_back();
        }

            // If false | Adding the ith element of 'str' to 'ans'
        else{
            ans.push_back(str[i]);
        }

        // Incrementing the value of i
        i++;
    } 

    // Printing the final answer
    cout << "Output: " << ans;
}
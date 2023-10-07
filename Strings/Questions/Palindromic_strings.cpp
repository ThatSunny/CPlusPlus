// Leetcode : Given a string s, return the number of palindromic substrings in it. 

/* Example 1 : 
   Input: s = "noon"
   Output: 6         (n, noon, o, oo, o, n)  

   Input: s = "abc"
   Output: 3         (a, b, c)
*/
#include<iostream>
#include<cstring>
using namespace std;

int numberofstr(string s, int i, int j){

   // Declaring count
   int count = 0;

   // Loop runs for valid bounds of i & j and also when the elements matches
   while(i>=0 && j<s.length() && s[i]==s[j]){

      // When element matches
      count++;       // Increment the value of count
      i--;           // Decrement the value of i
      j++;           // Increment the value of j
   } 

   // When the while loop's condition doesn't match | Loop's condition fails
   // Simply, return the value of count 
   return count;
}

int main(){

   // Taking user input
   string s = "noon";

   // Declaring variables
   int totalcount = 0;
   int size = s.length();

   // Loop executes for all the elements of string 's'
   for(int i=0; i<s.length(); i++){

      // For odd length substrings
      int oddlengAns = numberofstr(s, i, i);       // For odd substrings i==j

      // For even length substrings
      int evenlengAns = numberofstr(s, i, i+1);    // For even substrings j = i+1

      // Total counts of substrings
      // Adding totalcount again to avoid value being overwritten
      totalcount = totalcount + oddlengAns + evenlengAns;
   }

   // Printing the answer
   cout << "Total palindromic substrings: " << totalcount; 

   return 0;
}
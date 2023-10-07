// Leetcode : Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.

/* Example 1 : 
   Input: timePoints = ["23:59", "00:00"]
   Output: 1           (Difference of 1 minutes) 

   Input: timePoints = ["00:00", "23:59", "00:00"]
   Output: 0           (Difference of 0 minutes between 00:00 and 00:00)

*/

#include<iostream>
#include<cstring>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main(){

    // Taking User Input
    string timePoint[] = {"23:59", "00:00"};
    int size = sizeof(timePoint) / sizeof(string);

    // Step 1 | Convert time string into minute integer value
    
    // Converting string into integer value
    vector<int> minutes;
    
    // Traversing loop for all elements of time
    for(int i=0; i<size; i++){

        // Storing current element in another variable to avoid overwriting of elements
        string currElement = timePoint[i];    

        // Fetching the hour portion | First two characters 
        // stoi() - String to integer
        // substr() - To get a substring of a string
        int hours = stoi( currElement.substr(0,2));
        
        // Fetching minute portion 
        int min = stoi( currElement.substr(3,2));

        // Converting hours into minutes
        int totalMinute = hours * 60 + min;

        // Adding the minutes to <vector>minutes
        minutes.push_back(totalMinute);

    // Step 2 | Sort() the minute array 
    sort(minutes.begin(), minutes.end());


    // Step 3 | Finding the difference and storing the minimum
    int size_minutes = minutes.size();

    // Declaring a min integer to store the minimum value of difference
    int minimum = INT_MAX;

    // Traversing loop for all elements of minutes
    for(int i=0; i<size_minutes-1; i++){
        
        // Finding the difference
        int diff = minutes[i+1] - minutes[i];       // [i+1] may exceed the size limit, hence making it (size_vector-1)

        // Storing the minimum 
        minimum = std::min(minimum, diff);
    }

    }
}
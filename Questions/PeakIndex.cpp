/* Find the peak index in a mountain array

    Given array = {1, 2, 5, 10, 9, 7, 3}
    
    Output = 3 | Index Number of 10 (Peak element)
    The code automatically searches for the peak element in array, without us manually entering it
    
    Solve within O(log(arr.length)) | O(logn) Time Complexity */

#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Declaring a vector/array
    vector<int>arr{1, 2, 50, 25, 20, 7, 3};         // Goes up till 50, then downs to 3 (Monotonic)

    // Declaring the starting, ending and mid index
    int start = 0;
    int end   = arr.size() - 1;
    int mid = start + (end-start) / 2;

    bool found = false;

    // Using while loop | Stops when start = end
    while(start < end){

        // Condition 1 | If arr[mid] < arr[mid + 1]
        if(arr[mid] < arr[mid+1]){
            
            found = true;

            // Moving the array Right
            start = mid + 1;
        }

        else{
            // We set end to mid | NOT mid-1, Because if mid-1, we'll go in first line (incrementing one)
            end = mid;
        }

        // Updating the middle index
        mid = start + (end - start) / 2;

    } 

    if(found){
        cout << "Peak index is at: " << start;
    }
    else{
        cout << "Element not found";
    }
}   
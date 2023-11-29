// You are given an array and a target to reach
// Calculate the target using minimum number of elements used

// eg -> arr = {1, 2}  | target = 5
//                                                                                                      =====================
// Possible combinations: {1, 1, 1, 1, 1} , {2, 1, 1, 1} , {1, 2, 1, 1} , {1, 1, 2, 1} , {1, 1, 1, 2} , {2, 1, 1} , {1, 2, 2}
//                                                                                                      =====================

// Output : 3    ||    {2, 1, 1} or {1, 2, 2}


#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int reachTarget(vector<int>& arr, int target){
    // Base condition
    if(target == 0){
        return 0;
    }

    // Invalid case
    if(target < 0){
        return INT_MAX;     // Gets ignored when min is calculated
    }

    // Processing
    
    // Declaring other variable
    int mini = INT_MAX;

    // Traversing for all elements of arr
    for(int i=0; i<arr.size(); i++){
        
        // Function returns int data type | Storing in ans
        int ans =  reachTarget(arr, target - arr[i]);

        // To keep in bounds because `ans+1` may exceed INT_MIN to give invalid result
        if(ans != INT_MAX){
            // Finding the minimum of the two
            mini = min(mini, ans + 1);
        }
    }

    // Returning the minimum value
    return mini;
}


int main(){
    // Declaring the array and target
    vector<int> arr{1, 2, 3};
    int target = 7;

    // Calling the function
    int ans = reachTarget(arr, target);

    // Printing the result
    cout << "Output: " << ans;
    
    return 0;
}

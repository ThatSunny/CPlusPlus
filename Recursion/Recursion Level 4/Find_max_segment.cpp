// You're given a rod of length `n`, and 3 segments `x`, `y`, `z`. 
// Find the maximum number of segments used to make rod of length `n`.

// eg -> n = 8 , x=3, y=3, z=3 ||  Output: 0
// eg -> n = 7 , x=5, y=2, z=2 ||  Output: 2 (5,2)

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int findMaxSegment(int n, int x, int y, int z){

    // Base condition
    if(n == 0){     // String of no length
        return 0;
    }

    if(n < 0){      // String of negative length
        return INT_MIN;     // Gets ignored when max is calculated
    }

    // Processing
    int ans1 = findMaxSegment(n-x, x, y, z) + 1;        // For x rod
    int ans2 = findMaxSegment(n-y, x, y, z) + 1;        // For y rod
    int ans3 = findMaxSegment(n-z, x, y, z) + 1;        // For z rod

    // Storing final answer
    int ans = max(ans1, max(ans2, ans3));

    return ans;
}

int main(){

    // Declaring variables
    int n = 7;
    int x = 5;
    int y = 2;
    int z = 2;

    // Calling function
    int ans = findMaxSegment(n, x, y, z);

    // Printing the answer
    cout << "Output: " << ans;
}
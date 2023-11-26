// You're given an array, find the maximum sum made from adjacent array elements
// eg -> arr = 1, 2, 3, 4  ||  Output: 6    (2+4)
// eg -> arr = 4, 1, 6, 2  ||  Output: 10   (4+6)

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int sumAdjacent(vector<int>& arr, int& size, int i, int sum, int& maxi){

    // Base condition
    if(i >= size){

        // Updating maxi when base case reaches
        maxi = max(sum, maxi);
        return maxi;
    }

    // Excluding the i-th element
    int exclude = sumAdjacent(arr, size, i+1, sum, maxi);

    // Including the i-th element
    int include = sumAdjacent(arr, size, i+2, sum + arr[i], maxi);

    // Finding max of include and exclude
    return max(exclude, include);
}


int main(){

    // Declaring an array
    vector<int> arr{1, 2, 3, 4, 10};
    
    // Declaring other variables
    int size = arr.size();
    int i = 0;
    int sum = 0;
    int maxi = INT_MIN;

    // Calling function
    int ans = sumAdjacent(arr, size, i, sum, maxi);

    // Printing the answer
    cout << "Output: " << ans;
}
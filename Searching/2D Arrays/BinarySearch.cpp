#include<iostream>
using namespace std;

int main(){

    // Declaring a 2D array
    int arr[5][4] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}
    };
    
    // Declaring Size and Column 
    int row = 5;
    int col = 4;

    // Declaring start, end and middle index
    int start = 0;
    int end   = row*col - 1;
    int mid = start + (end - start) / 2;
    
    // Other variables
    bool found = false;
    int target = 15;
    int index;
    
    // Loop stops when start exceeds end
    while(start <= end && !found){

        // Updating middle index
        mid = start + (end - start) / 2;

        // Finding row and column index for pointer that moves to each element | Similar to arr[mid] in 1D array 
        int RowIndex = mid / col;
        int ColIndex = mid % col;

        // Condition 1 | If arr[][] == target
        if(arr[RowIndex][ColIndex] == target){
            found = true;
            index = col*RowIndex+ColIndex;
        } 

        // Condition 2 | If arr[][] > target
        if(arr[RowIndex][ColIndex] > target){
            
            // Moving Left
            end = mid - 1;
        }

        // Condition 3 | If arr[][] < target
        else if(arr[RowIndex][ColIndex] < target){
            
            // Moving Right
            start = mid + 1;
        }
    }

    if(found){
        cout << "Element is present at " << index << " index";
    }
    else{
        cout << "Element is not present";
    }
    return 0;
}
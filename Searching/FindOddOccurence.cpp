// Using Index Observation | One of the Binary Search Techniques

#include<iostream>
#include<climits>
using namespace std;

int main(){

    // Declaring array
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 3, 4, 4, 2, 2};
    int size = sizeof(arr) / sizeof(int);

    // Declaring start, middle and ending index
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    // Declaring other variables
    bool found = false;
    int index = INT_MIN;

    while(start <= end && !found){

        // When single element remains
        if(start == end){
            
            // Storing the index
            found = true;
            index = mid;
        }

        // If the middle index is even
        if(mid % 2 == 0){

            // Compare to next element
            if(arr[mid] == arr[mid+1]){
                
                // If true | Starting element of pair on even index and ending element on odd index
                // We're on left side | Traverse the loop in right
                
                // (mid + 2) because we've already checked for (mid + 1) element
                start = mid + 2;
            }

            // If not equal to next element
            else{
                
                // Search in right
                // Include the mid element (because ans is only at even index) 
                // hence it equals to end
                end = mid;   
            }
        }

        // If the middle index is odd
        else{

            // Compare to previous element
            if(arr[mid] == arr[mid - 1]){

                // If true | Start element of pair is at even and ending is at odd
                // We're on left side | Traverse the loop in right

                start = mid + 1;
            }

            else{
                // We're on right side | Traverse the loop in left
                end = mid - 1;
            }
        }

        // Updating the value of mid
        mid = start + (end - start) / 2;
    }
    
    if(found){
        cout << "Element " << arr[index] << " at index: " << index;
    }
    else{
        cout << "Element not found"; 
    }
}
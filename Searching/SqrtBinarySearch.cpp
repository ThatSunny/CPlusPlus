// Finding square root of number using Binary Search


#include<iostream>
#include<climits>
using namespace std;

int main(){
    // Printing only the integer part
    
    // Taking user input
    int n;
    cout << "Enter the value: ";
    cin >> n;

    // Declaring start, ending and mid index
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;

    bool found = false; 
    int ans;

    // Loop stops when start exceeds end
    while(start <= end && !found){

        // Condition 1 | If mid*mid > n
        if(mid*mid > n){

            // Move left
            end = mid - 1;
        }

        // Condition 2 | If mid*mid < n
        else if(mid*mid < n){

            // Storing the index value
            ans = mid;
            found = true;

            // Moving right 
            start = mid + 1;
        }

        // Condition 3 | If mid*mid = n
        else if(mid*mid == n){
            ans = mid;
            found = true;
        }

        // Updating the value of mid
        mid = start + (end-start) / 2;
    }

    if(found){
        cout << "Square root of " << n << " is " << ans;
    }
    else{
        cout << "Square root not found";
    }
    return 0;
}
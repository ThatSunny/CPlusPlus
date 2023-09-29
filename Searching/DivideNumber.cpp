#include<iostream>
#include<climits>
using namespace std;

// int main(){
    
//     // Declaring the numbers
//     int dividend = 22;
//     int divisor = 7;

//     // Declaring start, end and middle index
//     int start = 0;
//     int end = dividend;
//     int mid = start + (end - start) / 2;

//     // Other variables
//     int ans = -1;

//     // Loop stops when start exceeds the value of end
//     while(start <= end){
        
//         // Condition 1 | If mid*divisor == dividend
//         if(mid*divisor == dividend){
            
//             // Storing the value of mid
//             ans = mid;

//             // Breaking the loop
//             break;
//         }

//         // Condition 2 | if mid*divisor > dividend
//         if(mid*divisor > dividend){

//             // Moving the array left
//             end = mid - 1;
//         }

//         // Condition 3 | if mid*divisor < dividend
//         if(mid*divisor < dividend){

//             // Storing the index
//             ans = mid;

//             // Moving the array right
//             start = mid + 1;
//         }

//         // Updating the mid index
//         mid = start + (end - start) / 2;
//     }

//     if(ans != -1){
//         cout << "Answer is: " << ans;
//     } 
//     return 0;
// }


// Performing for division of negative numbers
int main(){
    
    // Declaring the numbers
    int dividend = 49;
    int divisor = -7;

    // Declaring start, end and middle index
    int start = 0;

    // abs() allows us to take positive / absolute values
    int end = abs(dividend);
    int mid = start + (end - start) / 2;

    // Other variables
    int ans = -1;

    // Loop stops when start exceeds the value of end
    while(start <= end){
        
        // Condition 1 | If mid*divisor == dividend
        if( abs(mid*divisor) == abs(dividend) ){
            
            // Storing the value of mid
            ans = mid;

            // Breaking the loop
            break;
        }

        // Condition 2 | if mid*divisor > dividend
        if( abs(mid*divisor) > abs(dividend) ){

            // Moving the array left
            end = mid - 1;
        }

        // Condition 3 | if mid*divisor < dividend
        if( abs(mid*divisor) < abs(dividend) ){

            // Storing the index
            ans = mid;

            // Moving the array right
            start = mid + 1;
        }

        // Updating the mid index
        mid = start + (end - start) / 2;
    }

    if(ans != -1){

        if( (divisor>0 && dividend>0) || (divisor<0 && dividend<0) ){
            cout << "Answer is: " << ans;
        } 
        else { 
            cout << "Answer is: " << -ans;
        }
    } 
    return 0;
}
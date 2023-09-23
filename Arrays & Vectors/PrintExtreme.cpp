#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = sizeof(arr) / sizeof(int);

    int i = 0;      // Declaring starting index
    int j = size-1; // Declaring ending index

    while(1){
        // Stopping condition
        if(i > j || j < i){
            break;
        } 
        
        // Printing the leftover element only once 
        else if(i == j) {
            cout << arr[i] << " ";
        } 
        
        // Printing the remaining elements
        else {
            cout << arr[i] << " " << arr [j] << endl;
        }
        
        i++;    // Incrementing the start
        j--;    // Decrementing the end
    }
    return 0;
}
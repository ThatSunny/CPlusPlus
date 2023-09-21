#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = sizeof(arr) / sizeof(int);

    int i = 0;      // Declaring the start index
    int j = size-1; // Declaring the ending index

    while(1){
        // Stopping condition
        if(i > j || j < i){
            break;
        }

        // Swapping condition
        else{
            swap(arr[i], arr[j]);
        }
        
        i++;        // Incrementing the start 
        j--;        // Decrementing the end
    }

    // Printing the array
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
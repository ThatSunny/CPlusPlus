#include<iostream>
using namespace std;

void mergeArr(int arr[], int& s, int& e){

    // Calculating mid index
    int mid = s + (e-s) / 2;

    // Calculating length of arrays  ||  To create a copy
    int len1 = mid - s + 1;       // Left
    int len2 = e - mid;           // Right 

    // Creating new arrays of same lengths
    int* left = new int[len1];    // Left
    int* right = new int[len2];   // Right

    // Copying values to left and right arrays
    // For left
    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }

    // For right
    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }


    // Next, Keep comparing both the subarrays
    // Declaring indexes first
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;
    
    while( (leftIndex < len1) && (rightIndex < len2) ){

        // Left is less than right
        if(left[leftIndex] < right[rightIndex]){

            // Copying left elements to main array
            arr[mainArrayIndex] = left[leftIndex];

            // Incrementing both indexes
            mainArrayIndex++;
            leftIndex++;
        }


        // Right is less than left
        else{

            // Copying right elements to main array
            arr[mainArrayIndex] = right[rightIndex];

            // Incrementing both values
            mainArrayIndex++;
            rightIndex++; 
        }
    }


    // For left array  ||  If any of the left/right array exhausts first
    while(leftIndex < len1){
        // Copy (remaining elements) to main array
        arr[mainArrayIndex] = left[leftIndex];

        // Incrementing both values
        mainArrayIndex++;
        leftIndex++;
    }

    // For right array  ||  If any of the left/right array exhausts first
    while(rightIndex < len2){

        // Copy (remaining elements) to main array
        arr[mainArrayIndex] = right[rightIndex];

        // Incrementing both values
        mainArrayIndex++;
        rightIndex++;
    }

    // Free up the memory
    delete[] left;
    delete[] right;
}
        


void mergeSort(int arr[], int s, int e){

    // Base condition
    if(s >= e){         // s==e -> for single element  ||  s > e -> For invalid array 
        return;
    }

    // Calculating mid index
    int mid = s + (e-s) / 2;

    // Sorting the broken arrays
    // Left || Calling recursive function
    mergeSort(arr, s, mid);

    // Right || Calling recursive function
    mergeSort(arr, mid+1, e);

    // Merging the broken arrays
    mergeArr(arr, s, e);
}

int main(){
    
    // Declaring an array
    int arr[] = {1, 4, 3, 14, 5, 83, 3, 5, 99, 174};
    int n = sizeof(arr) / sizeof(int);

    // Declaring other variables
    int s = 0;
    int e = n-1;

    // Calling function
    mergeSort(arr, s, e);       // No need to pass the size of array

    // Printing the sorted array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
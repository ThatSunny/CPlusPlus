#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    // // For vectors
    // vector<int> arr{5, 4, 3, 2, 1};

    // // Predefined function
    // sort(arr.begin(), arr.end());

    // // Printing the vector
    // for(int i=0; i<=arr.size()-1; i++){
    //     cout << arr[i] << " ";
    // }


    // For arrays
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);

    sort(arr, arr+size);

    // Printing the vector
    for(int i=0; i<=size-1; i++){
        cout << arr[i] << " ";
    }

}
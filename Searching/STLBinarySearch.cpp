#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    // For Arrays
    cout << "Printing using array" << endl;

    // Declaring an array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9, 10};
    int size = sizeof(arr) / sizeof(int);


    // Using predefined function 
    if(binary_search(arr, arr + size, 5)){
        cout << "Element found" << endl;
    }
    else{ 
        cout << "Element not found" << endl;
    }

    cout << endl;

    // For Vectors
    cout << "Printing using vector" << endl;

    // Declaring a vector
    vector<int>brr{1, 2, 3, 4, 5, 6, 7, 9, 10};

    // Using predefined fuction
    if(binary_search(brr.begin(), brr.end(), 10)){
        cout << "Element found" << endl;
    }
    
    else{ 
        cout << "Element not found" << endl;
    }
    return 0;
}
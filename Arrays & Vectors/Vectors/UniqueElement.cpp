#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Using XOR | XOR of same elements -> 0
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    vector<int>arr(n);
    
    // Taking user input
    cout << "Enter the elements of array: " << endl;
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }

    int unique = 0;

    // Traversing loop and XORing the elements
    for(int i=0; i<arr.size(); i++){
        unique = unique ^ arr[i];
    }

    cout << "Unique element is: " << unique;
    return 0;
}
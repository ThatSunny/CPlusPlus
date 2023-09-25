#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of Array / Vector: ";
    cin >> n;
    
    // Declaring a vector 
    vector<int>arr(n);

    // Printing initial array
    cout << "Initial Array" << endl;
    
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;


    // Adding element to an array 
    arr.push_back(5);

    // Printing the modified array
    cout << "Array after adding an element" << endl;
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;


    // Removing the element added | last element gets deleted
    arr.pop_back();

    // Printing the new array
    cout << "Array after deleting the element" << endl;
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout << "Enter the array elements: " << endl;

    // Taking array values
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }

    // Displaying the original array elements
    cout << "Your array is: " << endl;
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }  

    cout << endl;


    // Displaying the modified array
    cout << "New array is: " << endl;
    for(int i=0; i<5; i++){
        arr[i] = 1;
        cout << arr[i] << " ";
    }  

    return 0;
}  
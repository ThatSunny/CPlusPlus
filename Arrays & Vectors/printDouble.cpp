#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout << "Enter the array elements: ";
    
    for(int i=0; i<5; i++){
        cin >> arr[i];   
    }

    // Printing the array
    for(int i=0; i<5; i++){
        cout << arr[i] * 2 << " ";
    }
    return 0;
}
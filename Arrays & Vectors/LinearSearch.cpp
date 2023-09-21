#include<iostream>
#include<cstring>
using namespace std;


void getarr(int arr[], int size){
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << endl;
}

bool find(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[5];
    int size = 5;
    cout << "Enter the array elements: " << endl;

    // Taking input values
    getarr(arr, size);

    // Taking key from user
    int key;
    cout << "Enter the key: ";
    cin >> key;

    // Linear searching the key in the array
    if(find(arr, size, key)){
        cout << "Element Found";
    } else {
        cout << "Element not Found";
    }

    return 0;
}
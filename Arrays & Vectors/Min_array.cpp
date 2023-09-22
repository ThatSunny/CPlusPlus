#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {12, 42, 65, 55, 75, 43, 68, 98, 23, 98};
    int size = sizeof(arr) / sizeof(int);

    int min = INT_MAX;

    for(int i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    
    cout << "Minimum element is: " << min;
    return 0;
}
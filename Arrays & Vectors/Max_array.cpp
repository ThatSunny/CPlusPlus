#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {1, 49, 23, 11, 85, 32, 52, 48, 53};
    int size = sizeof(arr) / sizeof(int);

    int max = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Maximum element is: " << max;
    return 0;
}
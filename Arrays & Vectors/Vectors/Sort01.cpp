#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int>arr{1, 1, 0, 1, 0, 1, 0, 1, 0};
    
    int i=0;    //Starting pointer | Moves forward
    int j=arr.size() - 1;

    while(i<=j){     // Stops when i exceeds the value of j
        if(arr[i]==0){
            i++;
        }

        if(arr[j]==1){
            j--;
        }

        if(arr[i]==1 && arr[j]==0){
            swap(arr[i], arr[j]);
            i++; 
            j--;
        }
    }

    cout << "Sorted array: " << endl;

    // Printing the sorted array
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}
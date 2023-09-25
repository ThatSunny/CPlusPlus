// Find pair from the array which return the given Sum

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{1, 4, 5, 10, 7, 8};
    int sum = 15;

    cout << "Pairs are: " << endl;

    //Traversing each element of arr
    for(int i=0; i<arr.size(); i++){

        //Traversing another loop for i+1 index of arr
        for(int j=i+1; j<arr.size(); j++){

            //Checking if arr[i] + arr[j] = sum
            if(arr[i] + arr[j] == sum){

                //Printing the pairs
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
    return 0;
}
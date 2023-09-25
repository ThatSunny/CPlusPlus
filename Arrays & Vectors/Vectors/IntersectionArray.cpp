#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    // Declaring arrays
    vector<int>arr{1, 2, 3, 4, 5};
    vector<int>brr{4, 5, 6, 7};

    vector<int>ans;

    // Traversing arr and checking for every element of brr
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<brr.size(); j++){
            if(arr[i] == brr[j]){

                // TO AVOID DUPLICACY | MARK THE ELEMENTS
                brr[j] = INT_MIN;

                // Then normally push_back elements in ans array
                ans.push_back(arr[i]);
            }
        }
    }

    // Printing the ans array
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
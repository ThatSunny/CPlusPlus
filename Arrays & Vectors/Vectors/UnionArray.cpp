#include<iostream>
#include<vector>
#include<algorithm>     // TO USE FIND() FUNCTION
using namespace std;

int main(){

    // Declaring the first array
    vector<int> arr{1, 2, 3, 4};
    vector<int> brr{5, 6, 7, 4, 2, 3};

    // Declaring new array and pushing element into it
    vector<int>ans;

    // // Pushing arr to ans
    // for (int i=0; i<arr.size(); i++){
    //     ans.push_back(arr[i]);
    // }
    
    // // Pusing brr to ans
    // for(int i=0; i<brr.size(); i++){
    //     ans.push_back(brr[i]);
    // }

    
    // Finding unique elements by comparing to ans
    for(int i=0; i<arr.size(); i++){
        if(find(ans.begin(), ans.end(), arr[i]) == ans.end()) {

            // Pushing it to ans array
            ans.push_back(arr[i]);
        }
    }

    // Finding unique elements by comparing to ans
    for(int i=0; i<brr.size(); i++){
        if(find(ans.begin(), ans.end(), brr[i]) == ans.end()){
            
            //Pushing unique element ONLY to ans array
            ans.push_back(brr[i]);
        }
            
    }

    // Printing the array
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " "; 
    }
    
    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
     // Initializing the array
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Declaring a new array
    int transpose[3][3];

    // Traversing loop for each element
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            // Adding elements of arr to transpose array
            transpose[j][i] = arr[i][j];
        }
    }

    // Printing the array
    cout << "New matrix is: " << endl;
    for(int i=0; i<3 /*(Pass the size value | 3 here)*/ ; i++){
        for(int j=0; j<3; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
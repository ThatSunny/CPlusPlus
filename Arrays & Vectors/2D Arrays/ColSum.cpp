#include<iostream>
using namespace std;

int main(){
    // Initializing the array
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum=0;

    // Printing Columnwise Sum
    for(int i=0; i<3; i++){

        cout << "Sum of column " << i << ": ";
        for(int j=0; j<3; j++){
            sum = sum + arr[j][i];
        }
        cout << sum;

        // Resetting the value of sum
        sum=0;
        cout << endl;
    }
    return 0;
}
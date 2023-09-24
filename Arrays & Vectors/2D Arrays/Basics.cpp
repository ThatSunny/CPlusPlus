#include<iostream>
using namespace std;

int main(){

    // Declaring a 2D array
    int arr[3][3];

    // Initializing the array
    int brr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Printing the elements ROWISE
    cout << "Rowise print: " << endl;
    for(int i=0; i<3 /*(Pass the size value | 3 here)*/ ; i++){
        for(int j=0; j<3; j++){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    // Printing the elements COLUMNWISE
    cout << "Columnwise print: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << brr[j][i] /*Pass [j] first then [i]*/ << " ";
        }
        cout << endl;
    } 

    return 0;
}
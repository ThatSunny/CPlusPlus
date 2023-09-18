#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            
            // To print the character value
            int ans = j;
            char ch = ans + 'A' - 1 ;   // -1 because the  character starts from B

            cout << ch << " ";
        }

        // Reverse counting
        // Start from (row-1) and goes till 1
        for(int k=i-1; k>=1; k--){

            // To print the character value
            int ans = k;
            char ch = ans + 'A' - 1;    // -1 because the character starts from B
            
            cout << ch << " ";
        }
        cout << endl;
    }
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Upper Triangle
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i ;
            // Print * for characters other than last one
            if( j != i){
                cout << "*";
            }
        }
        cout << endl;
    }

    // Lower Triangle
    for(int i=2; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout << n-i+1 ;
            // Print * for characters other than last one
            if( j != n){
                cout << "*";
            }
        }
        cout << endl;
    }
}
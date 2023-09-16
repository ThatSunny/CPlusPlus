#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // For Upright Half Pyramid

    /* for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i==1 || i==n || j==1 || j==i){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    } */


    // For Downward Half Pyramid

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            if(i==1 || i==n || j==i || j==1 || j==n){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    } 
}
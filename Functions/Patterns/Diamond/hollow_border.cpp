#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Upper Triangle
    for(int i=1; i<=n; i++){
        
        // For Space
        for(int j=i; j<=n; j++){
            cout << "  ";
        }

        // For  Stars
        for(int k=1; k<=2*i-1; k++){
            // Prints star for first and last characters
            if(k==1 || k==2*i-1){
                cout << "* ";
            } 
            
            // Prints space for other characters
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    // Lower Triangle
    for(int i=2; i<=n; i++){
        
        // For Space
        for(int j=1; j<=i; j++){
            cout << "  ";
        }

        // For  Stars
        for(int k=1; k<=2*n - (2*i-1); k++){
            if(k==1 || k==2*n - (2*i-1)){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int count = 1;
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
        
    }
}
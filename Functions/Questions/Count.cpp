#include<iostream>
using namespace std;

void count(int n){
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
}

int main(){
    int n;
    cout << "Enter the value of: ";
    cin >> n;

    count(n);
    return 0;
}
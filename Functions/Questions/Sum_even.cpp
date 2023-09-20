#include<iostream>
using namespace std;

int sumeven(int n){
    int sum = 0;

    // Traversing the loops for even times
    for(int i=2; i<=n; i+=2){
        sum = sum + i;
    }
    return sum;

}

int main(){
    int num;
    cout << "Enter the value: ";
    cin >> num;

    int ans = sumeven(num);
    cout << "The sum is: " << ans << endl;
    
    return 0;
}
#include<iostream>
using namespace std;


// Statement 1: Can we have 2 Main Functions? 
/* int main(){
    int n;
    cout << "Enter the value: ";
    cin >> n;

    return 0;
    }

    int main(){
    int m;
    cout << "Enter another value: ";
    cin >> m;

    return 0;
    } */
// Answer: NO, Redefinition of `main()` error is thrown

// Statement 2: Can we have input parameters inside `int main()`?
/* int main(int x){
    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Value is: " << x << endl;

    return 0;
    } */
// Answer: NO, `int main()` can only have 0 as its parameter, or can take 2 arguments

// Statement 3: Can `int main()` has `return 1` instead of `return 0`?
/* int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Value of n is: " << n << endl;

    return 1;
    } */
// Answer: Yes, The function `int main()` works normally

// Statement 4: Can `int main()` has `return -1` instead of `return 0`?
/* int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Value of n is: " << n << endl;

    return -1;
    } */
// Answer: Yes, The function `int main()` works normally
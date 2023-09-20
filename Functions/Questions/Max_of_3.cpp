#include<iostream>
using namespace std;

int max(int a, int b, int c){
    if(a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

int main(){
    int num1, num2, num3;
    cout << "Enter three values: ";
    cin >> num1 >> num2 >> num3;

    int maxnum = max(num1, num2, num3);
    cout << "Largest value is: " << maxnum;

    return 0;
}
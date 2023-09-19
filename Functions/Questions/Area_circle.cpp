#include<iostream>
#include<cmath>
#define pi 3.14         // Using macro
using namespace std;

int area(int r){
    int area = 2 * pi * pow(r, 2);
    return area;
}

int main(){
    int r;
    cout << "Enter the radius: ";
    cin >> r;

    cout << "Area of circle is: " << area(r);

    return 0;
}
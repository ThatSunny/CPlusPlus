#include<iostream>
using namespace std;

// Creating macros 
#define PI 3.1415
#define MAXX(a, b) (a > b ? a : b) 
//                        ^~~~ Ternary Operator

float areaCircle(int& r){       // Using PI Macros
    return PI * r * r;
}

int maxNum(int x, int y){       // Using MAXX Macros

    int c = MAXX(x, y);
    return c;
}

int main(){

    int r;
    cout << "Radius: ";
    cin >> r;

    cout << "Area: " << areaCircle(r) << endl;
    cout << "Largest: " << maxNum(5,10);
    return 0;
}
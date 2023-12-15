#include<iostream>
using namespace std;

class ABC{

    public:
    int x;
    int *y;

    // Constructor
    ABC(int _x, int _y) : x(_x), y(new int(_y)) {} 

    // By default -> Dumb copy constructor (shallow copy)
    // ABC(const ABC &obj){

    //     x = obj.x;
    //     y = obj.y;
    // }

    // User defined -> Smart copy constructor (deep copy)
    ABC(const ABC &obj){

        x = obj.x;              // Static
        y = new int(*obj.y);    // Dynaic 
    }


    // Print func()
    void print(){
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
        cout << "*y: " << *y << endl << endl;
    }
};

int main(){
    ABC s1(10, 5);
    cout << "Old s1: \n";
    s1.print();

    // Copy constructor
    ABC s2(s1);         // OR ABC s2 = s1
    cout << "Old s2: \n";
    s2.print();

    // Changing pointer value in s2
    *s2.y = 20;
    cout << "New s2: \n";
    s2.print();

    cout << "New s1: \n";
    s1.print();             // In shallow copy -> Change is seen in s1 too
}
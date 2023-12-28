#include<iostream>
using namespace std;

class ABC{

    public:

    // Declaring static keyword
    static int x, y;

    void print(){
        printf("X: %d \nY: %d\n\n", x, y);
    }
};

// Defining outside the class
int ABC::x;
int ABC::y;

int main(){
    // Creating object
    ABC obj1;
    ABC obj2;

    // Setting values using obj1
    obj1.x = 5;
    obj1.y = 100;

    // Function call for obj1
    obj1.print();


    // Setting values using obj2
    obj2.x = 20;
    obj2.y = 53;
    
    // Function call for obj2
    obj2.print();

    // Calling func() for obj1 (again) -> New value observed
    obj1.print();
}
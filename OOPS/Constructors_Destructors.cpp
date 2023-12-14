#include<iostream>
using namespace std;

// Creating a class
class Animal{

    private:
    int weight;
    int age;

    public:

//     // Default constructor (No parameter)
//     Animal(){
//         cout << "Default constructor called" << endl;

//         // Initializing default values
//         this -> weight = 0;
//         this -> age = 0;
//     }


//     // Parameterized constructor
//     Animal(int age){
//         cout << "Parameterized constructor called" << endl;

//         // Setting values
//         this -> age = age;
// //              ^~~ Private data member
//     }


//     // Copy constructor
//     Animal(Animal &obj){        // Passed by reference so we dont get stuck in loop
//         cout << "Copy constructor called" << endl;

//         this -> age = age;
//         this -> weight = weight;
// //              ^~~~ Private data member 
//     }




    // Destructors
    ~Animal(){
        cout << "Destructor called" << endl;
    }

};

int main(){
    
//     // Default constructor called -> No parameter passed
//     // Creating an object for class
//     Animal a;
//     Animal *b = new Animal;



//     // Parameterized constructor called -> Parameter is passed
//     // Creating an object for class
//     Animal a(100);
//     Animal *b = new Animal(10);



//     // Copy constructor
//     Animal a;           // Creating an object
//     Animal b = a;       // b is another object || Passing as copy
// //         ^~ 'a' is passed in 'b'

//     // Alternate method
//     Animal c(b);



    // Destructors
    // For static objects
    Animal a;               // Destructor is automatically called

    // For dynamic memory allocation
    Animal* b = new Animal();

    delete b;               // Destructor is called manually      

}
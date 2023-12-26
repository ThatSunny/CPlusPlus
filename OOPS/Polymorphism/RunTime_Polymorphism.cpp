// Function over-riding

#include<iostream>
using namespace std;

// Parent class
class Animal{
    public:
    void speak(){
        cout << "Speaking" << endl;
    }
};

// Derived class
class Dog : public Animal{
    public:
    void speak(){           // Speak() function is overridden
        cout << "Barking" << endl;
    }
};  


int main(){

    // Creating object
    Animal a1;
    a1.speak();     // Prints definition under Animal class

    Dog d1;
    d1.speak();     // Prints definition under Dog class
}
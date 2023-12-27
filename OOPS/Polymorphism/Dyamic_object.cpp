#include<iostream>
using namespace std;

// Few patterns to keep in mind -> Important
// 1. parent* a = new parent();
// 2. parent* a = new child();                  //UpCasting

// 3. child* a = new child();
// 4. child* a = (child*) new child();          //DownCasting


// Parent class
class Animal{

    public:
    Animal(){
        cout << "Animal constructor" << endl;
    }   
};

// Derived class
class Dog : public Animal{

    public:
    Dog(){
        cout << "Dog constructor" << endl;
    }
};

int main(){

    // Creating objects dynamically

    // 1. parent* a = new parent();
    // Animal* a = new Animal();


//     // 2. parent* a = new child();
//     Animal* a = new Dog();              // Upcast
// //  ^~~ Pointer     ^~~ Object
// //      Type


    // 3. child* a = new child();
    // Dog* a = new Dog();


    // 4. child* a = (child*) new child(); 
    Dog* a = (Dog*) new Animal();          // DownCast
}

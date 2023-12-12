// Abstract Class -> Class having pure virtual function

#include<iostream>
using namespace std;

class Vehicle{                      // Abstract class
    
    public:
    virtual void honk() = 0;        // Pure Virtual function
};

class Derived : public Vehicle{     // Derived class
    
    public:
    
    void honk(){                    // Defining virtual function in derived (MUST!)
        cout << "HONK!" << endl;
    }
};

int main(){

    // Object creation
    Derived d1;
    d1.honk();                      // Function called

    return 0;
}
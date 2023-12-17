#include<iostream>
using namespace std;

// Parent class
class Animal{
    
    public:
    int age;
    int weight;

    void eat(){
        cout << "Eating" << endl;
    }
};

// Child / Derived class
class Dog : public Animal{

};

int main(){

    // Creating object for dog
    Dog d1;

    // Calling function of parent using object of child
    d1.eat();

}
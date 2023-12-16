#include<iostream>
using namespace std;

class Animal{

    // Perfect Enapsulation is achieved
    private:        // Access specifier
    int age;
    int weight;


    public:
    void eat(){
        cout << "Eating" << endl;
    }

    // Using getter and setter function  ||  For private data members
    int getAge(){
        return this->age;
    }

    int setAge(int age){
        this->age = age;
    }


};

int main(){

}
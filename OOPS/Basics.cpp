#include<iostream>
#include<cstring>
using namespace std;

// Creating a class
class Person{

    // Access specifier || Not accessible outside the class
    private:
    int weight;         // Using getter and setter function 

    // Access specifier || Accessible outside the class
    public:

    // State
    int age;
    string name;

    // Behaviour
    void sleep(){
        cout << "Sleeping" << endl;
    }

    // For private data member
    // Getter function
    int getWeight(){
        return weight;
    }

    // Setter function -> Used to set value
    void setWeight(int w){
        weight = w;
    }

};

int main(){

    // Object creation

    // Static Memory
    Person john;

    // Defining variables
    john.age = 20;
    john.name = "John";


    // Accessing values || Using (.) dot operator
    cout << "Using static memory" << endl;
    cout << "Name: " << john.name << endl;
    cout << "Age: " << john.age << endl;

    // Calling function (also uses object to access)
    john.sleep();

    // Calling private data members
    john.setWeight(75);         // Sets weight of object
    cout << "Weight: " << john.getWeight() << endl;     // Gets weight of object entered




    // Dynamic Memory
    Person* max = new Person;       // Use of 'new' keyword and pointer of Person data type
                                    // Similar to 'int* a = new int'
    
    // Defining values using de-referencing
    (*max).age = 15; 
    (*max).name = "Max";


    // Accessing the values || Using '->' arrow operator
    cout << endl << endl <<"Using dynamic memory" << endl;    

    cout << "Age: " << max -> age << endl;
    cout << "Name: " << max -> name << endl;
    max -> sleep();

    return 0;
}
// Can a constructor be declared private?   :   YES!

#include<iostream>
using namespace std;

class A{            //  A -> Data type || Class -> User defined data type 

    // Private access
    private:
    int x;

    // Constructor | Ctor
    A (int _x) : x(_x) {} 

    public:

    // Getter function for private member of x
    int getX() const{
        return this->x;
    }

    // Setter function
    void setX(int _val){
        this->x = _val;
    }

    // Friend class
    friend class B;     // To access private Constructor
                        // Only B can make objects of A
};

class B{

    public:
    A getXfromB(int _x){
//  ^~~ User defined data type

        return A(_x);
//             ^~~ Private constructor 
    }
};



int main(){

    // Creating object
    // A obj(5);

    // Printing func()
    // cout << obj.getX() << endl;


    B obj2;
    A obj = obj2.getXfromB(10);         // Using object of another class to access private Ctor

    cout << obj.getX();        // Now we can print the value of Ctor (ONLY BY USING OBJECT OF B)
}
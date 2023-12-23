// Friend keyword as class || Friend class

#include<iostream>
using namespace std;

class A{

    // Private access
    private:
    int x;

    public:

    // Friend Class
    friend class B;         // Allows accessing of private members
};

class B{

    public:
    void printX(A &a){
//                ^~~ Passing class A and obj(a)
        
        a.x = 10;       // Can directly modify private members of A
        cout << a.x;
    }
};

int main(){

    // Creating objects
    A a1;
    B b1;

    // Calling function
    b1.printX(a1);
}
// Friend keyword in function || Friend function

#include<iostream>
using namespace std;


class A{

    // Private access
    private:
    int x;

    public: 

    // Friend Function
    friend int printX(const A &);
//                            ^~~~ Declaration syntax
};

int printX(const A &a){

    cout << a.x;            // Can access the private member of A
}

int main(){

    // // Creating object
    A a1;

    // // Calling friend function
    printX(a1);

    return 0;
}
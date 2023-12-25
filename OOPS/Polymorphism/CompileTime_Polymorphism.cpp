// Function overloading
// Operator overloading

#include<iostream>
using namespace std;

// class FunctionOverloading{

//     public:

//     int a;
//     int b;

//     // Different function with same name but different parameters
//     int sum(int a, int b){
//         cout << "First : ";
//         return a+b;
//     }

//     int sum(int a, int b, int c){
//         cout << "Second : ";
//         return a + b + c;
//     }
// };




class OperatorOverloading{
    
    public:
    int val;

    // Operator overloading on '+'
    void operator+(OperatorOverloading& obj2){
//                                      ^~~~ Object 2 is passed by parameter                            
    
    int val1 = this->val;           // Assigning value of current object (obj1 from main)
    int val2 = obj2.val;        

    // Defining what it does
    cout << (val2 - val1) << endl;
    }

};

int main(){
    // FunctionOverloading obj;
    // // Calling function
    // cout << obj.sum(2,3) << endl;       // First function called
    // cout << obj.sum(5,2,1);             // Second function called

    

    OperatorOverloading obj1, obj2;
    
    // Performing operator overloading
    obj1.val = 5;
    obj2.val = 10;

    obj1 + obj2;        // Operator overloading

    return 0;
}
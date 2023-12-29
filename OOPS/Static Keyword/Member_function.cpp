#include<iostream>
using namespace std;

class ABC{

    public:

    // Declaring a static function
    static void print(){
        printf("Inside static function");
    }
};

int main(){

    // Creating object
    ABC obj1;

    // Calling static function
    ABC::print();
}
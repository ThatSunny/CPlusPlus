// Using const keyword along with class

#include<iostream>
using namespace std;

class ABC{

    private:
    // mutable int x;      // To change values in const funcion || ONLY FOR DEBUGGING
    
    int x;
    int* y;

    public:

    // Constructor
    ABC(){     
        x = 0;              // Static (Stacks)
        y = new int(0);     // Dynamic Memory (Heap)
    }

    // Constructor with parameter | Main() function
    // ABC(int val1, int val2){     
    //     x = val1;              
    //     y = new int(val2);       // Because pointer type data
    // }

    // CTor using initialization list
    ABC(int val1, int val2) : x(val1), y(new int(val2)) {}


    // Getter and Setter func() for X
    int getX() const {
        // x = 10;          // Possible with 'mutable' keyword inside const func()
        return this->x;
    }

    // Getter and Setter func() for Y
    int getY() const {
        return *this->y;
    }
};

void printABC(const ABC &obj){
    cout << obj.getX() << " " << obj.getY() << endl;
//              ^~~ Constant         ^~~~ Constant 
}

int main(){
    ABC s1(10, 50);
    printABC(s1);
}
#include<iostream>
using namespace std;

char grade(int marks){
    switch(marks / 10){
        case 9 : return 'A';
        break;
        case 8 : return 'B';
        break;
        default : return 'C'; 
    }
}

int main(){
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    cout << "Grade is: " << grade(marks);
    return 0;
}
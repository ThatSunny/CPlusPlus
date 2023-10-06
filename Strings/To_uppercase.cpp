#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch[100];
    cout << "Initial string: ";

    // Storing the user value in ch;
    cin.getline(ch, 50);

    // Calculating the string size
    int size = strlen(ch);

    // Declaring variables
    int i = 0;
    int j = size - 1;

    // Traversing loop for every element of ch
    for(int i=0; i<size; i++){

        // Checking if the character lies in lowercase range
        if(ch[i] >= 'a' && ch[i] <= 'z'){
            
            // Using formula || -'a' + 'A' 
            ch[i] = ch[i] - 'a' + 'A';
        }
    }

    // Printing the final answer
    cout << ch;

    return 0;
}
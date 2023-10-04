#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch[100];
    cout << "Enter your name: ";
    
    // Won't work with spaces
    // cin >> ch;

    // Storing the user value in ch;
    cin.getline(ch, 50);

    // Declaring variables
    int length = 0;
    int i = 0;

    // Using while loop || Terminates when condition fails
    // Checking for NULL character
    while(ch[i] != '\0'){
        
        // Incrementing the length
        length++;

        // Incrementing the loop
        i++;
    }

    // Printing the length of ch
    cout << "Length: " << length << endl;

    // Pre-defined function to find length
    cout << "Length: " << strlen(ch);
}
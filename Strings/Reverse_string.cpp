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
    
    // Loop terminates when i exceeds the value of j
    // Also terminates when i == j | For ODD number
    // while(i<=j){
    //     swap(ch[i], ch[j]);

    //     // Updating the variables
    //     i++;
    //     j--;
    // }

    // Using For loop   || Only i<=j condition is known, hence cant use another j loop
    for(; i<=j;){
            swap(ch[i], ch[j]);
            i++;
            j--;
    }
    
    // Printing the ch array
    cout << "Reversed string: " << ch;
}
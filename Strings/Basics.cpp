#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch[100];

    cout << "Enter your name: ";
    
    // To take input character by character
    // for(int i=0; i<10; i++){
    //     cin >> arr[i];
    // }


    // getline() takes input as whole 
    cin.getline(ch, 50);

    cout << ch;
}
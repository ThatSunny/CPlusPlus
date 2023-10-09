#include<iostream>
#include<string>
using namespace std;

int main(){

    // // Declaring a string
    // string str;

    // // Taking user input
    // cout << "Enter: ";
    // getline(cin, str);

    // // Printing string
    // cout << str << endl;

    // cout << "Length: " << str.length() << endl;     // To find string length
    // // cout << "Empty?: " << str.empty() << endl;      // To check if string is empty or not

    // cout << "Is string empty? : ";
    // if(str.empty() != 0){
    //     cout << "Yes" << endl;
    // } else{
    //     cout << "No" << endl;
    // }

    // // To pushback a character at its end
    // str.push_back('@');
    // cout << "After PUSH_BACK: " << str << endl;

    // // To remove last character from string
    // str.pop_back();
    // cout << "After POP_BACK: " << str << endl;

    // // To create a substring || Use it along with cout
    // cout << "Substring: " << str.substr(0, 6);

    // To find an element || Returns it's starting index
    string str1 ("Hello Everyone!!");
    string target = "Ever";

    // Checking if targer is at no position  
    if(str1.find(target) == string::npos){
        cout << "Not Found" << endl;
    } 
    else{
        cout << "Found at " << str1.find(target) << endl;
    }
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    //Upper Triangle
    for(int i=1; i<=n; i++){
        
        //For triangle one
        for(int a=i; a<=n; a++){
            cout << "* ";
        }

        //For triangle two
        for(int b=2; b<=i; b++){
            cout << "  ";
        }

        //For triangle three
        for(int c=2; c<=i; c++){
            cout << "  ";
        }

        //For triangle four
        for(int d=i; d<=n; d++){
            cout << "* ";
        }
        cout << endl;
    }

    //Lower Triangle
    for(int i=2; i<=n; i++){
        
        //For triangle one
        for(int a=1; a<=i; a++){
            cout << "* ";
        }

        //For triangle two
        for(int b=i+1; b<=n; b++){
            cout << "  ";
        }

        //For triangle three
        for(int c=i+1; c<=n; c++){
            cout << "  ";
        }

        //For triangle four
        for(int d=1; d<=i; d++){
            cout << "* ";
        }
        cout << endl;
    }
}
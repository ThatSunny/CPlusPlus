#include<iostream>
using namespace std;

int main(){
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0};
    int size = sizeof(arr)/sizeof(int);

    int Numzero = 0;
    int Numone  = 0;

    for(int i=0; i<size; i++){
        if (arr[i] == 0){
            Numzero++;
        } else { 
            Numone++;
        }
    }   
    cout << "Zeros: " << Numzero << endl;
    cout << "Ones : " << Numone  << endl;
}
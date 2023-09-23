#include<iostream>
#include<cstring>   //To use memset()
using namespace std;

int main(){
    unsigned char arr[5] = {1, 2, 3, 4, 5};
    const int size = 5;

    memset(arr, 7, sizeof(arr));

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
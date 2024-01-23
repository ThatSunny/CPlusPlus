// Find the middle element in a stack

#include<iostream>
#include<stack>
using namespace std;

void printMid(stack<int> &st, int &Tsize) {
    
    // If stack is empty
    if(Tsize == 0) {
        cout << "Empty" << endl;
        return;
    }

    // Base case
    if(st.size() == Tsize/2 + 1) {

        // Printing middle element
        cout << "Mid: " << st.top();
        return;
    }

    int temp = st.top();
    st.pop();

    // Recursive call
    printMid(st, Tsize);

    // Back Tracking
    st.push(temp);
}

int main() {

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);

    // Total size of stack
    int Tsize = st.size();

    // Calling function
    printMid(st, Tsize);

}

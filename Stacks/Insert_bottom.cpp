// Insert top element from the stack to the bottom

#include<iostream>
#include<stack>
using namespace std;


void insertBottom(stack<int> &st, int target) {

    // Base case -> When stack is empty 
    if(st.empty()){
        
        // Insert the target here
        st.push(target);
        return;
    }

    int topEl = st.top();               // Fetching top element
    st.pop();                           // Removing it from the stack
   
    // Recursive call
    insertBottom(st, target);

    // Back-tracking
    st.push(topEl);

}

int main() {

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    
    // Making sure stack is non-empty
    if(st.empty()) {
        cout << "Emtpy";
        return 0;
    }

    // Finding the top element -> target
    int target = st.top();
    st.pop();


    // Calling function
    insertBottom(st, target);

    // Printing the stack
    cout << "Printing" << endl;
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
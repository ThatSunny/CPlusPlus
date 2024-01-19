// Reverse the elements of a stack
// REUSING OLD CODE -> REVERSE AT BOTTOM

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

void revStack(stack<int> &st) {

    // Base call
    if(st.empty()) {
        return;                     // Returning to previous stack from empty stack
    }                               // and use insertBottom()

    // Solving one case
    int topEl = st.top();           // Fetching top element -> Insert at bottom after reversing
    st.pop();

    // Recursive call
    revStack(st);

    // Back-Tracking -> Adding the top after reversing
    insertBottom(st, topEl);
     
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
  
    // Before -> 50 40 30 20 10 

    // Calling reverse function
    revStack(st); 

    // Printing
    cout << "After" << endl;
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    } 
}

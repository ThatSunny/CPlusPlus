#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

// // Finding unique element in array
// int UniqueElement(vector<int>arr);

// int main(){

//     // Declaring and taking size of array
//     int n;
//     cout << "Enter the size of array: ";
//     cin >> n;

//     // Declaring vector
//     vector<int>arr(n);

//     // Taking input
//     cout << "Enter elements: " << endl;
//     for(int i=0; i<arr.size(); i++){
//         cin >> arr[i];
//     }
    
//     // Calling Function
//     int unique = UniqueElement(arr);
//     cout << "Unique element is: " << unique;
// }

// // Function Definition
// int UniqueElement(vector<int>arr){
//     int ans = 0;
//     for(int i=0; i<arr.size(); i++){
//         ans = ans ^ arr[i];         //XOR-ing elements
//     }
//     return ans;
// }





// // Finding Union of 2 arrays
// int main(){

//     // Declaring the size of arrays and taking user input
//     int num1, num2;

//     cout << "Size of first array: ";
//     cin >> num1;

//     cout << "Size of second array: ";
//     cin >> num2;

//     // Declaring 2 arrays/vectors
//     vector<int>arr(num1);
//     vector<int>brr(num2);

//     // Input-ing first array elements
//     cout << "Elements of first: " << endl;
//     for(int i=0; i<arr.size(); i++){
//         cin >> arr[i];
//     }

//     // Input-ing second array elements
//     cout << "Elements of second: " << endl;
//     for(int i=0; i<brr.size(); i++){
//         cin >> brr[i];
//     }

//     // Creating a set | Helps remove the duplicate elements ans sort automatically
//     set<int>ans;

//     // 1 | Adding every element of arr to ans
//     for(int i=0; i<arr.size(); i++){
//         ans.insert(arr[i]);
//     }

//     // 2 | Adding every element of brr to ans
//     for(int i=0; i<brr.size(); i++){
//         ans.insert(brr[i]); 
//     }

//     // Printing elements of ans
//     cout << "Union of 2 array is: " << endl;

//     // To print elements from a set
//     for(int element : ans){
//         cout << element << " ";
//     }
// }





// Intersection of two arrays
// int main(){

//     // Declaring the size of arrays and taking user input
//     int num1, num2;

//     cout << "Size of first array: ";
//     cin >> num1;

//     cout << "Size of second array: ";
//     cin >> num2;

//     // Declaring 2 arrays/vectors
//     vector<int>arr(num1);
//     vector<int>brr(num2);

//     // Input-ing first array elements
//     cout << "Elements of first: " << endl;
//     for(int i=0; i<arr.size(); i++){
//         cin >> arr[i];
//     }

//     // Input-ing second array elements
//     cout << "Elements of second: " << endl;
//     for(int i=0; i<brr.size(); i++){
//         cin >> brr[i];
//     }

//     // Declaring a new array (ans) and adding values of arr and brr to it 
//     vector<int>ans;

//     // Traversing through first array(arr)
//     for(int i=0; i<arr.size(); i++){
//         // Traversing through second array (brr) for each element of arr 
//         for(int j=0; j<brr.size(); j++){
            
//             // If elements are equal
//             if(arr[i] == brr[j]){

//                 // To avoid duplicate element from printing
//                 brr[j] = INT_MIN;

//                 ans.push_back(arr[i]);  //Pushing elements of arr into ans
//             }
//         }
//     }

//     // Printing the final array (ans)
//     cout << "Union of 2 array is: " << endl;
//     for(int i=0; i<ans.size(); i++){
//         cout << ans[i] << " ";
//     }
// }





// Finding pair which returns the given sum
// int main(){
    
//     //Declaring the size of arrays and taking user input
//     int num;
//     cout << "Size of array: ";
//     cin >> num;

//     // Declaring the array/vector
//     vector<int>arr(num);

//     // Input-ing first array elements
//     cout << "Enter the elements: " << endl;
//     for(int i=0; i<arr.size(); i++){
//         cin >> arr[i];
//     }

//     // Declaring other variables
//     int sum;
//     cout << "Enter the sum: ";
//     cin >> sum;

//     // Traversing loop for each element of array (arr)
//     cout << "Pairs are: " << endl;
//     for(int i=0; i<arr.size(); i++){
        
//         // Traversing another loop for same array
//         for(int j=0; j<arr.size(); j++){

//             // Checking when pairs equals sum
//             if(arr[i] + arr[j] == sum){
//                 cout << arr[i] << " " << arr[j] << endl;    // Printing the pairs
//             }
//         }
//     }
// }





// Sorting 0s and 1s in array
// int main(){

//     // Declaring the size of arrays and taking user input
//     int num;
//     cout << "Size of array: ";
//     cin >> num;

//     // Declaring the array/vector
//     vector<int>arr(num);

//     // Input-ing first array elements
//     cout << "Enter the elements: " << endl;
//     for(int i=0; i<arr.size(); i++){
//         cin >> arr[i];
//     }

//     // Declaring 2 pointers | Start & Ending index
//     int start = 0;
//     int end = arr.size() - 1;

//     // Loop terminates when start pointer exceeds or equals the value of end pointer
//     while(start <= end){
//         // 1 | Checking start index element = 0
//         if(arr[start] == 0){
            
//             // Do nothing | Index increments by 1
//             start++;
//         } 

//         // 2 | Checking end index element = 1
//         else if(arr[end] == 1){

//             // Do nothing | Index decrements by 1
//             end--;
//         }
        
//         // 3 | Checking if arr[start] = 1 and arr[end] = 0 | Then swap 
//         else if(arr[start] == 1 && arr[end] == 0){
//             swap(arr[start], arr[end]);
//         }
//     }

//     // Printing the final array (ans)
//     cout << "Sorted array is: " << endl;
//     for(int i=0; i<arr.size(); i++){
//         cout << arr[i] << " ";
//     }
// }





// Printing elements of 2D array row-wise
// int main(){
    
//     // Declaring a 2D array
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     int size = 3;

//     // Printing the array
//     // Traversing loop for the Row index [X][]
//     for(int i=0; i<size; i++){

//         // Traversing loop for the Column index [][Y]
//         for(int j=0; j<size; j++){
//             cout << arr[i][j] << " ";       // [i][j] Rowise
//         }

//         // Line break after each row ends
//         cout << endl;
//     }
// }





// Printing elements of 2D array col-wise
// int main(){
    
//     // Declaring a 2D array
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     int size = 3;

//     // Printing the array
//     // Traversing loop for the Row index [X][]
//     for(int i=0; i<size; i++){

//         // Traversing loop for the Column index [][Y]
//         for(int j=0; j<size; j++){
//             cout << arr[j][i] << " ";       // [j][i] Columnwise
//         }

//         // Line break after each row ends
//         cout << endl;
//     }
// }





// Printing rowise sum
// int main(){
    
//     // Declaring a 2D array
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     int size = 3;

//     // Declaring the variable to store the sum
//     int sum = 0;

//     // Traversing loop for the Row index [X][]
//     for(int i=0; i<size; i++){

//         // Traversing loop for the Column index [][Y]
//         for(int j=0; j<size; j++){

//             // Storing the value 
//             sum = sum + arr[i][j];
//         }

//         // Printing the value of sum
//         cout << "Sum of row " << i << ": " << sum << endl;

//         // Value of sum set to 0
//         sum = 0;
//     }
// }





//  Printing column wise sum 
// int main(){
    
//    // Declaring a 2D array
//    int arr[3][3] = {
//        {1, 2, 3},
//        {4, 5, 6},
//        {7, 8, 9}
//    };

//    int size = 3;

//     // Declaring the variable to store the sum
//     int sum = 0;

//     // Traversing loop for the Row index [X][]
//     for(int i=0; i<size; i++){

//     // Traversing loop for the Column index [][Y]
//     for(int j=0; j<size; j++){

//         // Storing the value 
//         sum = sum + arr[j][i];
//     }

//         // Printing the value of sum
//         cout << "Sum of row " << i << ": " << sum << endl;

//         // Value of sum set to 0
//         sum = 0;
//     }
// }





// Find minimum element in a 2D array
// int main(){

//     // Declaring a 2D array
//     int arr[3][3] = {
//         {11, 42, 63},
//         {46, 58, 64},
//         {70, 86, 91}
//     };

//     int size = 3;

//     // Declaring other variable
//     int min = INT_MAX;

//     // Traversing loop for the Row index [X][]
//     for(int i=0; i<size; i++){

//         // Traversing loop for the Column index [][Y]
//         for(int j=0; j<size; j++){

//             // Comparing the elements to min
//             if(arr[i][j] < min){
//                 min = arr[i][j];    // Storing the element in min
//             }

//         }
//     }
//     // Printing the minimum element from the array
//     cout << "The minimum element is: " << min;
// }





// Find maximum element in a 2D array
// int main(){

//     // Declaring a 2D array
//     int arr[3][3] = {
//         {11, 42, 63},
//         {46, 58, 64},
//         {70, 86, 91}
//     };

//     int size = 3;

//     // Declaring other variable
//     int max = INT_MIN;

//     // Traversing loop for the Row index [X][]
//     for(int i=0; i<size; i++){

//         // Traversing loop for the Column index [][Y]
//         for(int j=0; j<size; j++){

//             // Comparing the elements to min
//             if(arr[i][j] > max){
//                 max = arr[i][j];    // Storing the element in min
//             }

//         }
//     }
//     // Printing the minimum element from the array
//     cout << "The minimum element is: " << max;
// }





// Find the transpose of a matrix
// int main(){

//     // Declaring a 2D array
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     int size = 3;
    
//     // Creating a new array
//     int ans[3][3];

//     // Traversing loop for the row index [X][]
//     for(int i=0; i<size; i++){

//         // Traversing loop for the column index [][Y]
//         for(int j=0; j<size; j++){
            
//             // Mapping each element of [j][i] to [i][j]
//             ans[i][j] = arr[j][i];
//         }
//     }

//     // Printing the transpose array 
//     // Traversing loop for the row index [X][]
//     for(int i=0; i<size; i++){

//         // Traversing loop for the column index [][Y]
//         for(int j=0; j<size; j++){
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }
// }





// Basics of 2D arrays using vectors
// int main(){

//     // Declaring without rows and column
//     vector<vector<int>>arr;

//     // Precise declaration with rows and column
//     int row = 3;
//     int col = 3;
//     vector<vector<int> >brr(row, vector<int>(col, 0));   // All elements are set to 0 

//     // Find number of rows
//     cout << "Rows: " << brr.size() << endl;

//     // Find number of columns   | If all columns are equal
//     cout << "Columns: " << brr[0].size() << endl;

//     // Columns if all columns are different
//     // for(int i=0; i<brr.size(); i++){
//     //     cout << "Columns: " << brr[i].size() << endl;
//     // }
// } 





// Search a given element using binary search
// int main(){

//     // Taking array size as user input
//     int n;
//     cout << "Enter the size of array: ";
//     cin >> n;

//     // Declaring an array
//     vector<int>arr(n);

//     // Taking elements of array from user
//     cout << "Enter the elements of array: " << endl;
//     for(int i=0; i<arr.size(); i++){
//         cin >> arr[i];
//     }

//     // Declaring start, middle and ending index
//     int start = 0;
//     int end = arr.size() - 1;
//     int mid = start + (end - start) / 2;

//     // Declaring other variables
//     bool found = false;
//     vector<int>index;   // Vector to store multiple indexes for duplicate elements

//     // Taking user input of key 
//     int key;
//     cout << "Element to search: ";
//     cin >> key;

//     // Loop stops when start exceeds the value of end
//     while(start <= end && !found){

//         // 1 | if arr[mid] = key
//         if(arr[mid] == key){

//             // Element found
//             found = true;
            
//             // Storing the value of mid to index
//             index.push_back(mid);    // Make changes here to get correct output 
//         }

//         // 2 | if arr[mid] < key 
//         if(arr[mid] < key){

//             // Moving right
//             start = mid + 1;
//         }

//         // 3 | if arr[mid] > key
//         if(arr[mid] > key){

//             // Moving left
//             end = mid - 1;
//         }

//         // Updating mid after each change happens
//         mid = start + (end - start) / 2;
//     }

//     // Printing the index value
//     if(found){
//         cout << "Index of element is: ";
//         for(int i=0; i<index.size(); i++){
//             cout << index[i] << " ";
//         } 
//         cout << endl;
//     }
//     else{
//         cout << "Element is not present";
//     }
// } 





// Finding given element using pre-defined function
// int main(){

//     // FOR ARRAYS
//     cout << "Using Array" << endl;
    
//     // Declaring an array
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(int);

//     // Taking user input of key 
//     int key;
//     cout << "Element to search: ";
//     cin >> key;

//     // Using pre-defined function
//     int ans = binary_search(arr, arr + size, key);

//     // Printing the value
//     if(ans){
//         cout << "Element found" << endl;
//     }
//     else{
//         cout << "Element not found" << endl; 
//     }

//     cout << endl << endl;


//     // FOR VECTORS
//     cout << "Using Vector" << endl;

//     // Taking array size as user input
//     int n;
//     cout << "Size of array: ";
//     cin >> n;

//     // Declaring an array
//     vector<int>brr(n);

//     // Taking elements of array from user
//     cout << "Elements of array: " << endl;
//     for(int i=0; i<brr.size(); i++){
//         cin >> brr[i];
//     } 

//     // Using pre-defined function
//     int ans2 = binary_search(brr.begin(), brr.end(), key);

//     // Printing the value
//     if(ans2){
//         cout << "Element found" << endl;
//     }
//     else{
//         cout << "Element not found" << endl; 
//     }

// }

// Leetcode : Count Primes
// Given a number 'n', return the number of primes less than n

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


// // Approach 1  || Naive Approach
// bool isPrime(int n){
//     if (n<=1){
//         return false;
//     }

//     for(int i=2; i<n; i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){

//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     // Declaring count
//     int count = 0;

//     // Traversing loop until n
//     for(int i=0; i<=n; i++){

//         // Check for prime
//         if(isPrime(i)){
//             count++;
//         }
//     }

//     // Printing the final answer
//     cout << "Prime numbers: " << count;
// }





// // Approach 2  || Square root Approach
// bool isPrime(int n){

//     // Finding square root of number
//     int sqrtnum = sqrt(n);

//     if (n<=1){
//         return false;
//     }

//     // Loop traverses only till sqrt of num
//     for(int i=2; i<=sqrtnum; i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){

//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     // Declaring count
//     int count = 0;

//     // Traversing loop until n
//     for(int i=0; i<=n; i++){

//         // Check for prime
//         if(isPrime(i)){
//             count++;
//         }
//     }

//     // Printing the final answer
//     cout << "Prime numbers: " << count;
// }





// // Approach 3  || Sieve of Eratosthenes
// int main(){
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     // Declaring other variables
//     int count = 0;

//     // Creating an array upto n terms
//     vector<bool> prime(n, true);    // Marking all as true initially

//     // Marking 0 and 1 as false  |  Because non-prime
//     prime[0] = prime[1] = false;

//     // Loop traverses for rest all elements of array
//     for(int i=2; i<n; i++){
        
//         // For other elements of table
//         if(prime[i]){

//             // Incrementing count
//             // First element of every table
//             count++;

//             // Starting j from i^2 and marking them false 
//             int j = i*i;

//             // Loop traverses only for values upto n    
//             while(j < n){

//                 // Marking all multiples as false
//                 prime[j] = false;

//                 // Incrementing the value of j
//                 j+=i;
//             }
//         }
//     }

//     // Printing the final answer
//     cout << "Prime numbers: " << count;
// }





// // Approach 3.2  ||  Optimized Sieve of Eratosthenes
// int main() {

//     // Declaring variable and asking for user input
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;


//     // Creating a vector of n+1 size
//     // Because if n size is created -> Indexing goes from 0 to n-1

//     vector<bool> Sieve(n+1, true); // Marking all as true initially

//     Sieve[0] = Sieve[1] = false;   // Marking 0 and 1 as non-primes

//     for(int i=2; i*i<=n; i++){     // Optimization 1 : Loop only traverses till `i <= sqrt(n)` or `i*i <= n`
        
//         // If true | Prime
//         if(Sieve[i]){

//             // Mark all other multiples as false | Increase size by `+=i`
//             for(int j=i*i; j<=n; j+=i){        // Optimization 2 : j starts from square value | Because all previous elements has been marked 
//             Sieve[j] = false;
//             }
//         }
//     }

//     // Printing the leftover true values
//     for(int i=2; i<=n; i++){
//             if(Sieve[i]){
//             cout << i << " ";
//         }
//     }

//     return 0;
// }





// Approach 4  ||  Segmented Sieve (To find primes between L and R)

// Function to implement segmented sieve
void segmentedSieve(int L, int R) {

    // 1 | Finding primes up to sqrt(R) using the Sieve of Eratosthenes
    
    int limit = sqrt(R);   // To avoid overwriting of values 
    
    // This vector contain all elements upto sqrt(R)
    vector<bool> isPrime(limit + 1, true);      // All marked as TRUE initially 

    // New vector which will contain all primes (push_back)  
    vector<int> primes;

    // Sieve of Eratosthenes to find primes
    for (int i = 2; i <= limit; i++) {          // OR `i*i <= R`
        if (isPrime[i]) {

            // Pushing primes to `prime` vector
            primes.push_back(i);

            // Marking all multiples as false
            for (int j = i * i; j <= limit; j += i)
                isPrime[j] = false;
        }
    }


    // 2 | Finding primes in the range of L and R

    // Declaring a vector of size `(R-L+1)`
    vector<bool> range(R - L + 1, true);

    // Handling special case for L=0 and L=1 
    range[0] = range[1] = false;

    // Marking non-prime numbers in the range
    for (int p : primes) {

        // First multiple is given by this formula
        int first_mul = (L / p) * p;

        // Start of the new array(range) will be the max of these two
        int start = max(first_mul, p * p);

        // Marking all multiples in range vector as false
        for (int j = start; j <= R; j += p)
            range[j] = false;
    }

    // Printing prime numbers in the range
    for (int i = 0; i <= R - L; i++) {
        if (range[i]){
            cout << i + L << " ";
        }
    }
}

int main() {

    // Declaring variables and taking user input
    int L, R;
    cout << "Enter the range (L and R): ";
    cin >> L >> R;

    cout << "Primes between " << L << " and " << R << ": " << endl;
    segmentedSieve(L, R);       // Calling function & Printing answer

    return 0;
}













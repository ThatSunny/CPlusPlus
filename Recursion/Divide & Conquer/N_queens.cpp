// Find an arrangement of N queens on a chess board, such that no queen can attack any other queens on the board.
// The chess queens can attack in any direction as horizontal, vertical, horizontal and diagonal way.

#include<iostream>
#include<vector>
using namespace std;

void printSolution( vector<vector<char>> &board, int n){

    // Printing the board || 2D array
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            cout << board[i][j] << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
}

bool isSafe(int row, int col, vector<vector<char>> &board, int n){
     
    // Checking -> If Queen can be placed in current cell `board[row][col]`
    // We've to check in 3 left directions || Not checking right, because no Queen is placed there
    
    int i = row;
    int j = col;

    // Checking row
    while(j >= 0){

        // If Queen found
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
    }

    // Checking Upper Diagonal
    // Re-Declaring i and j
    i = row;
    j = col;

    while(i>=0 && j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i--;
        j--;
    }

    // Checking Bottom Diagonal
    // Re-Declaring i and j
    i = row;
    j = col;
    
    while(i<n && j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;
    }
    
    // Queen found no-where
    return true;

}

void solveQueen( vector<vector<char>> &board, int col, int n){

    // Base condition
    // Stop when all Queens are placed
    if( col >= n ){     // col exceeds the matrix size
        
        // Calling function which prints the result
        printSolution(board, n);
        return;
    }

    // Solving 1 case | Rest gets handled by recursion
    // Placing queen in each row
    for(int row = 0; row<n; row++){

        // Checking is Queen in safe to place
        if( isSafe(row, col, board, n) ){

            // If true -> Place the Queen
            board[row][col] = 'Q';

            // Recursive Relation
            solveQueen(board, col+1, n);        // For next column

            // Backtracking
            board[row][col] = '-';
        }
    }

}


int main(){
    // Declaring size of square matrix || Board dimensions
    int n=4;

    // Creating a board of n size
    vector<vector<char>> board(n, vector<char>(n, '-'));

    // Declaring columns || Becase we only have to check for col = 0, Rest gets handled by Recursion
    int col = 0;

    // Calling function
    solveQueen(board, col, n);


    return 0;
}
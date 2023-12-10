// Write a program that solves the remaining blocks in a Sudoku game

#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<vector<char>>& board, char dig, int curr_row, int curr_col){
    
    int n = board.size();       // Useful to travese through row and column

    for(int i=0; i<n; i++){

        // Checking row elements  -> Columns changes
        if(board[curr_row][i] == dig){          // [][i] : Column is changing 
            return false;                       // If same digit is found
        }

        // Checking column elements  ->  Row changes
        if(board[i][curr_col] == dig){          // [i][] : Row is changing
            return false;                       // If same digit is found
        }

        // Checking 3x3 box
        if(board[3*(curr_row/3) + (i/3)][3*(curr_col/3) + (i%3)] == dig){
            return false;
        } 

    }

    return true;

}


bool solveSudoku(vector<vector<char>>& board, int n){

    // Traversing through all elements
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            // Only place if an empty cell 
            if(board[i][j] == '0'){

                // Traversing loop for 1 -> 9
                for(char dig= '1'; dig<= '9'; dig++){
                    
                    // Check for safety
                    if( isSafe(board, dig, i, j) ){
                        
                        // If safe -> Place the number
                        board[i][j] = dig;

                        // Recursive Relation               
                        bool remainingBoard = solveSudoku(board, n);     // Are we able to solve the ahead cells completely
                        if(remainingBoard == true){                      // after placing an element in (i,j)
                            return true;
                        }                        

                        else{
                            board[i][j] = '0';                        // Rest of the board couldn't be solved -> Go back
                        }
                    }
                }
                // If digits placed doesnt give us solution
                // Go back by returning false
                return false;       // This now makes loop traverse from next numbers between '1 -> 9'
            }

        }
    }

    // All cells are traversed and filled
    return true;
}

int main(){

    // Declaring 2D array  ||  Given originally
    vector<vector<char>> board = { 
        {'4', '5', '0', '0', '0', '0', '0', '0', '0'},    
        {'0', '0', '2', '0', '7', '0', '6', '3', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '2', '8'},
        {'0', '0', '0', '9', '5', '0', '0', '0', '0'},
        {'0', '8', '6', '0', '0', '0', '2', '0', '0'},
        {'0', '2', '0', '6', '0', '0', '7', '5', '0'},
        {'0', '0', '0', '0', '0', '0', '4', '7', '6'},
        {'0', '7', '0', '0', '4', '5', '0', '0', '0'},
        {'0', '0', '8', '0', '0', '9', '0', '0', '0'}
    };

    int n = board.size();

    // Calling function
    solveSudoku(board, n);


    // Print solution
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
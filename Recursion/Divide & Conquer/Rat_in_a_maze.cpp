// You're given a matrix, and are required to print the path for rat to reach it's destination
// Rat can only travel with paths as '1' and not on '0'.

#include<iostream>
#include<vector>
using namespace std;

// Function to check conditions to travel to next block
bool isSafe(int x, int y, int arr[][3], int row, int col, vector<vector<bool> > &isVisited){
    if( ( (x >= 0 && x < row) && (y >=0 && y < col) )  &&   // Index is inside the array 
        ( arr[x][y] == 1 ) &&                               // Should be marked 1 in maze array
        ( isVisited[x][y] == false ) ){                     // Should not be visited
        
        return true;
    }

    else {
        return false;
    }

}

void solveMaze(int arr[][3], int row, int col, int i, int j, vector<vector<bool> > &isVisited, string justTravelled, vector<string> &path) {

    // Base condition
    if( (i == row-1) && (j == col-1) ){

        // Store the answer
        path.push_back(justTravelled);
        return;
    }

    // Storing the movements the rat will traverse
    // Down -> i+1, j
    if( isSafe(i+1, j, arr, row, col, isVisited) ){  // Function to check all conditions to move the mouse

        // Marking visited
        isVisited[i+1][j] = true;

        // Calling function again to check next possible directions || On new block
        solveMaze(arr, row, col, i+1, j, isVisited, justTravelled + 'D', path);     // Storing 'D' 

        // Backtracking to make the path as original
        isVisited[i+1][j] = false;
    } 
    // Left -> i, j-1
    if( isSafe(i, j-1, arr, row, col, isVisited) ){

        // Marking visited
        isVisited[i][j-1] = true;

        // Calling function again to check next possible directions || On new block
        solveMaze(arr, row, col, i, j-1, isVisited, justTravelled + 'L', path);     // Storing 'L'

        // Backtracking || Incase the new path include some part of already covered path
        isVisited[i][j-1] = false;
    }

    // Right -> i, j+1
    if( isSafe(i, j+1, arr, row, col, isVisited) ){

        // Marking visited
        isVisited[i][j+1] = true;

        // Calling function again to check next possible directions || On new block
        solveMaze(arr, row, col, i, j+1, isVisited, justTravelled + 'R', path);     // Storing 'R'

        // Backtracking
        isVisited[i][j+1] = false;
    }

    // Up -> i-1, j
    if( isSafe(i-1, j, arr, row, col, isVisited) ){

        // Marking the new block as visited
        isVisited[i-1][j] = true;

        // Calling function again to check next possible directions || On new block
        solveMaze(arr, row, col, i-1, j, isVisited, justTravelled + 'U', path);     // Storing 'U'

        // Backtracking
        isVisited[i-1][j] = false;
    }
}


int main(){
    // Declaring the array || Building the maze
    int maze[3][3] = {
        {1, 0, 0},
        {1, 1, 0},
        {1, 1, 1}
    };
    
    int row = 3;
    int col = 3;

    // Marking the source positions
    int i = 0;
    int j = 0;
 
    // Edge case 1 : If first position is marked as 0 || Mouse does't exist
    if(maze[0][0] == 0){
        cout << "No path exist" << endl;
        return 0;                           // Exits the main function
    }

    // Creating an isVisited array  ||  To mark the path covered
    vector<vector<bool> >isVisited(row, vector<bool>(col, false));

    // Marking the source as visited -> 1
    isVisited[0][0] = true;
     
    // String to store current character -> Just travelled
    string justTravelled = "";

    // String to store the final output || Total path covered
    vector<string> path;

    // Calling function
    solveMaze(maze, row, col, i, j, isVisited, justTravelled, path);

    // Printing the answer
    cout << "Possible routes: " << endl;

    for(int i=0; i<path.size(); i++){
        cout << path[i] << " "; 
        cout << endl;
    }


    // Edge case 2 : If path string is empty -> No path exists
    if(path.size() == 0){
        cout << "No path exist" << endl;
    }
}
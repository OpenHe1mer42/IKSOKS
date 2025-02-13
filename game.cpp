#include <iostream>
#include <limits>
using namespace std;

void initializeBoard(char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';
        }
    }
}


void playerMove(char board[3][3], int player) {
    int row, col;
    char mark = (player == 1) ? 'X' : 'O';
    
    while (true) {
        cout << "Player " << player << " (" << mark << "), enter your move (row and column: 1-3): ";
        cout << "Row: ";
        if (!(cin >> row)) {
            cout << "Invalid input: Please enter a valid integer for row." << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            continue;
        }
        
        cout << "Col: ";
        if (!(cin >> col)) {
            cout << "Invalid input: Please enter a valid integer for column." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        
        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row-1][col-1] == ' ') {
            board[row-1][col-1] = mark;
            break;
        }
        else {
            cout << "Invalid move, try again." << endl;
        }
    }
}

bool checkWin(char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') return true;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') return true;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') return true;

    return false;
}

bool checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') return false;
        }
    }
    return true;
}

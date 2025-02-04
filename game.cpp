#include <iostream>
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
        cin >> row >> col;
        
        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row-1][col-1] == ' ') {
            board[row-1][col-1] = mark;
            break;
        } else {
            cout << "Invalid move, try again." << endl;
        }
    }
}
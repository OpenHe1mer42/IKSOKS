#include <iostream>
using namespace std;

void initializeBoard(char table[3][3]);
void displayTable(char table[3][3]);
void playerMove(char table[3][3], int player);
bool checkWin(char table[3][3]);
bool checkDraw(char table[3][3]);

int main() {
    char table[3][3];
    bool playAgain = true;

    while (playAgain) {
        initializeBoard(table);
        int currentPlayer = 1;
        bool gameOver = false;

        while (!gameOver) {
            displayTable(table);
            playerMove(table, currentPlayer);

            if (checkWin(table)) {
                displayTable(table);
                cout << "Player " << currentPlayer << " wins!" << endl;
                gameOver = true;
            } else if (checkDraw(table)) {
                displayTable(table);
                cout << "It's a draw!" << endl;
                gameOver = true;
            } else {
                currentPlayer = (currentPlayer == 1) ? 2 : 1;
            }
        }

        char choice;
        cout << "Do you want to play again? (y/n): ";
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            playAgain = false;
        }
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}

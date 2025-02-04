**Tic Tac Toe Game in C++**

This is a simple game played by 2 playeres, where players take turns to mark X and O on a 3x3 grid. The game continues until one player wins or the game ends in a draw. After each game, players have the option to play again.

**How to Play**

_Start the game:_
Player 1 uses X, and Player 2 uses O.
The game board is displayed in the console.

_Making a move:_
Players are prompted to enter the row and column numbers (1 to 3) to place their mark.
For example, entering 2 3 places your mark in the second row and third column.

_Winning the game:_
A player wins by placing three of their marks in a horizontal, vertical, or diagonal row.

_Draw:_
If all squares are filled without a winner, the game ends in a draw.

_Restarting the game:_
After a win or draw, you'll be asked if you'd like to play again (y/n).

**Project Structure**

/ IKSOKS
|-- main.cpp         # Main game loop and player control
|-- game.cpp         # Game logic: initializing board, checking win/draw, player moves
|-- display.cpp      # Console display for rendering the game table

**File Descriptions:**

_main.cpp_
Entry point of the game.
Handles the game loop, switching turns, checking for win/draw conditions, and replay functionality.

_game.cpp_
Contains functions to initialize the game board, process player moves, and determine game outcomes.

_display.cpp_
Handles rendering the game board in the console.

**Functions Used**
In main.cpp:
int main(): Controls the game loop and manages player turns.

In game.cpp:
void initializeBoard(char board[3][3]): Initializes the 3x3 board with empty spaces.
void playerMove(char board[3][3], int player): Prompts the player to enter their move and updates the board.
bool checkWin(char board[3][3]): Checks if a player has won the game
bool checkDraw(char board[3][3]): Checks if the game is a draw (no empty spaces and no winner).

In display.cpp:void displayBoard(char board[3][3]): Displays the current state of the game board in the console.

How to Compile and Run
Using Command Line:
Navigate to the project directory:
```
cd path/to/IKSOKS
```
Compile the program:
```
g++ main.cpp game.cpp display.cpp -o tic_tac_toe
Run the program:

./IKSOKS
```
Using an IDE:
Create a new project and add main.cpp, game.cpp, and display.cpp to the project.
Build and run the project using your IDE's build tools.

**Release Information**
Version: 1.0.0
Release Date: February 2025

**Changelog:**
v1.0.0: Initial release with basic Tic Tac Toe functionality, including win detection, draw detection, and replay option.

**Contributing**
Feel free to fork the repository and submit pull requests for new features or bug fixes! Any suggestions for improvements are welcome.

**License**
This project is open-source and available under the MIT License.

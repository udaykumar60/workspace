#include <stdio.h>

// Function to draw the board
void drawBoard(int board[3][3]) {
    printf("\n\n");
    for (int i = 0; i < 3; i++) {
        printf("\t\t  ");
        for (int j = 0; j < 3; j++) {
            // Display: 0 as space, 1 as X, 2 as O
            char mark = (board[i][j] == 0) ? ' ' : (board[i][j] == 1 ? 'X' : 'O');
            printf("%c", mark);
            if (j < 2) printf(" | ");
        }
        if (i < 2) printf("\n\t\t ---|---|---\n");
    }
    printf("\n\n");
}

// Function to check if anyone has won
int checkWin(int board[3][3]) {
    // Check Rows and Columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != 0 && board[i][0] == board[i][1] && board[i][1] == board[i][2]) return board[i][0];
        if (board[0][i] != 0 && board[0][i] == board[1][i] && board[1][i] == board[2][i]) return board[0][i];
    }
    // Check Diagonals
    if (board[0][0] != 0 && board[0][0] == board[1][1] && board[1][1] == board[2][2]) return board[0][0];
    if (board[0][2] != 0 && board[0][2] == board[1][1] && board[1][1] == board[2][0]) return board[0][2];

    return 0; // No winner yet
}

int main() {
    int board[3][3] = {0}; // 0: empty, 1: X, 2: O
    int row, col, winner = 0;
    int currentPlayer = 1;
    int moves = 0;

    printf("\t\t--- TIC-TAC-TOE (F1 EDITION) ---\n");

    while (winner == 0 && moves < 9) {
        drawBoard(board);
        printf("Player %d (%c), enter move (Row[0-2] Col[0-2]): ", 
                currentPlayer, (currentPlayer == 1 ? 'X' : 'O'));
        
        scanf("%d %d", &row, &col);

        // Input Validation (The "Engineer's" Safety Check)
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != 0) {
            printf("\nINVALID MOVE! That spot is either out of bounds or already taken.\n");
            continue; // Skip the rest of the loop and try again
        }

        // Apply Move
        board[row][col] = currentPlayer;
        moves++;
        
        // Check for winner after the move
        winner = checkWin(board);

        // Switch Player: If 1, make it 2. If 2, make it 1.
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    drawBoard(board);

    if (winner != 0) {
        printf("CONGRATULATIONS! Player %d wins!\n", winner);
    } else {
        printf("IT'S A DRAW! Good game.\n");
    }

    return 0;
}

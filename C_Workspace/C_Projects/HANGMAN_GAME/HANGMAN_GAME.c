// HANGMAN GAME //
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Function to display the main menu and get user choice
int menu()
{
    printf("\t\t\t\t\t\t========================================\n");
    printf("\t\t\t\t\t\t        H A N G M A N - G A M E         \n");
    printf("\t\t\t\t\t\t========================================\n");
    printf("\n1. START\n");
    printf("\n2. QUIT\n");
    
    int ch;
    printf("\nEnter the choice:  ");
    scanf("%d", &ch);
    return ch;
}

// Function containing the main game logic
void game(char hg[], char que_hg[], int rand_hg, int ch)
{
    switch(ch)
    {
        case 1: // Start Game
        {
            int limit = 10;     // Number of wrong guesses allowed
            int len = 0;        // To store the length of the word
            char guess;         // To store the user's input character
            char dash[100];     // To store the hidden word (e.g., "---")

            printf("\nHINT IS : %s\n", que_hg);
            
            // Initialize the dash array with '-' for every letter in the word
            for(int i = 0; hg[i] != '\0'; i++)
            {
                dash[i] = '-';
                len++;
            }
            dash[len] = '\0'; // End the string

            // Keep playing while the player has lives left
            while(limit > 0)
            {
                int correct = 0; // Flag to check if the current guess is right

                // Print the current progress (the dashes and found letters)
                for(int j = 0; hg[j] != '\0'; j++)
                {
                    printf(" \t\t%c", dash[j]);
                }

                printf("\n\nCHANGES LEFT: %d", limit);
                printf("\n\nEnter the Guess: ");
                scanf(" %c", &guess); // Notice the space before %c to clear the buffer

                // Check if the guessed letter exists in the secret word
                for(int i = 0; hg[i] != '\0'; i++)
                {
                    if(guess == hg[i] && dash[i] == '-')
                    {
                        dash[i] = guess; // Reveal the letter
                        correct = 1;      // Mark as a correct guess
                    }
                }

                if(correct != 1)
                {
                    printf("\nTHE GUESS IS INCORRECT\n");
                    limit--; // Reduce lives if wrong
                }
                else
                {
                    printf("\nTHE GUESS IS CORRECT\n");
                }

                // Check if the player has revealed the whole word
                if(strcmp(hg, dash) == 0) 
                {
                    printf("\nCONGRATULATIONS\n YOU WON THE ANSWER IS : %s\n\n", hg);
                    return; // Exit game function
                }
            }

            // If limit reaches 0, the player loses
            if(limit == 0)
            {
                printf("\nGAME OVER\n,\nTHE WORD WAS: %s\n", hg);
            }
        }
        break;

        case 2: // Quit Game
        {
            printf("\nTHANK YOU\n");
            exit(0);
        }
        break;

        default:
        {
            printf("\nINVALID CHOICE\n");
        }
    }
}

int main()
{
    // Initialize random seed based on current time
    srand(time(NULL));

    // Word list (Answer keys)
    char hg[][100] = {"MERCEDES", "REDBULL", "MCLAREN"};
    int num_hg = 3;

    // Hint list corresponding to the words
    char que_hg[][1000] = {
        "ITS THE F1 TEAM WITH EIGHT CONSECUTIVE CONSTRUCTORS CHAMPIONSHIPS.",
        "ITS AN F1 TEAM WITH THE MOST AGGRESSIVE DRIVER.",
        "ITS THE LATEST F1 TEAM TO WIN THE CONSTRUCTORS CHAMPIONSHIPS."
    };

    // Main game loop to keep the program running
    while(1)
    {
        int ch = menu();
        int rand_hg = rand() % 3; // Pick a random index (0, 1, or 2)
        
        // Start the game with the randomly picked word and hint
        game(hg[rand_hg], que_hg[rand_hg], rand_hg, ch);
    }

    return 0;
}
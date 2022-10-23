#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Create Rock, Paper & Scissors Game
//  Player 1: rock
//  Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.
int GenerateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1;
    }
    if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int PlayerScore = 0, ComputerScore = 0, temp;
    char PlayerCharacter, ComputerCharacter;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to Rock, Paper, Scissors Game!!!\n");
    for (int i = 0; i < 3; i++)
    {
        // Taking Player's Input
        printf("Player 1 Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        scanf("%d", &PlayerCharacter);
        getchar();
        PlayerCharacter = dict[temp - 1];
        printf("You chose %c\n\n", PlayerCharacter);

        // Generate Computer's Input
        printf("Computer Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        temp = GenerateRandomNumber(3) + 1;
        ComputerCharacter = dict[temp - 1];
        printf("Computer chose %c\n", ComputerCharacter);

        // Comparing the values of Player and Computer
        if (greater(ComputerCharacter, PlayerCharacter) == 1)
        {
            ComputerScore += 1;
            printf("Computer won\n");
        }
        else if (greater(ComputerCharacter, PlayerCharacter) == -1)
        {
            ComputerScore += 1;
            PlayerScore += 1;
            printf("Draw\na");
        }

        else
        {
            PlayerScore += 1;
            printf("You won\na");
        }
        printf("You: %d Computer: %d\n", PlayerScore, ComputerScore);
        if (PlayerScore > ComputerScore)
        {
            printf("Congratulations, You Won!!!\n");
        }
        else if (PlayerScore < ComputerScore)
        {

            printf("Computer, You Won!!!\n");
        }
        else
        {
            printf("Its a draw.\n");
        }
    }

    return 0;
}

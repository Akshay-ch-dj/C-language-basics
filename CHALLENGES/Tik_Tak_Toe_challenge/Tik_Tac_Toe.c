/*Purpose: Challenge program to create a game of TIC TAC TOE
           Failed,,,after hours of thinking

  Date: 05-09-19 10:35 PM */


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Board initialized as global variable
char Board[10]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}; //starts form 0 so Board[1]=1

//player turn (1 or 2) and what choice (X or O) he makes declared as global
int choice=0, player=0;

int checkForWin();            //Checking Winner
void displayBoard();          //Displaying Board
void markBoard(char mark);    //Marking & checking the values entered


/**     Main Function    **/

int main()
{
   int gameStatus;

   char mark;  // Either 'X' or 'O'

   player = 1;  // First play set to 1

    do          // using do-while so that guaranteed one-time board display possible
    {
      displayBoard();     // Displays the board

      // change turns
      player = (player % 2) ? 1 : 2;   // Turnery operator 1%2 = 1 & 2%2 = 0 player is set to '1' if player is 1

      // get input
      printf("Player %d, enter a number: ", player);
      scanf("%d", &choice);     // location stored in choice

      // set the correct character based on player turn
      mark = (player == 1) ? 'X' : 'O';  // if player is '1' mark is X

      // set board based on user choice or invalid choice
      markBoard(mark);

      gameStatus = checkForWin();

      player++;

    }while (gameStatus == -1);  //repeat the loop if the game is on

    if (gameStatus == 1)
        printf("==>\aPlayer %d win ", --player);   // win situation
    else
        printf("==>\aGame draw");                  // Draw situation

    return 0;
}


//checkForWin Function
/************************************************

THIS IS A FUNCTION TO RETURN GAME STATUS
1  FOR GAME IS OVER WITH RESULTS
-1 FOR GAME IS IN PROGRESS
0  FOR GAME IS OVER AND NO RESULT

************************************************/
/* A win is possible, for game board
                 WIN if "X" or "O" completes a row, column or a diagonal
                 (  -  , | , \ , / )
                    WIN IF
   1  2  3          row-wise,  123    column-wise,   147  Diagonal-wise,  159
   4  5  6                     456                   258                  357
   7  8  9                     789                   369
*/

int checkForWin()
{
    int returnValue=0;  // Need to return above mentioned

    if (Board[1] == Board[2] && Board[2] == Board[3])
        returnValue = 1;
    else if (Board[4] == Board[5] && Board[5] == Board[6])
             returnValue = 1;
    else if (Board[7] == Board[8] && Board[8] == Board[9])
             returnValue = 1;
    else if (Board[1] == Board[4] && Board[4] == Board[7])
             returnValue = 1;
    else if (Board[2] == Board[5] && Board[5] == Board[8])
             returnValue = 1;
    else if (Board[3] == Board[6] && Board[6] == Board[9])
             returnValue = 1;
    else if (Board[1] == Board[5] && Board[5] == Board[9])
             returnValue = 1;
    else if (Board[3] == Board[5] && Board[5] == Board[7])
             returnValue = 1;

    else if (Board[1] != '1' && Board[2] != '2' && Board[3] != '3' &&
             Board[4] != '4' && Board[5] != '5' && Board[6] != '6' &&
             Board[7] != '7' && Board[8] != '8' && Board[9] != '9')
            {
                returnValue = 0;
            }

    else
            returnValue = -1;

    return returnValue;
}


/*************************************

         DISPLAY BOARD

*************************************/

void displayBoard()
{
    system("cls"); //Used for clearing screen with conio.h
    printf("\n\t\tTic - Tak - Toe\n");
    printf("\n\n\tPlayer 1 (X)  ---  Player 2 (O):\n\n");

    //Board with prinf
    printf("\n\t\t     |   |     ");
    printf("\n\t\t   %c | %c | %c  ",Board[1],Board[2],Board[3]);
    printf("\n\t\t  ___|___|___ ");
    printf("\n\t\t     |   |     ");
    printf("\n\t\t   %c | %c | %c  ",Board[4],Board[5],Board[6]);
    printf("\n\t\t  ___|___|___ ");
    printf("\n\t\t     |   |     ");
    printf("\n\t\t   %c | %c | %c  ",Board[7],Board[8],Board[9]);
    printf("\n\t\t     |   |    ");

}

/****************************************

Set the Board with correct Character,

X, O in the correct spot in the array

****************************************/

void markBoard(char mark)
{
    if( choice == 1 && Board[1] == '1')       // choice is a global variable
        Board[1] = mark;                      // Board 1 chrtr is replaced with mark
    else if( choice == 2 && Board[2] == '2')
            Board[2] = mark;
    else if( choice == 3 && Board[3] == '3')
            Board[3] = mark;
    else if( choice == 4 && Board[4] == '4')
            Board[4] = mark;
    else if( choice == 5 && Board[5] == '5')    //Basic one but works
            Board[5] = mark;
    else if( choice == 6 && Board[6] == '6')
            Board[6] = mark;
    else if( choice == 7 && Board[7] == '7')
            Board[7] = mark;
    else if( choice == 8 && Board[8] == '8')
            Board[8] = mark;
    else if( choice == 9 && Board[9] == '9')
            Board[9] = mark;

    //If passed anything other than 1-9, /Invalid Move/
    else
       {
         printf("\n Invalid Move: \n");
         player --;    // Gives another turn to that player(global variable)
         getch();      // Pause the program so as the user need to hit a key
       }

}

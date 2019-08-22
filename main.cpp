# include <iostream>
# include <cstdlib>
# include <stdlib.h>
# include <regex>
using namespace std;

#define SIZEBOARD 9
#define true 1
#define false 0

void inicializeBoard(char board[]);
void printBoard(char board[]);
int isItASequenceUser(char board[]);
void systemReact(char board[], int choiceUser);
bool userChoiceIsValid (char board[], int choiceUser);


// user plays with 'x' and system with 'o'
int main () {
    char board[SIZEBOARD];
    int choiceUser;

    inicializeBoard(board);

    while (choiceUser != 0) {
        //system ("CLS");
        printBoard(board);
        cout << endl << "Choose a position:" << endl;
        cin >> choiceUser;
        systemReact(board, choiceUser);
    }
    
    return 0;
}

/* The function inicialize the board with asterisk */
void inicializeBoard (char board[]){
    int options = 1;

    for(int i=0; i < SIZEBOARD; i++){
        board[i] = '*';
    }
}

/* The function print the board */
void printBoard(char board[]){
    for(int i=0; i < SIZEBOARD; i++){
        
        /* If the position contains an asterisk, prints the position number.
            Else print the content, this is 'x' or 'o' */
        if(board[i] == '*') {
            cout << i+1 << " ";
        } else {
            cout << board[i] << " ";
        }
        
        if ((i+1)%3 == 0) cout << endl;
    }
}

void systemReact(char board[], int choiceUser) {
    bool choiceIsValid;
    
    switch(choiceUser){
        case 1:
            choiceIsValid = userChoiceIsValid(board, choiceUser);
            
            /* System reaction */
            if (choiceIsValid == true) {
                if (board[1] != 'x' && board[1] != 'o') {
                    board[1] = 'o';
                    break;
                } else if (board[3] != 'x' && board[3] != 'o') {
                    board[3] = 'o';
                    break;
                }
            }
            
        case 2:
            choiceIsValid = userChoiceIsValid(board, choiceUser);
            
            /* System reaction */
            if (choiceIsValid == true) {
                if (board[0] != 'x' && board[0] != 'o') {
                    board[0] = 'o';
                    break;
                } else if (board[2] != 'x' && board[2] != 'o') {
                    board[2] = 'o';
                    break;
                } else if (board[4] != 'x' && board[4] != 'o') {
                    board[4] = 'o';
                    break;
                }
            }
            
        case 3:
            choiceIsValid = userChoiceIsValid(board, choiceUser);
            
            /* System reaction */
            if (choiceIsValid == true) {
                if (board[1] != 'x' && board[1] != 'o') {
                    board[1] = 'o';
                    break;
                } else if (board[5] != 'x' && board[5] != 'o') {
                    board[5] = 'o';
                    break;
                }
            }
            
        case 4:
            choiceIsValid = userChoiceIsValid(board, choiceUser);
            
            /* System reaction */
            if (choiceIsValid == true) {
                if (board[0] != 'x' && board[0] != 'o') {
                    board[0] = 'o';
                    break;
                } else if (board[4] != 'x' && board[4] != 'o') {
                    board[4] = 'o';
                    break;
                } else if (board[6] != 'x' && board[6] != 'o') {
                    board[6] = 'o';
                    break;
                }
            }
            
        case 5:
            choiceIsValid = userChoiceIsValid(board, choiceUser);
            
            /* System reaction */
            if (choiceIsValid == true) {
                if (board[0] != 'x' && board[0] != 'o') {
                    board[0] = 'o';
                    break;
                } else if (board[2] != 'x' && board[2] != 'o') {
                    board[2] = 'o';
                    break;
                } else if (board[6] != 'x' && board[6] != 'o') {
                    board[6] = 'o';
                    break;
                } else if (board[8] != 'x' && board[8] != 'o') {
                    board[8] = 'o';
                    break;
                }
            }
            
        case 6:
            choiceIsValid = userChoiceIsValid(board, choiceUser);
            
            /* System reaction */
            if (choiceIsValid == true) {
                if (board[2] != 'x' && board[2] != 'o') {
                    board[2] = 'o';
                    break;
                } else if (board[4] != 'x' && board[4] != 'o') {
                    board[4] = 'o';
                    break;
                } else if (board[8] != 'x' && board[8] != 'o'){
                    board[8] = 'o';
                    break;
                }
            }
            
        case 7:
            choiceIsValid = userChoiceIsValid(board, choiceUser);
            
            /* System reaction */
            if (choiceIsValid == true) {
                if (board[3] != 'x' && board[3] != 'o') {
                    board[3] = 'o';
                    break;
                } else if (board[7] != 'x' && board[7] != 'o') {
                    board[7] = 'o';
                    break;
                }
            }
            
        case 8:
           choiceIsValid = userChoiceIsValid(board, choiceUser);
            
            /* System reaction */
            if (choiceIsValid == true) {
                if (board[4] != 'x' && board[4] != 'o') {
                    board[4] = 'o';
                    break;
                } else if (board[6] != 'x' && board[6] != 'o') {
                    board[6] = 'o';
                    break;
                } else if (board[8] != 'x' && board[8] != 'o'){
                    board[8] = 'o';
                    break;
                }
            }
            
        case 9:
            choiceIsValid = userChoiceIsValid(board, choiceUser);
            
            /* System reaction */
            if (choiceIsValid == true) {
                if (board[5] != 'x' && board[5] != 'o') {
                    board[5] = 'o';
                    break;
                } else if (board[7] != 'x' && board[7] != 'o') {
                    board[7] = 'o';
                    break;
                }
            }
            
        default:
            break;
    }
}

bool userChoiceIsValid (char board[], int choiceUser) {
    if (board[choiceUser-1] != 'x' && board[choiceUser-1] != 'o'){
        board[choiceUser-1] = 'x';
        return true;
    } else {
        return false;
    }
}
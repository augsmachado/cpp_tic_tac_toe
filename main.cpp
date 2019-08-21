# include <iostream>
# include <cstdlib>
# include <ctime>
# include <stdlib.h>
using namespace std;

#define SIZEBOARD 9
#define true 1
#define false 0

void inicializeBoard(char board[]);
int isItASequenceUser(char board[]);
void systemReact(char board[], int choiceUser);


// user plays with 'x' and system with 'o'
int main () {
    char board[SIZEBOARD];
    int choiceUser = -1;

    inicializeBoard(board);

    while (choiceUser != 0) {
        cin >> choiceUser;
        systemReact(board, choiceUser);

        for(int i=0; i < SIZEBOARD; i++){
            cout << board[i] << " ";
            if ((i+1)%3 == 0) cout << endl;
        }
    }
    for(int i=0; i < SIZEBOARD; i++){
        cout << board[i] << " ";
        if ((i+1)%3 == 0) cout << endl;
    }
    
    return 0;
}

void inicializeBoard (char board[]){
    int options = 1;

    for(int i=0; i < SIZEBOARD; i++){
        board[i] = '*';
    }
}

int isItASequenceUser(char board[]){
    if(board[0] == 'x' and board[1] == 'x' and board[2] == '*') {
        board[2] = 'o';
        return true;
    }
    
    if(board[4] == 'x' and board[5] == 'x' and board[3] == '*') {
        board[3] = 'o';
        return true;
    }
    
    if(board[6] == 'x' and board[7] == 'x' and board[8] == '*') {
        board[8] = 'o';
        return true;
    }
    
    if(board[0] == 'x' and board[3] == 'x' and board[6] == '*') {
        board[6] = 'o';
        return true;
    }
    
    if(board[4] == 'x' and board[7] == 'x' and board[1] == '*') {
        board[1] = 'o';
        return true;
    }
    
    if(board[2] == 'x' and board[5] == 'x' and board[8] == '*') {
        board[8] = 'o';
        return true;
    }
    
    if(board[2] == 'x' and board[4] == 'x' and board[6] == '*') {
        board[6] = 'o';
        return true;
    }
    
    if(board[4] == 'x' and board[8] == 'x' and board[0] == '*') {
        board[0] = 'o';
        return true;
    }
    
    return false;
}

void systemReact(char board[], int choiceUser) {
    switch(choiceUser){
        case 1:
            board[0] = 'x';
            if (board[1] == '*') {
                board[1] = 'o';
                break;
            } else if (board[3] == '*') {
                board[3] = 'o';
                break;
            }
        case 2:
            board[1] = 'x';
            if (board[0] == '*') {
                board[0] = 'o';
                break;
            } else if (board[2] == '*') {
                board[2] = 'o';
                break;
            } else if (board[4] == '*') {
                board[4] = 'o';
                break;
            }
        case 3:
            board[2] = 'x';
            if (board[1] == '*') {
                board[1] = 'o';
                break;
            } else if (board[5] == '*') {
                board[5] = 'o';
                break;
            }
        case 4:
            board[3] = 'x';
            if (board[0] == '*') {
                board[0] = 'o';
                break;
            } else if (board[4] == '*') {
                board[4] = 'o';
                break;
            } else if (board[6] == '*') {
                board[6] = 'o';
                break;
            }
        case 5:
            board[4] = 'x';
            if (board[0] == '*') {
                board[0] = 'o';
                break;
            } else if (board[2] == '*') {
                board[2] = 'o';
                break;
            } else if (board[6] == '*') {
                board[6] = 'o';
                break;
            } else if (board[8] == '*') {
                board[8] = 'o';
                break;
            }
        case 6:
            board[5] = 'x';
            if (board[2] == '*') {
                board[2] = 'o';
                break;
            } else if (board[4] == '*') {
                board[4] = 'o';
                break;
            } else if (board[8] == '*'){
                board[8] = 'o';
                break;
            }
        case 7:
            board[6] = 'x';
            if (board[3] == '*') {
                board[3] = 'o';
                break;
            } else if (board[7] == '*') {
                board[7] = 'o';
                break;
            }
        case 8:
            board[7] = 'x';
            if (board[4] == '*') {
                board[4] = 'o';
                break;
            } else if (board[6] == '*') {
                board[6] = 'o';
                break;
            } else if (board[8] == '*'){
                board[8] = 'o';
                break;
            }
        case 9:
            board[8] = 'x';
            if (board[5] == '*') {
                board[5] = 'o';
                break;
            } else if (board[7] == '*') {
                board[7] = 'o';
                break;
            }
        default:
            break;
    }
}
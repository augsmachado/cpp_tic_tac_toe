# Tic-Tac-Toe
Tic-tac-toe, or noughts and crosses, is a simple game created in C++.

### Business rules

Business rules are policies, conditions, or system constraints that must be considered in the execution of your processes. Business rules often influence the behavior of certain use cases.

Suppose the board below represents the player's choice:

| 1  | 2  | 3  |
|---|---|---|
| 4  |  5 |  6 |
|  7 |  8 |  9 |


If the user chooses:
* 1, the system chooses: 2 or 4
* 2, the system chooses: 1, 3 or 5
* 3, the system chooses: 2 or 6
* 4, the system chooses: 1, 5 or 7
* 5, the system chooses: 1, 3, 7 or 9
* 6, the system chooses: 3, 5 or 9
* 7, the system chooses: 4 or 8
* 8, the system chooses: 5, 7 or 9
* 9, the system chooses: 6 or 8


### Numbered description

The narrative of what the system and the user performed is described through a series of numbered steps.

1. User starts the system
2. The system creates a board with 9 position and displays the message: "**Choose a position**"
3. User chooses a position
4. Given the chosen position, the system marks it with "x" and shows the updated position board
5. The system plays according to the business rules
6. Repeat steps 4 and 5 until tie or victory occurs
7. If user win the match, show "**You win!**", else "**You lose!**" or "**Tic-Tac-Toe!**"
8. Show "**Do you want to play again?**"
9. If no, shows the amount of wins: "**You vs. System**"

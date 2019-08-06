# Tic-Tac-Toe
Tic-tac-toe, or noughts and crosses, is a simple game created in C++.

### Business rules

Business rules are policies, conditions, or system constraints that must be considered in the execution of your processes. Business rules often influence the behavior of certain use cases.

* Se usuário escolher qualquer um dos 4 cantos ou uma das casas centrais (horizontal e vertical), o sistema segue a sequência para contrapor escolha: centro, direita, esquerda, em cima, em baixo, diagonal principal ou diagonal secundária.

* Se usuário escolher o centro do tabuleiro, o sistema segue a sequência para contrapor escolha: diagonal principal, diagonal secundária, direita, esquerda, em cima ou em baixo.


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

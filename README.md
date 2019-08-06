# Tic-Tac-Toe
Tic-tac-toe, or noughts and crosses, is a simple game without GUI created in C++.

### Business rules

Business rules are policies, conditions, or system constraints that must be considered in the execution of your processes. Business rules often influence the behavior of certain use cases.
<br>From [Wikipedia](https://en.wikipedia.org/wiki/Rock%E2%80%93paper%E2%80%93scissors):
> + The players usually count aloud to three, or speak the name of the game, each time either raising one hand in a fist and swinging it down on the count or holding it behind. They then "throw" by extending it towards their opponent.
> + A player who decides to play rock will beat another player who has chosen scissors ("rock crushes scissors" or sometimes "blunts scissors"), but will lose to one who has played paper ("paper covers rock"). A play of paper will lose to a play of scissors ("scissors cuts paper"). If both players choose the same shape, the game is tied and is usually immediately replayed to break the tie.

<br>Other business rules are:
+ The system needs to be random.
+ After three rounds, the system gives to show the winner.
+ Based on clock computer, the system generate a random number between one and one hundred. If the generated number is between one and thirty-three, the system will play **rock**. Than if the generated number is between thirty-four and sixty-six, the system will play with **paper**. But if generated number is between sixty-seven and one hundred, the system will play with **scissors**.


### Numbered description

The narrative of what the system and the user performed is described through a series of numbered steps.
1. The user start the system.
2. The system shows: "**Choose an option: 1- Rock, 2- Paper, 3- Scissors**".
3. The user chooses the desired option.
4. Based on clock computer, the system generate a random number between one and one hundred.
5. If the user wins the round, increase a point for on your scoreboard. Otherwise, increment a point for on the system board.
6. Repeat for 2 more times.
7. Shows the winner and the pontuation of the match.
8. The system shows: "**Want to play again? Yes [y] or no [n]?**". If yes, repeat more once time, else show the final scores of matches.

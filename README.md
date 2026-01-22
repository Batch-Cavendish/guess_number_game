# About Project

This is a very simple number guessing game written entirely in C, suitable for C language beginners to learn and for children aged 8-14 to enjoy.

The terminal screen clearing function in the program uses Windows-based system commands, therefore the game can only be compiled and run on Windows, or it can be slightly modified to run on other operating systems.

# How to Play

1. Compile the game by running the following command in the terminal:
   ```
   clang -o guess_number.exe main.c guess_number.c
   ```
2. Run the game by executing the compiled executable file:
   ```
   ./guess_number
   ```
3. The game will generate a random number between 1 and 40 (Could be adjusted by modifying the `MAX_NUMBER` constant in `guess_number.c`).
4. You will be prompted to enter your guess.
5. If your guess is correct, you win!
6. If your guess is too high or too low, you will be informed and prompted to guess again.
7. You have a limited number of attempts to guess the correct number.
8. If you run out of attempts, you lose.

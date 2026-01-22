#include "guess_num.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[100];
	printf("Please enter your name: ");
	scanf_s("%s", name);
	printf("Hi, %s", name);
	printf(", welcome to the thrilling and exciting number guessing game.");
	printf("I believe you will find fun in it.\n");
	printf("If you are ready, press \"Enter\" to start the game.");
	getchar();
	getchar();
	system("cls");
	printf("The mystery number is ready (0-40), please enter your guess:\n");

	Result result = GuessNum();
	int times = result.times;
	bool status = result.status;

	if (status == false)
	{
		printf("Out of chances, Game Over!\n");
		printf("The correct answer was %d\n", result.answer);
	} else if (times <= EXCELLENT_THRESHOLD)
	{
		printf("Great, you guessed it in just %d tries\n", times);
	} else {
		printf("A bit slow, but not bad, you guessed it in %d tries\n", times);
	}

	return 0;

}

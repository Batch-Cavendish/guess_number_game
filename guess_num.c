#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "guess_num.h"

Result GuessNum() {
    srand((unsigned)time(NULL));

    int times = 0;
    bool status = false;
    int answer = rand() % (MAX_NUMBER + 1);
    int guess = 0;

    while (times < MAX_ATTEMPTS)
    {
        scanf_s("%d", &guess);
        ++times;
        if (guess == answer) {
            status = true;
            break;
        }

        if (guess < answer) {
            printf("Too low, try again:\n");
        }
        else {
            printf("Too high, try again:\n");
        }
    }

    Result result = { .status = status, .times = times, .answer = answer };
    return result;
}

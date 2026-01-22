#ifndef GUESS_NUM_H
#define GUESS_NUM_H

#define MAX_NUMBER 40
#define MAX_ATTEMPTS 5
#define EXCELLENT_THRESHOLD 3

#include <stdbool.h>

typedef struct Result {
    bool status;
    int times;
    int answer;
} Result;

Result GuessNum();

#endif

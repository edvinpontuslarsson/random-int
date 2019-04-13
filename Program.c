// to compile:
// $ make Program

// to run:
// $ ./Program

// standard I/O
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// declare functions that will be used
int getExit();
int getRandom();
int getTwiceAsMuch(int oldInt);
void printInfo(int an_int);

int main()
{
    int random = getRandom();
    int doubleRandom = getTwiceAsMuch(random);
    printInfo(doubleRandom);

    int exit = getExit();
    return exit;
}

int getExit()
{
    return 0;
}

int getRandom()
{
    srand(time(NULL));
    int random = rand();
    return random;
}

int getTwiceAsMuch(int oldInt)
{
    return oldInt * 2;
}

void printInfo(int an_int)
{
    printf("Nothing to C here..., just a random integer: %d ", an_int);
}

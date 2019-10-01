#include <stddef.h>
#include <stdio.h>

void intSwap(int *a,int *b)
{
    int helper = *a;
    *a = *b;
    *b = helper;
}

int main()
{
    printf("\n--Program-Starts-Here--------------------------\n\n");
    int x = 5;
    int y = 10;
    printf("\tBefore: %d, %d;\n",x, y);
    intSwap(&x, &y);
    printf("\tAfter: %d, %d;\n",x, y);
/* 
*int myvar = 42, myvar2 = 0;
int * ptr = &myvar;
int **prtToPtr = &ptr;
*ptr = 33; // myvar = 33;
*prtToPtr = NULL; // ptr = NULL;
ptr = &myvar2;
prtToPtr = NULL;
prtToPtr = 0;
*/
printf("\n--Program-Terminates-Here----------------------\n\n");
}

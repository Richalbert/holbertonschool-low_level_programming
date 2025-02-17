/*
 * src : https://github.com/hs-hq/0x01.c/blob/main/0-positive_or_negative_c
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

    if (n >= 0)
    {
	if (n == 0)
        {
            printf("%d is zero\n", n);
        }
        else
        {
            printf("%d is positive\n", n);
        } 
    } 
    else 
    {
        printf("%d is negative\n", n);
    } 
        
        
	return (0);
}

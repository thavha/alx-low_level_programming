#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l;
	char r[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l>5)
        	printf("%s %d is %d and is greater than 5\n",r,n,l);
    	else if (l==0)
        	printf("%s %d is %d and is 0\n",r,n,l);
    	else if (l<6)
        	printf("%s %d is %d and is less than 6 and not 0\n",r,n,l);
	
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main ->assign a random number to the variable n each time it is executed. 
 *print the last digit of the number stored in the variable n.
 * Return: always 0
 */
int main(void)
{
int n;

strand(time(0));
n = rand() - RAND_MAX / 2;lastd = n % 10;	
    printf("Last digit of %d is %d "n);	
if (n > 5)
{
 printf("greater than 5)
}
if (n == 0)
{
	printf("0");
}
if (n < 6 && n != 0)
{
	printf("Last than 6 not 0");
}	
printf("\n"):
return (0);
}

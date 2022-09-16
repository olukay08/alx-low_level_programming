#include <stdio.h>
/**
 * main. -print numbers and substitute for the multiples of 5 and 3
 * Return: 0
 */
int main(void)
{
	int g ;

	for (g = 1; g <= 100 ; g++)
	{
		if((g % 3 == 0) && (g % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if(g % 3 == 0)
		{
			printf("Fizz ");
		}
		else if(g % 5 == 0)
		{

		
			printf("Buzz ");
		}
		else
		{
			printf("%d ",g);
		}
	}
	printf("\n");
	return (0);
}

# include <stdio.h>
/**
 * main - program entry point
 *
 * Description: prints two comnibation of numbers
 *
 * Return: always (0); success
 *
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0'); /* print first digit */
			putchar(j + '0'); /* print second digit */
			if (i < 8) /* print comma and space */
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - produces valid random password
 *
 * Return: 0 Always success
 **/

int main(void)
{
	char pass[84];

	int i = 0; sum = 0, diff_half1, diff_half2;

	srand(time(0))

		while (sum < 2772)
		{
			pass[i] = 33 + rand %94;
			sum += pass[i++];
		}
	pass[i] = '\0';
	if (sum !=  2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_half1++;
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + diff_half1))
			{
				pass[i] -= diff_half1;
				break;
			}
		}
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + diff_half2))
				pas[i] -= diff_half2;
			break;
		}
	}
	printf("%s", pass);
	return (0);
}

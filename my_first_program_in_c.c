#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//tarife moteghayer ha
	int l;
	char a, b;

	// daryafte chars az voroodi
	printf ("Enter two chars:\n");
	scanf ("%c %c", &a, &b);

	// daryafte length
	printf ("Enter the length:\n");
	scanf ("%d", &l);

	//loops
	if (l % 2 != 0)
	{
		for (int i = l; i > 0; i--)

		{
			printf("\n");

			for (int j = i; j > 0; j--)
			{
				if (j % 2 == 0)
				{
					printf("%c", b);
				}
				else
				{
					printf("%c", a);
				}
			}
		}
	}
	else
	{
		for (int i = l; i > 0; i--)

		{
			printf("\n");

			for (int j = i; j > 0; j--)
			{
				if (j % 2 == 0)
				{
					printf("%c", a);
				}
				else
				{
					printf("%c", b);
				}
			}
		}
	}
	return 0;
}
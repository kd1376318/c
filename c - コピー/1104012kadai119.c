#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	for (int i = 0; i < 7; i++)
	{
		if (day[i][0] == 's')
		{
			printf("%s\n", day[i]);
		}

	}
}
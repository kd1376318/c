#include<stdio.h>
main()
{
	int total, c1,c2;
	int a[][3] = { {10,20,30},{1,2,3} };
	for (c1 = 0; c1 <= 1; c1++)
	{
		for (total = 0, c2 = 0; c2 <= 2; c2++)
		{
			printf("a[%d][%d]=%d\n", c1, c2, a[c1][c2]);
			total += a[c1][c2];
		}
		printf("%ds–Ú‚Ì‡Œv=%d\n\n", c1, total);
	}
	


}
#include<stdio.h>
main()
{
	int no;
	no = 20;
	while (no > 0)
	{
		printf("%d ", no);
		if (no % 10 == 1)
		{
			printf("\n");
		} 
		no--;
		
	}

}
#include<stdio.h>
main()
{
	int no;
	no = 0;
	while (no < 20)
	{
		no += 1;
		printf("%d ", no);
		if (no % 10 == 0)
		{
			printf("\n");
		} 
	} 

}
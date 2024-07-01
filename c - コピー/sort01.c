#include<stdio.h>
main()
{
	int w,i,j, d[5] = {30,7,25,16,10};
	for (j = 0; j != 5; j++)
	{
		for (i = j+1; i != 5; i++)
		{
			if (d[j] > d[i])
			{
				w = d[j];
				d[j] = d[i];
				d[i] = w;
			}
			
		}
		printf("%d ", d[j]);
	}
	
}
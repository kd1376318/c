#include<stdio.h>
main()
{
	int li,co;
	float x[3][2],total;
	for (li = 0; li < 3; li++)
	{
		for (co = 0, total = 0; co < 2; co++)
		{
			printf("x[%d][%d]=", li, co);
			scanf("%f",&x[li][co]);
			total += x[li][co];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n", li, (float)total / co);
	}
	
	
}
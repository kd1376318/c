//1104012kadai044.c
#include<stdio.h>
main()
{
	int no;
	no = 0;
	while (no != -999)
	{
		printf("����(-999�œ��͏I��)�H");
		scanf("%d", &no);
		if (no != -999)
		{
			printf("8�i��=%o	16�i��=%x\n", no, no);
		}
		
	}
	
}
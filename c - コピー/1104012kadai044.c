//1104012kadai044.c
#include<stdio.h>
main()
{
	int no;
	no = 0;
	while (no != -999)
	{
		printf("整数(-999で入力終了)？");
		scanf("%d", &no);
		if (no != -999)
		{
			printf("8進数=%o	16進数=%x\n", no, no);
		}
		
	}
	
}
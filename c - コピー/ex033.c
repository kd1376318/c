#include<stdio.h>
main()
{
	float no,time,total;
	total = 0;
	no = 0;
	for (time = -1; no != -999; time += 1)
	{
		total += no;
		printf("数は？");
		scanf("%f", &no);
		
	}
	printf("合計=%0.f		平均=%.3f", total,total/time);
}
#include<stdio.h>
main()
{
	float no,time,total;
	total = 0;
	no = 0;
	for (time = -1; no != -999; time += 1)
	{
		total += no;
		printf("���́H");
		scanf("%f", &no);
		
	}
	printf("���v=%0.f		����=%.3f", total,total/time);
}
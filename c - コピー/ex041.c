#include<stdio.h>
main()
{
	int time ;
	float no, box[3];
	for (time = 0; time <= 2; time++)
	{
		printf("ŽÀ”‚ð“ü—Í");
		scanf("%f", &no);
		box[time] += no;
	}
	printf("‡Œv‚Í%.2f‚Å‚·\n", box[0]+ box[1] + box[2]  );
	printf("•½‹Ï‚Í%.2f", (box[0] + box[1] + box[2]) / 3);
}
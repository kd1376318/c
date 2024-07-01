#include<stdio.h>
void sumavg(int d1, int d2, int* sum, float* avg);
main()
{
	int d1, d2, sum;
	float avg;
	printf("®”‚ğ“ñ‚Â“ü—Í:");
	scanf("%d%d", &d1, &d2);
	sumavg(d1, d2, &sum, &avg);
	printf("‡Œv‚Í%d	•½‹Ï‚Í%.2f\n", sum, avg);
}
void sumavg(int d1, int d2, int* sum, float* avg)
{
	*sum = d1 + d2;
	*avg = (float)*sum / 2;
	return;
}
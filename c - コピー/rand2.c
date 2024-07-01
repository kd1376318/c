#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int dice;
	srand(time(0));
	dice = rand() % 6 + 1;//0~5Ç©ÇÁ1~6Ç…
	printf("ÉTÉCÉRÉçÇÕ%dÇ≈Ç∑", dice);
}
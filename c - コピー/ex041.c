#include<stdio.h>
main()
{
	int time ;
	float no, box[3];
	for (time = 0; time <= 2; time++)
	{
		printf("実数を入力");
		scanf("%f", &no);
		box[time] += no;
	}
	printf("合計は%.2fです\n", box[0]+ box[1] + box[2]  );
	printf("平均は%.2f", (box[0] + box[1] + box[2]) / 3);
}
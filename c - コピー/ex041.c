#include<stdio.h>
main()
{
	int time ;
	float no, box[3];
	for (time = 0; time <= 2; time++)
	{
		printf("���������");
		scanf("%f", &no);
		box[time] += no;
	}
	printf("���v��%.2f�ł�\n", box[0]+ box[1] + box[2]  );
	printf("���ς�%.2f", (box[0] + box[1] + box[2]) / 3);
}
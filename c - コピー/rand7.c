#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int no,a;
	printf("1�`1000�̒��œ�����̐���\�z���Ă�������");
	srand(time(0));
	for (int i = 0; i != 10^10^10; i++, rand());
	a = rand() % 1000 + 1;
	for(int i=0;i!=-1;i++)
	{
		printf("\n������̐��́H��");
		scanf("%d", &no);
		if (no < a)
		{
			printf("������̐���菬�����ł�");
		}
		if (no > a)
		{
			printf("������̐����傫���ł�");
		}
		if (no == a)
		{
			printf("����!!%d��œ�����܂���", i+1);
			break;
		}

	}
}
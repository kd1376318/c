//1104012kadai037.c
#include<stdio.h>
main()
{
	int no;
	printf("0����100�܂ł̐����H");
	scanf("%d", &no);
	if (30 <= no && no < 50)
	{
		printf("���̐��l�̔��茋�ʂ́u2�v�ł�");
	}
	else if (50 <= no && no < 80)
	{
		printf("���̐��l�̔��茋�ʂ́u3�v�ł�");
	}
	else if (80 <= no && no < 90)
	{
		printf("���̐��l�̔��茋�ʂ́u4�v�ł�");
	}
	else if (90 <= no )
	{
		printf("���̐��l�̔��茋�ʂ́u5�v�ł�");
	}
	else
	{
		printf("���̐��l�̔��茋�ʂ́u1�v�ł�");
	}
}
#include<stdio.h>
void error_msg(void);/*�߂�l�Ȃ������Ȃ�*/
main()
{
	int a, b;
	printf("data1 data2?:");
	scanf("%d%d", &a, &b);
	if (b == 0)
	{
		error_msg();/*�֐�erro_msg�̌Ăяo��*/
	}
	else
	{
		printf("%d/%d=%d...%d\n", a, b, a / b, a % b);

	}
}

void error_msg(void)
{
	printf("0�Ŋ���Z�͂ł��܂���");
	return;/*�����Ă�}������΂����Ő��䌳�ɋA��*/
}
//1104012kadai035.c
#include<stdio.h>
main()
{
	int no;
	printf("�����H");
	scanf("%d", &no);
	if (no < 0)
	{
		printf("���͒l�́u�}�C�i�X�v�ł�");
	}
	else if (no > 0)
	{
		printf("���͒l�́u�v���X�v�ł�");
	}
	else
	{
		printf("���͒l�́u0�v�ł�");
	}
}
#include<stdio.h>
main()
{
	int i,s,d[11] = {12,23,34,45,56,67,78,89,90,101 };
	printf("�T���ls�����");
	scanf("%d", &s);
	d[10] = s;
	for (i = 0; s != d[i]; i++);
	if (i==10)
	{
		printf("������Ȃ�����");
	}
	else
	{
		printf("��������");
	}

}
#include<stdio.h>
main()
{
	char a[99];
	char* p_a = a;
	int i;
	printf("������?");
	scanf("%s", p_a);
	for (i = 0; *p_a++; i++);
	printf("�������́A%d�����ł�", i);
}
#include<stdio.h>
main()
{
	char m,data[] = { "Language" },*p_data;
	int i;
	printf("�T�������́H");
	scanf("%c", &m);
	printf("�������ʂ�");
	p_data = &data[0];
	for (i = 0; data != '\0'; i++)
	{
		if (*p_data==m)
		{
			printf("%d ", i+1);
		}
		p_data++;
	}
	printf("�����ڂł�");
}
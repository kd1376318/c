#include<stdio.h>
main()
{
	int n1, n2, n3;
	printf("������3����:");
	scanf("%d%d%d",&n1, &n2, &n3);
	printf("���v=%d ����=%.2f \n", n1 + n2 + n3, (n1 + n2 + n3) / 3.0);
	//printf("���v=%d ����=%.2f \n", n1 + n2 + n3, (float)(n1 + n2 + n3) / 3.0)
}
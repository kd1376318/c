//1104012kadai092.c
#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];
	printf("�z��a����c�ɃR�s�[\n");
	printf("�z�� a=");
	for (int no = 0; no < 10; no++)
	{
		printf("%d ", a[no]);
	}
	printf("\n�z�� c=");
	for (int no = 0; no < 10; no++)
	{
		printf("%d ", c[no]=a[no]);
	}

}
#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	int* p_a;
	float b[] = { 11.1,22.2,33.3,44.4 };
	float* p_b;
	int ta = 0,i;
	float tb = 0;
	p_a = a;
	for (i = 0; i < 6; i++)
	{
		ta += *p_a;
		p_a++;
	}
	printf("�z��a ���v��%d	", ta);
	printf("���ρ�%.3f", (float)ta / i);

	p_b = b;
	for (i = 0; i < 4; i++)
	{
		tb += *p_b;
		p_b++;
	}
	printf("\n�z��b ���v��%.3f	", tb);
	printf("���ρ�%.3f", tb / i);
}
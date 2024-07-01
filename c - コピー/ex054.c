#include<stdio.h>
main()
{
	int itbl[3] = { 10,20,30 };
	int* p_itbl;
	double dtbl[3] = { 10.0,20.0,30.0 };
	double* p_dtbl;
	printf("*p_itbl=");
	p_itbl = itbl;
	printf("%d	", *p_itbl);
	p_itbl++;
	printf("%d	", *p_itbl);
	p_itbl++;
	printf("%d	", *p_itbl);
	p_itbl++;

	printf("\n*p_dtbl=");
	p_dtbl = dtbl;
	printf("%.1f	", *p_dtbl);
	p_dtbl++;
	printf("%.1f	", *p_dtbl);
	p_dtbl++;
	printf("%.1f	", *p_dtbl);
	p_dtbl++;
}
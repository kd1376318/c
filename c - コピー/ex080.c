#include<stdio.h>
#define TBL_END 5/*TBL_END=5*/
int tbl_gokei4(int* p);
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei4(a);
	printf("gokei=%d\n", gokei);
}
int tbl_gokei4(int* p)
{
	int total;
	for (int i = total = 0; i < TBL_END; i++)
	{
		total += *(p + i);/*i分pのアドレス(配列の要素)を進める*/
	}
	return total;
}
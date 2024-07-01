#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo, int* ama);

main()
{
	int a, b, c, d, e, f, g;
	printf("数値？：");
	scanf("%d", &a);
	printf("数値？：");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f, &g);
	puts("数値と数値の四則演算");
	printf("和=%d 差=%d 積=%d 商=%dあまり%d\n", c, d, e, f, g);

}
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo, int* ama)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
	*ama = x % y;
	return;
}
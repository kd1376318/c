#include<stdio.h>
void display1(int n1/*n1,n2は無くてもいいため分類上使用する*/);
void display2(int *n2);
main()
{
	int a, b;
	printf("数値a?:");
	scanf("%d", &a);
	display1(a);/*関数display1の呼び出し(aの値を送る)*/
	printf("数値b?:");
	scanf("%d", &b);
	display2(&b);/*bのアドレスをdisplay2に送る*/
	printf("b=%d\n\n", b);
}
void display1(int n)/*mainのaの値を受け取ってnにコピー*/
{
	printf("数値aは、%dです。\n", n);
	n += 10;/*値をコピーしてるだけなのでaの値に変化はない*/
	return;
}
void display2(int* n)
{
	printf("数値bは、%dです。\n", *n);
	*n += 10;/*アドレスの中身=bを+=10するためmain側bの値が変化する*/
	return;
}

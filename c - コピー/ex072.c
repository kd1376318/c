#include<stdio.h>
void display(int a);/*void=無し…戻り型+void=戻り値なし*/
main()
{
	int a;
	printf("data?:");
	scanf("%d", &a);
	display(a);/*関数displayの呼び出し(aの値をdisplayに持っていく)*/
}

void display(int a)
{
	printf("入力データ=%d\n", a);
	return;/*戻り値が無いのでreturnに何も設定しない*/
}
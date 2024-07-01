#include<stdio.h>
int/*戻り値をint型として宣言*/ add(int a, int b);/*プロトタイプ宣言(関数の使用宣言)&引数の個数宣言*/
main(/*引数が無い場合ここにvoidが入る*/)/*関数の型を省略するとint型として処理される*/
{
	int a, b, kotae;
	printf("整数を2つ入力:");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);/*関数addの呼び出し＆a,bの値をaddの引数a,bに渡す*/
	printf("合計は%dです\n", kotae);
	//return 0;
}

/*関数addの記述*/
int add(int a, int b);
{
	int ans;
	ans = a + b;
	return ans;/*ansをaddの戻り値として送る,呼び出し元に制御が帰る(関数addの終了)*/
}
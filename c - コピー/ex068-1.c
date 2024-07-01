#include<stdio.h>
main()
{
	int a,b,c,ret;
	printf("3つの整数を空白で区切って入力:");
	ret = scanf("%d%d%d", &a, &b, &c);/*retに戻り値を代入*/
	printf("ret=%d a=%d b=%d c=%d\n", ret, a, b, c);/*ret:戻り値 この場合個数はabcの3個*/
	printf("整数を入力(Ctrl+Zで終了)");
	while (scanf("%d", &a) != EOF)/*戻り値(入力データの個数)=EOF(-1)でないなら継続:入力正常に入力された場合戻り値(個数)=1*/
	{
		printf("a=%d\n", a);
		printf("整数を入力(Ctrl+Zで終了)");
	}
}

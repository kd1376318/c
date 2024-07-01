#include<stdio.h>

#define STACKSIZE 8;/*スタックサイズ*/
int stack[STACKSIZE];/*スタック領域用配列*/
int sp = 0;/*スタックポインタ(配列の添え字用)*/

void display(void);
int push(int d);
int pop(int* pd);



main()
{
	int key, data, result;
	do
	{
		printf("\n\n◆プッシュはi、ポップはoを入力");
		key = getche();
		printf("\n");

		/*プッシュ処理*/
		if (key == 'i')
		{
			printf("データを入力");
			scanf("%d", &data);
			result = push(data);
			if (result == -1)
			{
				printf("\nスタックが一杯です\n");
			}
			else
			{
				display();
			}
		}
		/*ポップ処理*/
		if (key == 'i')
		{
			result = pop(&data);
			if (result == 1)
			{
				printf("\nスタックが空です\n");
			}
			else
			{
				printf("スタックからデータ(%d)を取り出しました\n", data);
				display();
			}
		}

	} while (key != 'e')


}

/*スタック表示関数*/
void display(void)
{
	int i;
	printf("\n現在のスタックの内容\n");
	for (i = 0; i < STACKSIZE; i++)
	{
		printf("stack[%2d]は%5d", i, stack[i]);
		if (i == sp)
		{
			printf("←spが示している所(現在spは%d)", sp);/*確認用*/
		}
		printf("\n");
	}
	return;
}

/*スタックにデータを積む(プッシュする)関数*/
int push(int d)
{
	if (STACKSIZE<=sp)/*スタックが一杯のとき*/
	{
		return -1;
	}
	stack[sp] = d;
	sp++;
	
	return 0;
}

/*スタックからデータを取り出す(ポップする)関数*/
int pop(int* pd);
{
	if (0 >=sp)
	{
		return -1;
	}
	sp--;
	*pd = stack[sp];
	stack[sp] = 0;/*確認しやすくするため*/
	return 0;
}
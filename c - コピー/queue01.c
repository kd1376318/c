#include<stdio.h>
#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;

void display(void);
int enqueue(int d);
int dequeue(int* pd);

main()
{
	int key, data, result;
	do
	{
		printf("\n\n◆エンキューはi、デキューはoを入力");
		key = getche();
		printf("\n");

		/*エンキュー処理*/
		if (key == 'i')
		{
			printf("データを入力");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1)
			{
				printf("キューが一杯です");

			}
			else
			{
				display();
			}
		}
		/*デキュー処理*/
		if (key == 'o')
		{
			result = dequeue(&data);
			if (result == -1)
			{
				printf("キューが空です");
			}
			else
			{
				printf("キューからデータ(%d)を取り出しました\n", data);
			}
		}
	} while (key != 'e');
}

/*キュー表示関数*/
void display(void)
{
	int i;
	printf("\n現在のキューの内容\n");
	for (i = 0; i < QUEUESIZE; i++)
	{
		printf("queue[%2d]は%5d", i, queue[i]);
		if (i == head)
		{
			printf("←headが示している所(現在headは%d)", head);/*確認用*/
		}
		if (i == tail)
		{
			printf("←tailが示している所(現在tailは%d)", tail);/*確認用*/
		}
		printf("\n");
	}
}

/* キューにデータを入れる(エンキューする)関数 */
int enqueue(int d)
{
	if ((tail + 1) % QUEUESIZE == head) { return -1; } //キューが一杯のとき
	queue[tail] = d;
	tail++;
	tail = tail % QUEUESIZE;
	return 0;
}
/* キューからデータを取り出す(デキューする)関数 */
int dequeue(int* pd)
{
	if (head == tail) //キューが空のとき
	{ 
		return -1; 
	} 
	*pd = queue[head];
	queue[head] = 0; //確認しやすくするため
	head++;
	head = head % QUEUESIZE;
	return 0;
}
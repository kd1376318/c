#include<stdio.h>

struct syohin_data
{
	char name[20];
	int tanka;
};

main()
{
	struct syohin_data syohin;
	struct syohin_data* p;
	p = &syohin;
	printf("商品名=");
	scanf("%s", p->/*構造体変数をポインタで参照する場合->が使われる*と一緒*/name);
	p->tanka = 30;
	printf("p->name=%s\n", p->name);
	printf("p->tanka=%d\n", p->tanka);
	printf("p->syohin.name=%s\n", syohin.name);
	printf("p->syohin.tanka=%d\n", syohin.tanka);
}
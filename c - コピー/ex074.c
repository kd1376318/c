#include<stdio.h>
void display1(int n1/*n1,n2�͖����Ă��������ߕ��ޏ�g�p����*/);
void display2(int *n2);
main()
{
	int a, b;
	printf("���la?:");
	scanf("%d", &a);
	display1(a);/*�֐�display1�̌Ăяo��(a�̒l�𑗂�)*/
	printf("���lb?:");
	scanf("%d", &b);
	display2(&b);/*b�̃A�h���X��display2�ɑ���*/
	printf("b=%d\n\n", b);
}
void display1(int n)/*main��a�̒l���󂯎����n�ɃR�s�[*/
{
	printf("���la�́A%d�ł��B\n", n);
	n += 10;/*�l���R�s�[���Ă邾���Ȃ̂�a�̒l�ɕω��͂Ȃ�*/
	return;
}
void display2(int* n)
{
	printf("���lb�́A%d�ł��B\n", *n);
	*n += 10;/*�A�h���X�̒��g=b��+=10���邽��main��b�̒l���ω�����*/
	return;
}

#include <stdio.h>


int Add(int num1, int num2) // ��������(o), ��ȯ��(o)
{
	return num1 + num2;
}

int asknum(void) // ��������(x), ��ȯ��(o)
{
	int num;
	printf("������ �Է��Ͻÿ�");
	scanf_s("%d", &num);
	return num;
}

void Showresult(int num) //��������(o) ��ȯ��(x)
{
	printf("��� ���� %d ", num);
}
void Howdoyoutalk() //��������(x) ��ȯ��(x)
{
	printf("�Ӹ��ӿ��� ���� �ΰ��� �����Ͻÿ� \n");
	printf("��! �׷��� �Է��غ��ô� . \n");
}
int main(void)
{

	int num1, num2, result;
	Howdoyoutalk();
	 num1  = asknum();
	 num2 = asknum();
	result=Add(num1, num2);
	Showresult(result);
	
}
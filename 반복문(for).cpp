#include <stdio.h>


int main(void)
{
	int num;
	int total=1;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		total *= i;
	}
	printf("%d", total);
	return 0;
}

//int main(void)
//{
//	int num1, num2;
//	int total = 0;
//	printf("�� ���� ������ �Է��Ͻÿ� : ");
//	scanf_s("%d %d", &num1, &num2);
//
//	for (int i = num1; i <= num2; i++)
//	{
//		total += i;
//	}
//	printf("%d", total);
//	return 0;
//
//	�� ���� ������ �Է��Ͻÿ� : 3 5
//		12
//		C : \Users\goddn\source\repos\young\studytt\Debug\studytt.exe(9756 ���μ���)��(��) 0 �ڵ�� ���� ����Ǿ����ϴ�.
//		�� â�� �������� �ƹ� Ű�� ��������.
//
//
//}
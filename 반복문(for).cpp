#include <stdio.h>


int main(void)
{
	int num;
	int total=1;
	printf("정수를 입력하시오:");
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
//	printf("두 개의 정수를 입력하시오 : ");
//	scanf_s("%d %d", &num1, &num2);
//
//	for (int i = num1; i <= num2; i++)
//	{
//		total += i;
//	}
//	printf("%d", total);
//	return 0;
//
//	두 개의 정수를 입력하시오 : 3 5
//		12
//		C : \Users\goddn\source\repos\young\studytt\Debug\studytt.exe(9756 프로세스)이(가) 0 코드로 인해 종료되었습니다.
//		이 창을 닫으려면 아무 키나 누르세요.
//
//
//}
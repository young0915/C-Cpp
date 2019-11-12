#include <stdio.h>


int Add(int num1, int num2) // 인자전달(o), 반환값(o)
{
	return num1 + num2;
}

int asknum(void) // 인자전달(x), 반환값(o)
{
	int num;
	printf("정수를 입력하시오");
	scanf_s("%d", &num);
	return num;
}

void Showresult(int num) //인자전달(o) 반환값(x)
{
	printf("결과 값은 %d ", num);
}
void Howdoyoutalk() //인자전달(x) 반환값(x)
{
	printf("머리속에서 정수 두개를 생각하시오 \n");
	printf("자! 그러면 입력해봅시다 . \n");
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
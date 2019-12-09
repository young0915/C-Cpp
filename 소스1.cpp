#include <iostream>
using namespace std;

/*
     while 동작조건 -> ()참일때만 실행된다.
     while(true)  
	 {
	 기본적으로 무한루프이다.
	 }
*/
int main()
{

	/*int num = true;
	int num1 = false;

	cout << num << endl;
	cout << num1 << endl;*/
	/*while (2)
	{
		cout << "블랙홀~~ 빠진다~~~" << endl;
	}*/
	//연습문제
	// while 
	// 입력변수
	//1~10을 제외한 나머지 숫자를 입력하면 
	//출력을 프로그램을 종료합니다.

	int a;

	while (true)
	{
		cin >> a;

		if (a <= 10) break;
	}


	system("pause");
	return 0;
}
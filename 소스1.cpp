#include <iostream>
using namespace std;

/*
     while �������� -> ()���϶��� ����ȴ�.
     while(true)  
	 {
	 �⺻������ ���ѷ����̴�.
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
		cout << "��Ȧ~~ ������~~~" << endl;
	}*/
	//��������
	// while 
	// �Էº���
	//1~10�� ������ ������ ���ڸ� �Է��ϸ� 
	//����� ���α׷��� �����մϴ�.

	int a;

	while (true)
	{
		cin >> a;

		if (a <= 10) break;
	}


	system("pause");
	return 0;
}
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;



/*
1. ĳ���� ������ �Ѵ�. (4��)
2. ���Ͱ� �ִ�.(3����)
3. ĳ���Ͱ� ���͸� ATK
3-1. ���Ͱ� ĳ���� ���� Atk, Hp, Mp, Atk, critical
*/
//
//void Monstershow(int b)
//{
//	srand(time(NULL));
//	int MAtk;
//	MAtk = rand() % 1;
//	int Hp = 10;
//	while (Hp == 0)
//	{
//		if (b == 1)
//			cout<<'������ �����ߴ�.'<<endl;
//	}
//}
int main()
{
	int a;
	srand((int)time(NULL));

	cout << "1.���� 2. ������ 3. �ü� 4. ����" << endl;
	cout << "ĳ���͸� �����Ͻÿ� : ";
	cin >> a;
	if (a == 1)
	{
		cout << "���� ����" << endl;
		cout << "����� ȯ���մϴ�." << endl;
	}
	else if (a == 2)
	{
		cout << "������ ����" << endl;
		cout << "������� ȯ���մϴ�." << endl;
	}
	else if (a == 3)
	{
		cout << "�ü� ����" << endl;
		cout << "�ü��� ȯ���մϴ�." << endl;

	}
	else if (a == 4)
	{
		cout << "���� ����" << endl;
		cout << "������ ȯ���մϴ�." << endl;
	}
	int monsters;
	monsters = rand() % 2;
	int b;
	switch (monsters)
	{
	case 0:
		cout << "�������ϸ� ����" << endl;
		break;
	case 1:
		cout << "�����ϸ� ����" << endl;
		break;

	case 2:
		cout << "�����ϸ� ����" << endl;
		break;

	} // 2�� �Ϸ�

	cout << "���� ����! ���� ����!" << endl;
	
	int Hp = 100;
	int atk = 2;
	int matk = 1;
	int MHp = 80;
	
	int mmatk;
	int mcritical;
	
	int critical;
	while (Hp)
	{
		mmatk = rand() % 3;
		critical = rand() % 5;
		mcritical = rand() % 3;
		cout << "1. ���� 2. �� 3.ũ��Ƽ��" << endl;
		cin >> b;
		if (b == 1)
		{

			cout << "H ����" << endl;
			MHp -= atk;
			cout << "MHp ��" << MHp << endl;
			switch (mmatk)
			{
			case 0:
				cout << "M ����" << endl;
				Hp -= matk;
				cout << "���ΰ� Hp" << Hp << endl;

				break;
			case 1 :
				cout << "M �� " << endl;
				MHp += 1;
				break;
			case 2:
				cout << "M ũ��Ƽ��" << endl;
				Hp -= mcritical;
				cout << "���ΰ� Hp" << Hp << endl;

			default:
				break;
			}
			if (MHp == 0 || Hp == 0)
			{
				cout << "���ΰ� Hp ���� MHp" << Hp << MHp << endl;

				cout << "���� ��" << endl;
				break;
			}
		}

		else if (b == 2)
		{
			cout << "H ��" << endl;
			Hp += 5;
			switch (mmatk)
			{
			case 0:
				cout << "M ����" << endl;
				Hp -= matk;
				cout << "���ΰ� Hp" << Hp << endl;

				break;
			case 1:
				cout << "M ��" << endl;
				MHp += 1;

				break;
			case 2:
				cout << "M ũ��Ƽ��" << endl;
				Hp -= mcritical;
				cout << "���ΰ� Hp" << Hp << endl;
			default:
				break;
			}
			if (MHp == 0 || Hp == 0)
			{
				cout << "���ΰ� Hp ���� MHp" << Hp << MHp << endl;

				cout << "���� ��" << endl;
				break;
			}
		}

		else if (b == 3)
		{
			cout << "H ũ��Ƽ��" << endl;
			MHp *= critical;
			switch (mmatk)
			{
			case 0:
				cout << "M ����" << endl;
			    Hp -= matk;
				cout << "���ΰ� Hp" << Hp << endl;

				break;
			case 1:
				cout << "M ��" << endl;
				MHp += 1;
				cout << "���ΰ� Hp" << Hp << endl;

				break;
			case 2:
				cout << "M ũ��Ƽ��" << endl;
				Hp -= critical;
				cout << "���ΰ� Hp" << Hp << endl;
			default:
				break;
			}
			if (MHp == 0 || Hp == 0)
			{
				cout << "���ΰ� Hp ���� MHp" << Hp <<MHp<< endl;

				cout << "���� ��" << endl;
				break;
			}
		}


		/*	
			if (MHp == 0 || Hp == 0)
			{
				cout << "���� ��" << endl;
				break;
			}
			continue;

		*/
				


		}
	return 0;
		
		
	}


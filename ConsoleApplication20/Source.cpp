#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>

using namespace std;

int q;

#define arr 20

void main()

{
	setlocale(LC_ALL, "Russian");
start:
	int nz;

	do
	{
		cout << "������� ����� �������: ";
		cin >> nz;
		switch (nz)
		{
		case 777:
		{
			cout << "����������� �����: \n";
			int a[arr] = {};
			int j;

			cout << "�� ����������:" << endl;
			for (int i = 0; i < 20; i++)
			{
				a[i] = 1 + rand() % 99;
				cout << "a[" << i << "] = " << a[i] << endl;

			}

			cout << "____________________________________________\n";

			for (int i = 0; i < arr - 1; i++)
			{
				for (j = (arr - 1); j > i; j--)
				{
					if (a[j - 1] > a[j])
					{
						int temp = a[j - 1];
						a[j - 1] = a[j];
						a[j] = temp;

					}

				}
				cout << "a[" << i << "] = " << a[j] << endl;
			}

		}break;

		case 666:
		{
			cout << "���������� ������: \n";
			int a[arr] = {};
			int j, min, temp;

			cout << "�� ����������:" << endl;
			for (int i = 0; i < 20; i++)
			{
				a[i] = 1 + rand() % 99;
				cout << "a[" << i << "] = " << a[i] << endl;

			}

			cout << "____________________________________________\n";

			for (int i = 0; i < arr - 1; i++)
			{
				min = i;

				for (int j = i + 1; j < arr; j++)
				{
					if (a[j] < a[min])
						min = j;
				}
				temp = a[i];
				a[i] = a[min];
				a[min] = temp;

				cout << "a[" << i << "] = " << a[i] << endl;
			}



		}break;

		case 555:
		{
			cout << "���������� ������� \n";
			int a[arr] = {};
			int j, min, temp;

			cout << "�� ����������:" << endl;
			for (int i = 0; i < 20; i++)
			{
				a[i] = 1 + rand() % 99;
				cout << "a[" << i << "] = " << a[i] << endl;

			}

			cout << "____________________________________________\n";

			for (int i = 1; i < arr; i++)
			{
				int value = a[i];
				int index = i;
				while ((index > 0) && (a[index - 1] > value))
				{
					a[index] = a[index - 1];
					index--;
				}
				a[index] = value;
			}
			for (int i = 0; i < 20; i++)
				cout << "a[" << i << "] = " << a[i] << endl;



		}break;

		case 1:
		{
			//1.	��������� ������ ��������� �����, ��������� ������ �� �������� ��������� ���������������� �������
			int a[arr] = {};

			for (int i = 0; i < 20; i++)
			{
				a[i] = 1 + rand() % 99;
				for (i = 1; i <= 20; i++)
				{

				}

			}

		}break;

		case 2:
		{
			/*2.	����������:
			a.����� ���� ��������� �������;
			b.������������ ���� ��������� �������;
			c.����� ��������� ���� ��������� �������;
			d.����� ����� ������ ��������� �������;
			e.����� ��������� ������� � k1 - �� �� k2 - �(�������� k1 � k2 ��������  � ����������; k2 > k1);
			f.������� �������������� ���� ��������� �������;
			g.������� �������������� ��������� ������� � s1 - �� �� s2 - �(�������� s1 � s2 �������� � ����������; s2 > s1).*/

			int a[arr] = {};
			float sum = 0, umn = 1, sum6 = 0;
			float k1, k2;
			for (int i = 0; i < 20; i++)
			{
				a[i] = 1 + rand() % 99;
				cout << a[i] << "\t";
				sum += a[i];
				umn *= a[i];

				if (i == 5)
					sum6 = sum;
			}

			cout << endl << sum << " - ����� ���� ��������� �������" << endl;
			cout << umn << " - ������������ ���� ��������� �������" << endl;
			cout << sum6 << " - ����� ������ ����� ��������� �������" << endl;
			cout << sum / 20 << "������� �������������� ���� ��������� �������\n";

			cout << "\n������� ��� ������� ������� �� 0 �� 19, ����� ������ ����� ����� � �� ���������� (k2 > k1): "; cin >> k1; cout << "\n : "; cin >> k2;

			sum = 0;
			for (int i = k1; i <= k2; i++)
			{
				cout << a[i] << "\t";
				sum += a[i];
			}
			cout << endl << sum << " - ����� ����� �� ������� " << k1 << " �� ������� " << k2 << endl;
			cout << sum / (k2 + 1) << " ������� �������������� ����� �� ������� " << k1 << " �� ������� " << k2 << endl;


		}break;


		case 3:
		{
			/*3.	��� ������.�����:
			a.����� ��������� �������, �������� ������� �� ��������� 20;
			b.����� ��������� �������, ������� ����� a.*/
			int a[arr] = {};
			int sum = 0, A;
			for (int i = 0; i < 20; i++)
			{
				a[i] = 1 + rand() % 99;
				cout << "a[" << i << "] = " << a[i] << endl;

				if (a[i] < 20)
					sum += a[i];

			}

			cout << "____________________________________________\n";
			cout << sum << " ����a ��������� �������, �������� ������� �� ��������� 20\n";
			cout << "������� ����� �(����� ������ ����� ��������� �������, ������� ����� a): "; cin >> A;

			sum = 0;
			for (int i = 0; i < 20; i++)
			{
				if (a[i] > A)
					sum += a[i];
			}
			cout << sum << " ����a ��������� �������, ������� ����� a\n";



		}break;

		case 4:
		{
			//4.	������ ������������� ������, ��������� �� 9 ���������.�������� ������� ������������ � �����������  �������� �������

			int mas[9] = {};
			int max = 0, min = 100;


			for (int i = 0; i < 9; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << "mas[" << i << "] = " << mas[i] << endl;
				/*if (mas[i] > max)
					max = mas[i];
				if (mas[i] < min)
					min = mas[i];*/

			}


			for (int i = 0; i < 9; i++)
			{
				if (mas[i] < mas[min])
					min = i;

				if (mas[i] > mas[max])
					max = i;
			}

			int temp = mas[max];
			mas[max] = mas[min];
			mas[min] = temp;

			cout << "________" << endl;
			for (int i = 0; i < 9; i++)
			{

				cout << "mas[" << i << "] = " << mas[i] << endl;
			}
		}break;

		case 5:
		{
			//5.	������ ������, ��������� �� 20 ��������� ������ ����.����������  ����� ��������� ������ ������ ��� �������� �� ��������.
			int a[arr] = {};
			int chet = 0, nechet = 0;
			for (int i = 0; i < 20; i++)
			{
				a[i] = 1 + rand() % 99;
				cout << "a[" << i << "] = " << a[i] << endl;

				if (a[i] % 2 == 0)
					chet++;
				if (a[i] % 2 == 1)
					nechet++;
			}

			cout << chet << " - ���-�� ������\n" << nechet << " - ���-�� �������� \n";
			if (chet > nechet)
				cout << "������ ������\n";
			if (chet < nechet)
				cout << "�������� ������\n";
		}break;

		case 6:
		{
			//	6.	����� ������, ��������� �� 16 ��������� ������������� ����.���������� �������(��������������) ������������� � ������������ ���������

			int mas[16] = {};

			int max = 0, min = 100;
			int mx, mn;
			for (int i = 0; i < 16; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << "mas[" << i << "] = " << mas[i] << endl;
				if (mas[i] > max)
				{
					max = mas[i];
					mx = i;
				}
				if (mas[i] < min)
				{
					min = mas[i];
					mn = i;
				}
			}

			cout << mx << " - ������ �������������\n" << mn << " - ������ ������������\n";
		}break;


		case 7:
		{
			//7.	������ ������������� ������, ��������� �� 14 ���������.��������� ���������� � ����� ������ �� �������� ������������� ���������.
			int mas[14] = {};

			int sum = 0, count = 0;
			for (int i = 0; i < 9; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << "mas[" << i << "] = " << mas[i] << endl;
				if (mas[i] % 2 == 0)
				{
					sum += mas[i];
					count++;
				}
			}
			cout << sum << " ����� ���� ������ �����\n"; 
			cout << count << " ���-�� ���� ������ �����\n";


		}break;

		case 8:
		{

		}break;
		}


		cout << "������ ���������� 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			goto start;
			break;
		default:
		{
			cout << "������" << endl;
		}
		}
	} while (nz > 0);


}
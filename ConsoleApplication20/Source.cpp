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
		cout << "Введите номер задания: ";
		cin >> nz;
		switch (nz)
		{
		case 777:
		{
			cout << "ПУЗЫРЬКОВЫЙ МЕТОД: \n";
			int a[arr] = {};
			int j;

			cout << "до сортировки:" << endl;
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
			cout << "СОРТИРОВКА ВЫБОРА: \n";
			int a[arr] = {};
			int j, min, temp;

			cout << "до сортировки:" << endl;
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
			cout << "СОРТИРОВКА ВСТАВКИ \n";
			int a[arr] = {};
			int j, min, temp;

			cout << "до сортировки:" << endl;
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
			//1.	Используя датчик случайных чисел, заполнить массив из двадцати элементов неповторяющимися числами
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
			/*2.	Определить:
			a.сумму всех элементов массива;
			b.произведение всех элементов массива;
			c.сумму квадратов всех элементов массива;
			d.сумму шести первых элементов массива;
			e.сумму элементов массива с k1 - го по k2 - й(значения k1 и k2 вводятся  с клавиатуры; k2 > k1);
			f.среднее арифметическое всех элементов массива;
			g.среднее арифметическое элементов массива с s1 - го по s2 - й(значения s1 и s2 вводятся с клавиатуры; s2 > s1).*/

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

			cout << endl << sum << " - сумма всех элементов массива" << endl;
			cout << umn << " - произведение всех элементов массива" << endl;
			cout << sum6 << " - сумма первых шести элементов массива" << endl;
			cout << sum / 20 << "среднее арифметическое всех элементов массива\n";

			cout << "\nвведите два индекса массива от 0 до 19, чтобы узнать сумму чисел в их промежутке (k2 > k1): "; cin >> k1; cout << "\n : "; cin >> k2;

			sum = 0;
			for (int i = k1; i <= k2; i++)
			{
				cout << a[i] << "\t";
				sum += a[i];
			}
			cout << endl << sum << " - сумма чисел от индекса " << k1 << " до индекса " << k2 << endl;
			cout << sum / (k2 + 1) << " среднее арифметическое чисел от индекса " << k1 << " до индекса " << k2 << endl;


		}break;


		case 3:
		{
			/*3.	Дан массив.Найти:
			a.сумму элементов массива, значение которых не превышает 20;
			b.сумму элементов массива, больших числа a.*/
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
			cout << sum << " суммa элементов массива, значение которых не превышает 20\n";
			cout << "введите число а(чтобы узнать сумму элементов массива, больших числа a): "; cin >> A;

			sum = 0;
			for (int i = 0; i < 20; i++)
			{
				if (a[i] > A)
					sum += a[i];
			}
			cout << sum << " суммa элементов массива, больших числа a\n";



		}break;

		case 4:
		{
			//4.	Ввести целочисленный массив, состоящий из 9 элементов.Поменять местами максимальный и минимальный  элементы массива

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
			//5.	Ввести массив, состоящий из 20 элементов целого типа.Определить  каких элементов больше четных или нечетных по значению.
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

			cout << chet << " - кол-во четных\n" << nechet << " - кол-во нечетных \n";
			if (chet > nechet)
				cout << "четных больше\n";
			if (chet < nechet)
				cout << "нечетных больше\n";
		}break;

		case 6:
		{
			//	6.	Задан массив, состоящий из 16 элементов вещественного типа.Определить индексы(местоположение) максимального и минимального элементов

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

			cout << mx << " - индекс максимального\n" << mn << " - индекс минимального\n";
		}break;


		case 7:
		{
			//7.	Ввести целочисленный массив, состоящий из 14 элементов.Вычислить количество и сумму четных по значению положительных элементов.
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
			cout << sum << " сумма всех четных чисел\n"; 
			cout << count << " кол-во всех четных чисел\n";


		}break;

		case 8:
		{

		}break;
		}


		cout << "Хотите продолжить 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			goto start;
			break;
		default:
		{
			cout << "ошибка" << endl;
		}
		}
	} while (nz > 0);


}
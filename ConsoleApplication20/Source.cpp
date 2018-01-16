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
		cout << "Ââåäèòå íîìåð çàäàíèÿ: ";
		cin >> nz;
		switch (nz)
		{
		case 777: пузырьковая
		{
			cout << "ÏÓÇÛÐÜÊÎÂÛÉ ÌÅÒÎÄ: \n";
			int a[arr] = {};
			int j;

			cout << "äî ñîðòèðîâêè:" << endl;
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

		case 666:сортировка выбора
		{
			cout << "ÑÎÐÒÈÐÎÂÊÀ ÂÛÁÎÐÀ: \n";
			int a[arr] = {};
			int j, min, temp;

			cout << "äî ñîðòèðîâêè:" << endl;
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

		case 555:сортировка вставки
		{
			cout << "ÑÎÐÒÈÐÎÂÊÀ ÂÑÒÀÂÊÈ \n";
			int a[arr] = {};
			int j, min, temp;

			cout << "äî ñîðòèðîâêè:" << endl;
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
			//1.	Èñïîëüçóÿ äàò÷èê ñëó÷àéíûõ ÷èñåë, çàïîëíèòü ìàññèâ èç äâàäöàòè ýëåìåíòîâ íåïîâòîðÿþùèìèñÿ ÷èñëàìè
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
			/*2.	Îïðåäåëèòü:
			a.ñóììó âñåõ ýëåìåíòîâ ìàññèâà;
			b.ïðîèçâåäåíèå âñåõ ýëåìåíòîâ ìàññèâà;
			c.ñóììó êâàäðàòîâ âñåõ ýëåìåíòîâ ìàññèâà;
			d.ñóììó øåñòè ïåðâûõ ýëåìåíòîâ ìàññèâà;
			e.ñóììó ýëåìåíòîâ ìàññèâà ñ k1 - ãî ïî k2 - é(çíà÷åíèÿ k1 è k2 ââîäÿòñÿ  ñ êëàâèàòóðû; k2 > k1);
			f.ñðåäíåå àðèôìåòè÷åñêîå âñåõ ýëåìåíòîâ ìàññèâà;
			g.ñðåäíåå àðèôìåòè÷åñêîå ýëåìåíòîâ ìàññèâà ñ s1 - ãî ïî s2 - é(çíà÷åíèÿ s1 è s2 ââîäÿòñÿ ñ êëàâèàòóðû; s2 > s1).*/

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

			cout << endl << sum << " - ñóììà âñåõ ýëåìåíòîâ ìàññèâà" << endl;
			cout << umn << " - ïðîèçâåäåíèå âñåõ ýëåìåíòîâ ìàññèâà" << endl;
			cout << sum6 << " - ñóììà ïåðâûõ øåñòè ýëåìåíòîâ ìàññèâà" << endl;
			cout << sum / 20 << "ñðåäíåå àðèôìåòè÷åñêîå âñåõ ýëåìåíòîâ ìàññèâà\n";

			cout << "\nââåäèòå äâà èíäåêñà ìàññèâà îò 0 äî 19, ÷òîáû óçíàòü ñóììó ÷èñåë â èõ ïðîìåæóòêå (k2 > k1): "; cin >> k1; cout << "\n : "; cin >> k2;

			sum = 0;
			for (int i = k1; i <= k2; i++)
			{
				cout << a[i] << "\t";
				sum += a[i];
			}
			cout << endl << sum << " - ñóììà ÷èñåë îò èíäåêñà " << k1 << " äî èíäåêñà " << k2 << endl;
			cout << sum / (k2 + 1) << " ñðåäíåå àðèôìåòè÷åñêîå ÷èñåë îò èíäåêñà " << k1 << " äî èíäåêñà " << k2 << endl;


		}break;


		case 3:
		{
			/*3.	Äàí ìàññèâ.Íàéòè:
			a.ñóììó ýëåìåíòîâ ìàññèâà, çíà÷åíèå êîòîðûõ íå ïðåâûøàåò 20;
			b.ñóììó ýëåìåíòîâ ìàññèâà, áîëüøèõ ÷èñëà a.*/
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
			cout << sum << " ñóììa ýëåìåíòîâ ìàññèâà, çíà÷åíèå êîòîðûõ íå ïðåâûøàåò 20\n";
			cout << "ââåäèòå ÷èñëî à(÷òîáû óçíàòü ñóììó ýëåìåíòîâ ìàññèâà, áîëüøèõ ÷èñëà a): "; cin >> A;

			sum = 0;
			for (int i = 0; i < 20; i++)
			{
				if (a[i] > A)
					sum += a[i];
			}
			cout << sum << " ñóììa ýëåìåíòîâ ìàññèâà, áîëüøèõ ÷èñëà a\n";



		}break;

		case 4:
		{
			//4.	Ââåñòè öåëî÷èñëåííûé ìàññèâ, ñîñòîÿùèé èç 9 ýëåìåíòîâ.Ïîìåíÿòü ìåñòàìè ìàêñèìàëüíûé è ìèíèìàëüíûé  ýëåìåíòû ìàññèâà

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
			//5.	Ââåñòè ìàññèâ, ñîñòîÿùèé èç 20 ýëåìåíòîâ öåëîãî òèïà.Îïðåäåëèòü  êàêèõ ýëåìåíòîâ áîëüøå ÷åòíûõ èëè íå÷åòíûõ ïî çíà÷åíèþ.
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

			cout << chet << " - êîë-âî ÷åòíûõ\n" << nechet << " - êîë-âî íå÷åòíûõ \n";
			if (chet > nechet)
				cout << "÷åòíûõ áîëüøå\n";
			if (chet < nechet)
				cout << "íå÷åòíûõ áîëüøå\n";
		}break;

		case 6:
		{
			//	6.	Çàäàí ìàññèâ, ñîñòîÿùèé èç 16 ýëåìåíòîâ âåùåñòâåííîãî òèïà.Îïðåäåëèòü èíäåêñû(ìåñòîïîëîæåíèå) ìàêñèìàëüíîãî è ìèíèìàëüíîãî ýëåìåíòîâ

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

			cout << mx << " - èíäåêñ ìàêñèìàëüíîãî\n" << mn << " - èíäåêñ ìèíèìàëüíîãî\n";
		}break;


		case 7:
		{
			//7.	Ââåñòè öåëî÷èñëåííûé ìàññèâ, ñîñòîÿùèé èç 14 ýëåìåíòîâ.Âû÷èñëèòü êîëè÷åñòâî è ñóììó ÷åòíûõ ïî çíà÷åíèþ ïîëîæèòåëüíûõ ýëåìåíòîâ.
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
			cout << sum << " ñóììà âñåõ ÷åòíûõ ÷èñåë\n"; 
			cout << count << " êîë-âî âñåõ ÷åòíûõ ÷èñåë\n";


		}break;

		case 8:
		{

		}break;
		}


		cout << "Õîòèòå ïðîäîëæèòü 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			goto start;
			break;
		default:
		{
			cout << "îøèáêà" << endl;
		}
		}
	} while (nz > 0);


}

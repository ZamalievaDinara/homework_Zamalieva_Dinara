//3
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int number;

	cout << "Введите число: ";
	cin >> number;

	if (number > 999999999 || number < 0)
	{
		cout << "Введенное число вне допустимого диапазона.";
		return 0;
	}

	cout << "Введено число:";
	if (number == 0)
	{
		cout << " ноль";
		return 0;
	}

	for (int i = 0; i < 3; i++)
	{
		int block;
		if (i == 0) // millions
			block = number / 1000000;
		else if (i == 1) // thousands
			block = number % 1000000 / 1000;
		else // ones
			block = number % 1000;

		if (block)
		{
			int h = block / 100; // hundreds
			int t = block % 100 / 10; // tens
			int u = block % 10; // units

			switch (h) {
			case 0: break;
			case 1: cout << " сто"; break;
			case 2: cout << " двести"; break;
			case 3: cout << " триста"; break;
			case 4: cout << " четыреста"; break;
			case 5: cout << " пятьсяот"; break;
			case 6: cout << " шестьсот"; break;
			case 7: cout << " семьсот"; break;
			case 8: cout << " восемьсот"; break;
			case 9: cout << " девятьсот"; break;
			};

			switch (t) {
			case 0: break;
			case 1: if (u == 0) cout << " десять"; break;
			case 2: cout << " двадцать"; break;
			case 3: cout << " тридцать"; break;
			case 4: cout << " сорок"; break;
			case 5: cout << " пятьдесят"; break;
			case 6: cout << " шестьдесят"; break;
			case 7: cout << " семьдесят"; break;
			case 8: cout << " восемьдесят"; break;
			case 9: cout << " девяносто"; break;
			};

			switch (u) {
			case 0: break;
			case 1: cout << (t == 1 ? " одинадцать" : (i == 1 ? " одна" : " один")); break;
			case 2: cout << (t == 1 ? " двенадцать" : (i == 1 ? " две" : " два")); break;
			case 3: cout << (t == 1 ? " тринадцать" : " три"); break;
			case 4: cout << (t == 1 ? " четырнадцать" : " четыре"); break;
			case 5: cout << (t == 1 ? " пятнадцать" : " пять"); break;
			case 6: cout << (t == 1 ? " шестнадцать" : " шесть"); break;
			case 7: cout << (t == 1 ? " семнадцать" : " семь"); break;
			case 8: cout << (t == 1 ? " восемнадцать" : " восемь"); break;
			case 9: cout << (t == 1 ? " девятнадцать" : " девять"); break;
			};

			if (i == 0) // millions
			{
				if (t != 1 && u > 0 && u < 5)
					cout << (u == 1 ? " миллион" : " миллиона");
				else
					cout << " миллионов";
			}
			else if (i == 1) // thousands
			{
				if (t != 1 && u > 0 && u < 5)
					cout << (u == 1 ? " тысяча" : " тысячи");
				else
					cout << " тысяч";
			}
		}
	}
	cout << std::endl;

	return 0;
}

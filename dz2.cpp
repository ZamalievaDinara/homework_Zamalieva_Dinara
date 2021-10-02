//2
#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int day, month, cnt;

	cout << "Введите номер месяца (1-12): ";
	cin >> month;
	if (month > 12 || month < 1)
	{
		cout << "Ошибка: Введен некорректный номер месяца.";
		return; 
	}

	
	bool has31 = month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12;
	int maxDays = has31 ? 31 : (month == 2 ? 28 : 30);
	cout << "Введите номер дня (1-" << maxDays << "): ";
	cin >> day;
	if (day < 1 || day > maxDays)
	{
		cout << "Ошибка: Введен некорректный номер дня.";
		return;
	}
	
	cnt = 0;
	switch (month) 
	{
	case 1:
		cnt += 31;
	case 2:
		cnt += 28;
	case 3:
		cnt += 31;
	case 4:
		cnt += 30;
	case 5:
		cnt += 31;
	case 6:
		cnt += 30;
	case 7:
		cnt += 31;
	case 8:
		cnt += 31;
	case 9:
		cnt += 30;
	case 10:
		cnt += 31;
	case 11:
		cnt += 30;
	case 12:
		cnt += 31;
	}
	cnt -= day;
	
	cout << "До Нового года осталось " << cnt << " дней";
 
}
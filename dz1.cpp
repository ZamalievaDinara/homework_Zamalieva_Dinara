// 1
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int a;
	cout << "Введите число: ";
	cin >> a; 
	if (a > 99 && a < 1000)
		cout << "Введено трехзначное число";
	else
		cout << "Введено не трехзначное число";

	return 0;
}


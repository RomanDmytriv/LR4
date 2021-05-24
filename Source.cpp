#include <iostream>
#include "windows.h"

using namespace std;
const int LEN = 80;
float min, max;

class Taruf
{
private:
	char Operator[LEN];
	char Name[LEN];
public:
	void getinf()
	{
		cout << "\n Введіть оператора: ";
		cin >> Operator;
		cout << "\n Введіть назву тарифного пакету:";
		cin >> Name;
	}
	void putinf() const
	{
		cout << "\n Оператор: " << Operator;
		cout << "\n Тарифний пакет: " << Name;
	}
};

class FirtsTaruf : private Taruf
{
private:
	float count;
	int numberMinutes;
public:
	void getdata()
	{
		Taruf::getinf();
		cout << "\n Введіть вартість дзвінків за 1 хв: "; cin >> count;
		cout << "\n Введіть кількість хвилин: "; cin >> numberMinutes;
		
	}
	void putdata() const
	{
		Taruf::putinf();
		cout << "\n Вартість дзвінків за 1 хв: " << count;
		cout << "\n Кількість хвилин: " << numberMinutes;
		cout << "\n Загальна вартість: " << count * numberMinutes;
		
	}
	float allcost() {
		return count * numberMinutes;
	}
};

class SecondTaruf : private Taruf
{
private:
	float count;
	int numberMinutes;
public:
	void getdata()
	{
		Taruf::getinf();
		cout << "\n Введіть вартість дзвінків за 1 хв: "; cin >> count;
		cout << "\n Введіть кількість хвилин: "; cin >> numberMinutes;

	}
	void putdata() const
	{
		Taruf::putinf();
		cout << "\n Вартість дзвінків за 1 хв: " << count;
		cout << "\n Кількість хвилин: " << numberMinutes;
		cout << "\n Загальна вартість: " << count*numberMinutes;

	}
	float allcost() {
		return count * numberMinutes;
	}
};

class ThirdTaruf : private Taruf
{
private:
	float count;
	int numberMinutes;
public:
	void getdata()
	{
		Taruf::getinf();
		cout << "\n Введіть вартість дзвінків за 1 хв: "; cin >> count;
		cout << "\n Введіть кількість хвилин: "; cin >> numberMinutes;

	}
	void putdata() const
	{
		Taruf::putinf();
		cout << "\n Вартість дзвінків за 1 хв: " << count;
		cout << "\n Кількість хвилин: " << numberMinutes;
		cout << "\n Загальна вартість: " << count * numberMinutes;

	}
	float allcost() {
		return count*numberMinutes;
	}
};

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	FirtsTaruf t1;
	SecondTaruf t2;
	ThirdTaruf t3;

	cout << endl;
	cout << "\nВвід інформації про перший тарифний план";
	t1.getdata();

	cout << "\nВвід інформації про другий тарифний план";
	t2.getdata();

	cout << "\nВвід інформації про третій тарифний план";
	t3.getdata();

	int min = t1.allcost();
	int max = t1.allcost();

	if (t2.allcost() < min) {
		min = t2.allcost();
	}
	if (t3.allcost() < min) {
		min = t3.allcost();
	}

	if (t2.allcost() > max) {
		max = t2.allcost();
	}
	if (t3.allcost() > max) {
		max = t3.allcost();
	}
	cout << "\nНайдешевший тарифний план:\n";
	if (t1.allcost() == min) {
		t1.putdata();
	}
	else {
		if (t2.allcost() == min) {
			t2.putdata();
		}
		else {
		t3.putdata();
		}
	}
	cout << "\nНайдорожчий тарифний план:\n";
	if (t1.allcost() == max) {
		t1.putdata();
	}
	else {
		if (t2.allcost() == max) {
			t2.putdata();
		}
		else {
			t3.putdata();
		}
	}
	cout << endl;
	return 0;
}
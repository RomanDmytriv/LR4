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
		cout << "\n ������ ���������: ";
		cin >> Operator;
		cout << "\n ������ ����� ��������� ������:";
		cin >> Name;
	}
	void putinf() const
	{
		cout << "\n ��������: " << Operator;
		cout << "\n �������� �����: " << Name;
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
		cout << "\n ������ ������� ������ �� 1 ��: "; cin >> count;
		cout << "\n ������ ������� ������: "; cin >> numberMinutes;
		
	}
	void putdata() const
	{
		Taruf::putinf();
		cout << "\n ������� ������ �� 1 ��: " << count;
		cout << "\n ʳ������ ������: " << numberMinutes;
		cout << "\n �������� �������: " << count * numberMinutes;
		
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
		cout << "\n ������ ������� ������ �� 1 ��: "; cin >> count;
		cout << "\n ������ ������� ������: "; cin >> numberMinutes;

	}
	void putdata() const
	{
		Taruf::putinf();
		cout << "\n ������� ������ �� 1 ��: " << count;
		cout << "\n ʳ������ ������: " << numberMinutes;
		cout << "\n �������� �������: " << count*numberMinutes;

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
		cout << "\n ������ ������� ������ �� 1 ��: "; cin >> count;
		cout << "\n ������ ������� ������: "; cin >> numberMinutes;

	}
	void putdata() const
	{
		Taruf::putinf();
		cout << "\n ������� ������ �� 1 ��: " << count;
		cout << "\n ʳ������ ������: " << numberMinutes;
		cout << "\n �������� �������: " << count * numberMinutes;

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
	cout << "\n��� ���������� ��� ������ �������� ����";
	t1.getdata();

	cout << "\n��� ���������� ��� ������ �������� ����";
	t2.getdata();

	cout << "\n��� ���������� ��� ����� �������� ����";
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
	cout << "\n����������� �������� ����:\n";
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
	cout << "\n����������� �������� ����:\n";
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
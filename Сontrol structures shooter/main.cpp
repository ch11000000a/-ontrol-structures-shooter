#include <iostream>
#include<conio.h>
using namespace std;
//#define Palindrome
//#define HappyTicket
//#define Shooter
void main() {
	setlocale(LC_ALL, "");
#ifdef Palindrome
	int num;
	int num2 = 0;
	int temp;
	int dig;
	cout << " ������� �����: ";
	cin >> num;
	temp = num;
	while (num > 0) {
		dig = num % 10;
		num2 = num2 * 10 + dig;
		num /= 10;
	}
	if (temp == num2) {
		cout << " ��� ����� ��������� ";
	}
	else {
		cout << " ��� ����� �� ��������� ";
	}
#endif // Palindrome
#ifdef HappyTicket
	int num;
	int num1 = 0;
	int num2 = 0;
	int dig;
	cin >> num;
	while (num > 999999)
	{
		cout << "�������� ����� ������";
		break;
	}

	while (num > 999)
	{
		dig = num % 10;
		num1 += dig;
		num /= 10;
	}
	while (num > 0)
	{
		dig = num % 10;
		num2 += dig;
		num /= 10;
	}
	if (num1 == num2)
	{
		cout << " � ��� ���������� ����� \n";
		cout << "\t" << num1 << " = " << num2;
	}
	else
	{
		cout << " � ��� ������������ ����� ";
	}
#endif // HappyTicket
#ifdef Shooter
	char key;
	do
	{
		key = _getch();
		if (key == 119) {
			cout << key << " - �����" << endl;
		}
		else if (key == 115) {
			cout << key << " - �����" << endl;
		}
		else if (key == 97) {
			cout << key << " - �� �����" << endl;
		}
		else if (key == 100) {
			cout << key << " - �� ����" << endl;
		}
		else if (key == 32) {
			cout << "Space" << " - ������" << endl;
		}
		else if (key == 13) {
			cout << "Enter" << " - �����" << endl;
		}
	} while (key != 27);
#endif // Shooter
}

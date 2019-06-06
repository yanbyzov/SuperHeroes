#include "Header.h"
#include "Exception.h"

bool Exception::is_digit(int & digit, string text)
{
	char _digit[10];
	try
	{
		printf("%s", text.c_str());
		cin >> _digit;
		for (int i = 0; i < strlen(_digit); i++)
			if (!isdigit(_digit[i]))
				throw 7641;
		digit = atoi(_digit);
		return false;
	}
	catch (const int &ex)
	{
		cout << "������ ��� ����� ������!" << endl << "��� ������: #" << ex << endl << "������� ������ ��� ���:\t" << endl;
		return true;
	}
}

bool Exception::diapazon(int digit, int left_border, int right_border)
{
	try
	{
		if ((digit < left_border) || (digit > right_border))
			throw 7641;
		return false;
	}
	catch (const int &ex)
	{
		cout << "������ ��� ����� ������!" << endl << "��� ������: #" << ex << endl << "������� ������ ��� ���:\t" << endl;
		return true;
	}
}

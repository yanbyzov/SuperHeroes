#pragma once
class Exception
{
public:
	//����������, ��� � ���� ������ ����� ������� �������
	bool is_digit(int& digit, string text);

	bool diapazon(int digit, int left_border, int right_border);
};


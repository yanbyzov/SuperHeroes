#include "DC_Superpower.h"

DC_Superpower::DC_Superpower()
{
	num_of_Superpower = 0;
}

void DC_Superpower::set_name()
{
	Exception ex;
	cout << "������� ���������� ����������������� (�� ������ 10 � �� ����� 1): ";
	do
	{
		cin >> num_of_Superpower; // ���������� �����������
	} while (ex.diapazon(num_of_Superpower, 1, 10));

	name = new char*[num_of_Superpower];

	for (int i = 0; i < num_of_Superpower; ++i)
	{
		name[i] = new char[N];
	}

	for (int i = 0; i < num_of_Superpower; ++i)
	{
		cout << "�������� ����������������: " << endl;
		cout << "1 - ������������� ��" << endl;
		cout << "2 - ����������� � �����������" << endl;
		cout << "3 - ���������������� �����" << endl;
		cout << "4 - ����������" << endl;
		cout << "5 - �������������� ��������" << endl;
		cout << "6 - ��������" << endl;
		cout << "7 - ����������" << endl;
		cout << "8 - ������������" << endl;
		cout << "9 - ��������������� �����������" << endl;
		cout << "10 - �������, ���������, ���������" << endl;
		int swtch;
		//cin >> swtch;
		do
		{
			cin >> swtch; // ���������� �����������
		} while (ex.diapazon(swtch, 1, 10));

		switch (swtch)
		{
		case 1:
			strcpy(name[i], "������������� ��");
			break;
		case 2:
			strcpy(name[i], "����������� � �����������");
			break;
		case 3:
			strcpy(name[i], "���������������� �����");
			break;
		case 4:
			strcpy(name[i], "����������");
			break;
		case 5:
			strcpy(name[i], "�������������� ��������");
			break;
		case 6:
			strcpy(name[i], "��������");
			break;
		case 7:
			strcpy(name[i], "����������");
			break;
		case 8:
			strcpy(name[i], "������������");
			break;
		case 9:
			strcpy(name[i], "��������������� �����������");
			break;
		case 10:
			strcpy(name[i], "�������, ���������, ���������");
			break;
		default:
			break;
		}
	}
}

void DC_Superpower::save(ofstream & fout)
{
	fout << num_of_Superpower << "%";
	for (int i = 0; i < num_of_Superpower; i++)
	{
		fout << name[i] << "%";
	}
}

void DC_Superpower::load(ifstream & fin)
{

	for (int i = 0; i < num_of_Superpower; ++i)
	{
		delete[] name[i];
	}
	delete name;
	char ch;
	fin.get(ch);
	num_of_Superpower = atoi(&ch);
	fin.get(ch);
	name = new char*[num_of_Superpower];
	for (int i = 0; i < num_of_Superpower; ++i)
	{
		name[i] = new char[N];
	}
	for (int i = 0; i < num_of_Superpower; i++)
	{
		fin.getline(name[i], N, '%');
	}
}

void DC_Superpower::info()
{
	cout << "DC_of_Superpower ====> ";
	for (int i = 0; i < num_of_Superpower; ++i)
	{
		puts(name[i]);
	}
}

DC_Superpower::~DC_Superpower()
{
	cout << "Destructor_~DC_Superpower" << endl;
	for (int i = 0; i < num_of_Superpower; ++i)
	{
		delete[] name[i];
	}
	delete name;
}

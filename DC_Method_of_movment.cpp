#include "DC_Method_of_movment.h"

DC_Method_of_movment::DC_Method_of_movment()
{
	num_of_Methods = 0;
}

void DC_Method_of_movment::set_name()
{
	Exception ex;
	cout << "Укажите количество способов передвижения (не больше 3-х и не менее 1): ";
	do
	{
		cin >> num_of_Methods; // исключение реализовать
	} while (ex.diapazon(num_of_Methods, 1, 3));


	name = new char*[num_of_Methods];
	for (int i = 0; i < num_of_Methods; ++i)
	{
		name[i] = new char[N];
	}

	for (int i = 0; i < num_of_Methods; ++i)
	{
		//написать исключения на повторение способов передвижения
		cout << "Выберите способ передвижения: " << endl;
		cout << "1 - БЕГ" << endl;
		cout << "2 - НА МАШИНЕ" << endl;
		cout << "3 - ЛЕТАЕТ" << endl;

		int swtch;
		//cin >> swtch;
		do
		{
			cin >> swtch; // исключение реализовать
		} while (ex.diapazon(swtch, 1, 3));
		switch (swtch)
		{
		case 1:
			strcpy(name[i], "БЕГ");
			break;
		case 2:
			strcpy(name[i], "НА МАШИНЕ");
			break;
		case 3:
			strcpy(name[i], "ЛЕТАЕТ");
			break;
		default:
			break;
		}
	}
}

void DC_Method_of_movment::put()
{
	for (int i = 0; i < num_of_Methods; ++i)
	{
		puts(name[i]);
	}
}

void DC_Method_of_movment::save(ofstream & fout)
{
	fout << num_of_Methods << "%";
	for (int i = 0; i < num_of_Methods; i++)
	{
		fout << name[i] << "%";
	}
}

void DC_Method_of_movment::load(ifstream & fin)
{
	for (int i = 0; i < num_of_Methods; ++i)
	{
		delete[] name[i];
	}
	delete name;

	char ch;
	fin.get(ch);
	num_of_Methods = atoi(&ch);
	fin.get(ch);

	name = new char*[num_of_Methods];
	for (int i = 0; i < num_of_Methods; ++i)
	{
		name[i] = new char[N];
	}

	for (int i = 0; i < num_of_Methods; i++)
	{
		fin.getline(name[i], N, '%');
	}
}

void DC_Method_of_movment::info()
{
	cout << "DC_Method_of_movment ====> ";
	for (int i = 0; i < num_of_Methods; ++i)
	{
		puts(name[i]);
	}
}

DC_Method_of_movment::~DC_Method_of_movment()
{
	cout << "Destructor_~DC_Method_of_movment" << endl;
	for (int i = 0; i < num_of_Methods; ++i)
	{
		delete[] name[i];
	}
	delete name;
}

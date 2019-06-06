#include "DC_Weapon.h"

DC_Weapon::DC_Weapon()
{
	num_of_Weapon = 0;
}

void DC_Weapon::set_name()
{
	Exception ex;
	cout << "Укажите количество оружия (не больше 10 и не менее 1): ";
	do
	{
		cin >> num_of_Weapon; // исключение реализовать
	} while (ex.diapazon(num_of_Weapon, 1, 10));
	name = new char*[num_of_Weapon];
	for (int i = 0; i < num_of_Weapon; ++i)
	{
		name[i] = new char[N];
	}
	for (int i = 0; i < num_of_Weapon; ++i)
	{
		//написать исключения на повторение способов передвижения
		cout << "Выберете оружие: " << endl;
		cout << "1 - Кольцо зеленого фонаря" << endl;
		cout << "2 - Бузинная палочка" << endl;
		cout << "3 - Серп Баффи" << endl;
		cout << "4 - Остроумие Дедпула" << endl;
		cout << "5 - Кольт" << endl;
		cout << "6 - Отвёртка доктора" << endl;
		cout << "7 - Лассо правды" << endl;
		cout << "8 - Мьёльнир" << endl;
		cout << "9 - Когти Росомахи" << endl;
		cout << "10 - Супер-костюм" << endl;
		int swtch;
		//cin >> swtch;
		do
		{
			cin >> swtch; // исключение реализовать
		} while (ex.diapazon(swtch, 1, 10));

		switch (swtch)
		{
		case 1:
			strcpy(name[i], "Кольцо зеленого фонаря");
			break;
		case 2:
			strcpy(name[i], "Бузинная палочка");
			break;
		case 3:
			strcpy(name[i], "Серп Баффи");
			break;
		case 4:
			strcpy(name[i], "Остроумие Дедпула");
			break;
		case 5:
			strcpy(name[i], "Кольт");
			break;
		case 6:
			strcpy(name[i], "Отвёртка доктора");
			break;
		case 7:
			strcpy(name[i], "Лассо правды");
			break;
		case 8:
			strcpy(name[i], "Мьёльнир");
			break;
		case 9:
			strcpy(name[i], "Когти Росомахи");
			break;
		case 10:
			strcpy(name[i], "Супер-костюм");
			break;
		default:
			break;
		}
	}
}

void DC_Weapon::info()
{
	cout << "DC_Weapon ====> ";
	for (int i = 0; i < num_of_Weapon; ++i)
	{
		puts(name[i]);
	}
}

void DC_Weapon::save(ofstream & fout)
{
	fout << num_of_Weapon << "%";
	for (int i = 0; i < num_of_Weapon; i++)
	{
		fout << name[i] << "%";
	}
}

void DC_Weapon::load(ifstream & fin)
{

	for (int i = 0; i < num_of_Weapon; ++i)
	{
		delete[] name[i];
	}
	delete name;
	char ch;
	fin.get(ch);
	num_of_Weapon = atoi(&ch);
	fin.get(ch);
	name = new char*[num_of_Weapon];
	for (int i = 0; i < num_of_Weapon; ++i)
	{
		name[i] = new char[N];
	}
	for (int i = 0; i < num_of_Weapon; i++)
	{
		fin.getline(name[i], N, '%');
	}
}

DC_Weapon::~DC_Weapon()
{
	cout << "Destructor_~DC_Weapon" << endl;
	for (int i = 0; i < num_of_Weapon; ++i)
	{
		delete[] name[i];
	}
	delete name;
}

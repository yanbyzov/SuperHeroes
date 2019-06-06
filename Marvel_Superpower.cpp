#include "Marvel_Superpower.h"


Marvel_Superpower::Marvel_Superpower()
{
	num_of_Superpower = 0;
}

void Marvel_Superpower::set_name()
{
	Exception ex;
	cout << "Укажите количество суперспособностей (не больше 10 и не менее 1): ";
	do
	{
		cin >> num_of_Superpower; // исключение реализовать
	} while (ex.diapazon(num_of_Superpower, 1, 10));

	//cin >> num_of_Superpower; // исключение реализовать
	name = new char*[num_of_Superpower];

	for (int i = 0; i < num_of_Superpower; ++i)
	{
		name[i] = new char[N];
	}

	for (int i = 0; i < num_of_Superpower; ++i)
	{
		cout << "Выберете суперспособность: " << endl;
		cout << "1 - Феноменальный ум" << endl;
		cout << "2 - Способность к регенерации" << endl;
		cout << "3 - Профессиональный пилот" << endl;
		cout << "4 - Соблазение" << endl;
		cout << "5 - Нечеловеческая скорость" << endl;
		cout << "6 - Гибкость" << endl;
		cout << "7 - Проворство" << endl;
		cout << "8 - Выносливость" << endl;
		cout << "9 - Экстрасенсорные способности" << endl;
		cout << "10 - Плейбой, милиардер, филантроп" << endl;
		int swtch;
		//cin >> swtch;
		do
		{
			cin >> swtch; // исключение реализовать
		} while (ex.diapazon(swtch, 1, 10));

		switch (swtch)
		{
		case 1:
			strcpy(name[i], "Феноменальный ум");
			break;
		case 2:
			strcpy(name[i], "Способность к регенерации");
			break;
		case 3:
			strcpy(name[i], "Профессиональный пилот");
			break;
		case 4:
			strcpy(name[i], "Соблазение");
			break;
		case 5:
			strcpy(name[i], "Нечеловеческая скорость");
			break;
		case 6:
			strcpy(name[i], "Гибкость");
			break;
		case 7:
			strcpy(name[i], "Проворство");
			break;
		case 8:
			strcpy(name[i], "Выносливость");
			break;
		case 9:
			strcpy(name[i], "Экстрасенсорные способности");
			break;
		case 10:
			strcpy(name[i], "Плейбой, милиардер, филантроп");
			break;
		default:
			break;
		}
	}
}

void Marvel_Superpower::save(ofstream & fout)
{
	fout << num_of_Superpower << "%";
	for (int i = 0; i < num_of_Superpower; i++)
	{
		fout << name[i] << "%";
	}
}

void Marvel_Superpower::load(ifstream & fin)
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

void Marvel_Superpower::info()
{
	cout << "Marvel_of_Superpower ====> ";
	for (int i = 0; i < num_of_Superpower; ++i)
	{
		puts(name[i]);
	}
}

Marvel_Superpower::~Marvel_Superpower()
{
	cout << "Destructor_~Marvel_Superpower" << endl;
	for (int i = 0; i < num_of_Superpower; ++i)
	{
		delete[] name[i];
	}
	delete name;
}


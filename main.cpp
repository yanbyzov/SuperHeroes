#include "Header.h"
#include "Superhero.h"
#include "Multiki.h"
#include "MARVEL.h"
#include "DC.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	Superhero * M;
	Superhero * D;

	Superhero * buffer;

	Multiki game;
	MARVEL * MARVEL_factory;
	DC * DC_factory;
	int num_MARVEL_factory;
	int num_DC_factory;

	int all_MARVEL;
	int all_DC;

	ifstream fin;
	ofstream fout;

	string filename;

	cout << "Выберите вселенную: " << endl;
	cout << "1 - MARVEL" << endl;
	cout << "2 - DC" << endl;

	int swtch;
	cin >> swtch;
	switch (swtch)
	{
	case 1:
		filename = "MARVEL.txt";
		cout << "Выберите действие: " << endl;
		cout << "1 - Создание героев" << endl;
		cout << "2 - Загрузка данных из файла" << endl;
		cout << "3 - Удаление базы данных" << endl;
		cin >> swtch;
		switch (swtch)
		{
		case 1:
			cout << "Введите количество супергероев MARVEL, которых хотите добавить: " << endl;
			cin >> num_MARVEL_factory;
			MARVEL_factory = new MARVEL[num_MARVEL_factory];

			for (int i = 0; i < num_MARVEL_factory; i++)
			{
				M = game.createArmy(MARVEL_factory[i]);
				M->set();
				M->save(filename);
			}

			delete[] MARVEL_factory;
			break;
		case 2:
			all_MARVEL = 0;
			try
			{
				fin.open("MARVEL.txt");
				if (!fin.is_open()) {
					throw 505;
				}
				MARVEL_factory = new MARVEL;
				buffer = game.createArmy(*MARVEL_factory);
				while (!fin.eof())
				{
					all_MARVEL++;
					buffer->load(fin);
				}
				delete MARVEL_factory;
				fin.close();
			}
			catch (const int ex)
			{
				cout << "Ошибка открытия файла!" << endl << "Код ошибки: #" << ex << endl;
			}

			MARVEL_factory = new MARVEL[all_MARVEL];
			num_MARVEL_factory = all_MARVEL;
			try
			{
				fin.open("MARVEL.txt");
				if (!fin.is_open()) {
					throw 505;
				}
				for (int i = 0; i < num_MARVEL_factory; i++)
				{
					M = game.createArmy(MARVEL_factory[i]);
					M->load(fin);
					M->info();
					cout << endl;
				}
				fin.close();
			}
			catch (const int ex)
			{
				cout << "Ошибка открытия файла!" << endl << "Код ошибки: #" << ex << endl;
			}
			break;
		case 3:
			fout.open("MARVEL.txt");
			fout.close();
			break;
		default:
			break;
		}
		break;
	case 2:
		filename = "DC.txt";
		cout << "Выберите действие: " << endl;
		cout << "1 - Создание героев" << endl;
		cout << "2 - Загрузка данных из файла" << endl;
		cout << "3 - Удаление базы данных" << endl;
		cin >> swtch;
		switch (swtch)
		{
		case 1:
			cout << "Введите количество супергероев DC, которых хотите добавить: " << endl;
			cin >> num_DC_factory;
			DC_factory = new DC[num_DC_factory];

			for (int i = 0; i < num_DC_factory; i++)
			{
				M = game.createArmy(DC_factory[i]);
				M->set();
				M->save(filename);
			}

			delete[] DC_factory;
			break;
		case 2:
			all_DC = 0;
			try
			{
				fin.open("DC.txt");
				if (!fin.is_open()) {
					throw 505;
				}
				DC_factory = new DC;
				buffer = game.createArmy(*DC_factory);
				while (!fin.eof())
				{
					all_DC++;
					buffer->load(fin);
				}
				delete DC_factory;
				fin.close();
			}
			catch (const int ex)
			{
				cout << "Ошибка открытия файла!" << endl << "Код ошибки: #" << ex << endl;
			}

			DC_factory = new DC[all_DC];
			num_DC_factory = all_DC;
			try
			{
				fin.open("DC.txt");
				if (!fin.is_open()) {
					throw 505;
				}
				for (int i = 0; i < num_DC_factory; i++)
				{
					M = game.createArmy(DC_factory[i]);
					M->load(fin);
					M->info();
					cout << endl;
				}
				fin.close();
			}
			catch (const int ex)
			{
				cout << "Ошибка открытия файла!" << endl << "Код ошибки: #" << ex << endl;
			}
			break;
		case 3:
			fout.open("DC.txt");
			fout.close();
			break;
		default:
			break;
		}
		break;
		break;
	default:
		break;
	}
	system("pause");
}


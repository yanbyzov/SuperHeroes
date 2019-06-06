#include "Superhero.h"

Superhero::Superhero()
{
	MOM = nullptr;
	SP = nullptr;
	W = nullptr;
}

void Superhero::save(string filename)
{
	ofstream fout;
	fout.open(/*"MARVEL.txt"*/filename, ios::app);
	fout << name << "%";
	MOM->save(fout);
	SP->save(fout);
	W->save(fout);
	fout << endl;
	fout.close();
}

void Superhero::load(ifstream & fin)
{
	char ch;
	fin.getline(name, N, '%');
	MOM->load(fin);
	SP->load(fin);
	W->load(fin);
	fin.get(ch);
}

void Superhero::set()
{
	cout << "Введите имя героя: ";
	cin >> name;
	MOM->set_name();
	SP->set_name();
	W->set_name();
}

void Superhero::info()
{
	cout << "Герой: " << name << endl;
	MOM->info();
	SP->info();
	W->info();
}

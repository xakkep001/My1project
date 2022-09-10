#include <iostream>
#include <string>
using namespace std;

void DZ()
{
	cout << "Домашнее задание:" << endl;
	// \x1b[31mHello\x1b[0m изменение цвета текста
	cout << "\x1b[31m Написать \x1b[0m" << endl;
	cout << "Начало программы->" << endl << endl;	
}


class Persons
{
private:
	string name;
	int lvl;
	int power;

public:
	void SetName()
	{
		string na;
		cout << "Введите имя персонажа:";
		cin >> na;
		name = na;
	}
	string GetName()
	{
		return name;
	}
	
	int GetLvL()
	{
		return lvl;
	}

	void SetLvL(int ur)
	{
		lvl = ur;		
	}
	void SetPower(int pwr)
	{
		power = pwr;
	}

	void Print()
	{
		cout << "Имя "<<name << "\n" <<"Уровень " << lvl << "\n" <<"Сила" << power << endl;
	}
};

int lvlUp(int lvl, int power)
{
	
	return 0;
}

int main() {
	setlocale(0,"");
	DZ();

	int uu = 0;
	int pp = 10;

	Persons one;
	one.SetName();

	string text = "lvlup";
	
	for (int i = 0; i < 1; i++)
	{
		if (text == "lvlup")
		{			
			uu++;
			one.SetLvL(uu);
			pp = pp + 10;
			one.SetPower(pp);
			one.Print();
			i--;
			cout << "Впишите дальнейшие действия:";
			cin >> text;
		}
		else if (text == "exit")
		{
			i = 2;
		}
		else
		{
			cout << "Впишите дальнейшие действия:";
			cin >> text;
			i--;
		}
		
	}


	
	

	return 0;
}
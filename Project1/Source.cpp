#include <iostream>
#include <string>
using namespace std;

void DZ()
{
	cout << "�������� �������:" << endl;
	// \x1b[31mHello\x1b[0m ��������� ����� ������
	cout << "\x1b[31m �������� \x1b[0m" << endl;
	cout << "������ ���������->" << endl << endl;	
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
		cout << "������� ��� ���������:";
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
		cout << "��� "<<name << "\n" <<"������� " << lvl << "\n" <<"����" << power << endl;
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
			cout << "������� ���������� ��������:";
			cin >> text;
		}
		else if (text == "exit")
		{
			i = 2;
		}
		else
		{
			cout << "������� ���������� ��������:";
			cin >> text;
			i--;
		}
		
	}


	
	

	return 0;
}
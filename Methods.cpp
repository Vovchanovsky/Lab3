#include "Header.h"

Student::Student()
{
	cout << "Please, enter some data..." << endl;
	cout << "Username: ";
	cin >> name;
	cout << "University: ";
	cin >> vnz;
	cout << "Age: ";
	cin >> age;
}

Student::Student(string a, int b, string c="KPI")
{
	name = a;
	age = b;
	vnz = c;
}

Journal::Journal()
{
	cout << "How many marks student has?" << endl;
	cin>> nm;
	cout << "Enter marks here:"<< endl;
	mark = new int[nm];
	for (int i = 0; i < nm; i++) {
		cin >> mark[i];
	}
}

Journal::~Journal()
{
	delete[] this->mark;
}

void Student::Interface()
{
	int a;
	cout << "--------" << name << " menu--------" << endl;
	cout << "1 - OutData, 2 - OutAge, 3 - ChangeUsername, 4 - ChangeAge, 5 - ChangeVNZ, 0 - Exit" << endl;
	cout << "Code:";
	cin >> a;
	switch (a)
	{
	case 1:
		OutData();
		break;
	case 2:
		OutAge();
		break;
	case 3:
		ChangeName();
		break;
	case 4:
		ChangeAge();
		break;
	case 5:
		SetVNZ();
		break;
	default:
		break;
	}
	if (a!=0) Interface();
}

void Journal::Interface()
{
	int a;
	cout << "--------" << name << " menu--------" << endl;
	cout << "1 - OutData, 2 - OutAge, 3 - ChangeUsername, 4 - ChangeAge, 5 - ChangeVNZ, 6 - Marks, 0 - Exit" << endl;
	cout << "Code:";
	cin >> a;
	switch (a)
	{
	case 1:
		OutData();
		break;
	case 2:
		OutAge();
		break;
	case 3:
		ChangeName();
		break;
	case 4:
		ChangeAge();
		break;
	case 5:
		SetVNZ();
		break;
	case 6:
		WatchMarks();
		break;
	default:
		break;
	}
	if (a != 0) Interface();
}

void Student::SetVNZ()
{
	cout << "New university: ";
	cin >> vnz;
}

void Student::OutData()
{
	cout << "Username: " << name << endl;
	cout << "University: " << vnz << endl;
	cout << "Age: " << age << endl;
}

void Student::OutAge()
{
	cout << "Username: " << name << endl;
	cout << "Age: " << age << endl;
}

void Student::ChangeName()
{
	cout << "New username: ";
	cin >> name;
}

void Student::ChangeAge()
{
	cout << "New age: ";
	cin >> age;
}

void Journal::WatchMarks()
{
	cout << name<<" marks:" << endl;
	for (int i = 0; i < nm; i++) {
		cout<< mark[i]<< endl;
	}
}

Journal& Journal::operator =(Journal &k)
{
	vnz = k.vnz;
	nm = k.nm;
	mark = new int[nm];
	for (int i = 0; i < nm; i++)
	{
		mark[i] = k.mark[i];
	}
	return *this;
}

void Journal::operator ==(const Journal& a)
{
	if (a.nm != nm)
	{
		cout << "Marks are NOT identical" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < nm; i++)
		{
			if (a.mark[i] != mark[i])
			{
				cout << "Marks are NOT identical" << endl;
				return;
			}
		}
	}
	cout << "Marks are identical" << endl;
}
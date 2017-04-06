#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
	string vnz;
	string name;
	int age;
	void SetVNZ();
	void OutData();
	void OutAge();
	void ChangeName();
	void ChangeAge();
public:
	Student();
	Student(string, int, string);
	void Interface();
};

class Journal : private Student
{
public:
	void Interface();
	Journal();
	~Journal();
	Journal& operator =(Journal &k);
	void operator ==(const Journal& a);
private:
	int nm;
	int *mark;
	void WatchMarks();
};


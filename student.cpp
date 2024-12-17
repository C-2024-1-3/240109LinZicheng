#include <iostream>
#include "student.h"
#include <string>
using namespace std;
void Student::Display()
{
	cout << "num: " << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
}
Student::Student(int Num, char Name[20], char Se)
{
	(*this).num = Num;
	int i = 0;
	while (Name[i] != '\0')
	{
		(*this).name[i] = Name[i];
		i++;
	}
	(*this).name[i] = '\0';
	(*this).sex = Se;
}
Student::Student()
{
	set_value();
}
void Student::set_value()
{
	(*this).num = 0;
	for (int i = 0; i < 20; i++)
	{
		(*this).name[i] = NULL;
	}
	(*this).sex = NULL;
}
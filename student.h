#pragma once
class Student
{
public:
	void Display();
	void set_value();
	Student(int Num, char Name[20], char Se);
	Student();
private:
	int num;
	char name[20];
	char sex;
};
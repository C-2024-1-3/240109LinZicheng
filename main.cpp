#include <iostream>
#include "student.h"
using namespace std;
int main()
{
	Student stud;
	char name[20] = "LinZicheng";
	char sex = 'm';
	Student stud1(007, name, sex);
	stud.Display();
	return 0;
}
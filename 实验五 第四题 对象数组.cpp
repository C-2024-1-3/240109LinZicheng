#include <iostream>
using namespace std;
class Student
{
public:
	long IDNumber;
	int Score;
	Student(long idnumber = 0, int score = 0)
	{
		(*this).IDNumber = idnumber;
		(*this).Score = score;
	}
	void ShowStudent()
	{
		cout << "ID: " << IDNumber << ", Score: " << Score << endl;
	}
};
void max(Student student[5])
{
	int maximum = student[0].Score;
	int maxID = student[0].IDNumber;
	for (int i = 1; i < 5; i++)
	{
		if (student[i].Score <= maximum)
			continue;
		else
		{
			maximum = student[i].Score;
			maxID = student[i].IDNumber;
		}
	}
	cout << maxID;
}
int main()
{
	Student student[5] =
	{
		Student(210313, 641),
		Student(210258, 607),
		Student(210112, 630),
		Student(210321, 662),
		Student(210438, 638)
	};
	for (int i = 0; i < 5; i++)
		student[i].ShowStudent();
	max(student);
	return 0;
}
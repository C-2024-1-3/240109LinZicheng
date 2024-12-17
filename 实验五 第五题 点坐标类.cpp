#include <iostream>
using namespace std;
class Point
{
private:
	int X;
	int Y;
public:
	Point()
	{
		(*this).X = 60;
		(*this).Y = 80;
	}
	void SetPoint(int i, int j)
	{
		(*this).X += i;
		(*this).Y += j;
	}
	void Display()
	{
		cout << "(" << X << ", " << Y << ")" << endl;
	}
};
int main()
{
	Point p1;
	p1.Display();
	p1.SetPoint(10, 20);
	p1.Display();
	p1.SetPoint(-30, 40);
	p1.Display();
	p1.SetPoint(20, -60);
	p1.Display();
	return 0;
}
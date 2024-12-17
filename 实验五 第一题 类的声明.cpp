#include <iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	void GetTime(int h, int m, int s)
	{
		(*this).hour = h;
		(*this).minute = m;
		(*this).second = s;
	}
	void ShowTime()
	{
		cout << hour << ":" << minute << ":" << second << endl;
	}
};
int main()
{
	Time t1;
	int h, m, s;
	cin >> h >> m >> s;
	t1.GetTime(h, m, s);
	t1.ShowTime();
	return 0;
}
#include <iostream>
using namespace std;
class Cuboid
{
private:
	int Length;
	int Width;
	int Height;
public:
	Cuboid(int length, int width, int height)
	{
		(*this).Length = length;
		(*this).Width = width;
		(*this).Height = height;
	}
	void GetVolume()
	{
		int Volume = Length * Width * Height;
		cout << "Volume: " << Volume << endl;
	}
};
int main()
{
	int i = 0;
	do
	{
		int length, width, height;
		cout << "Length: ";
		cin >> length;
		cout << "Width: ";
		cin >> width;
		cout << "Height: ";
		cin >> height;
		Cuboid cub(length, width, height);
		cub.GetVolume();
		i++;
	} while (i <= 2);
	return 0;
}
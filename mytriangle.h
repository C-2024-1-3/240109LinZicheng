#pragma once
#include <iostream>
#include <Cmath>
using namespace std;
bool is_valid(double side1, double side2, double side3)
{
	if (side1 <= 0 || side2 <= 0 || side3 <= 0)
		return false;
	else if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)
		return false;
	else
		return true;
}
long double area(double side1, double side2, double side3)
{
	if (is_valid(side1, side2, side3) == false)
	{
		exit(1);
	}
	else
	{
		double s = (side1 + side2 + side3) / 2;
		long double S = sqrt(s * (s - side1) * (s - side2) * (s - side3));
		return S;
	}
}
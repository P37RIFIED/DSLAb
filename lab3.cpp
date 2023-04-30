#include <iostream>
using namespace std;
int main()
{
	float a;
	int s, d;
	cout << "enter any number:";
	cin >> a;
	s = ceiil(a);
	d = floor(a);
	cout << "the ceiling value is :" << s << endl;
	cout << "the floor value is :" << d << endl;
	return 0;
}
int ceiil(float a)
{
	if (a > 0)
	{
		a = (int)a + 1;
		return a;
	}
	else if (a < 0)
	{
		a = (int)a;
		return a;
	}
}
int flor(float a)
{
	if (a > 0)
	{
		a = (int)a;
		return a;
	}
	else if (a < 0)
	{
		a = (int)a - 1;
		return a;
	}
}

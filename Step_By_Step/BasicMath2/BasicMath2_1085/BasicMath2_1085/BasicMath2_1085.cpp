#include <iostream>
using namespace std;
int Function(const int& x, const int& y, const int& w, const int& h);

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	cout << Function(x, y, w, h) << endl;

	return 0;
}

int Function(const int& x, const int& y, const int& w, const int& h)
{
	int width_right = w - x;
	int width_left = x;
	int width_compare = width_right > width_left ? width_left : width_right;

	int height_up = h - y;
	int height_down = y;
	int height_compare = height_up > height_down ? height_down : height_up;

	int value = height_compare > width_compare ? width_compare : height_compare;
	return value;
}

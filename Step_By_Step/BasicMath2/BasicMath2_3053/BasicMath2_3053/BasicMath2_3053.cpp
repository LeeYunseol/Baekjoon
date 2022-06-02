#include <iostream>
using namespace std;
const double PI = 3.1415926535897932;
double Caculate_cirlce_uclid(const int& r);
double Caculate_circle_taxicab(const int& r);

// 택시 기하학에서 반지름이 r인 원의 넓이란, 두 대각선의 길이가 2r인 마름모의 넓이
int main()
{
	// 소수점 고정
	cout << fixed;
	cout.precision(6);

	int radius;
	cin >> radius;
	cout << Caculate_cirlce_uclid(radius) << endl;
	cout << Caculate_circle_taxicab(radius) << endl;
	return 0;
}

double Caculate_cirlce_uclid(const int& r)
{
	return static_cast<double>(r * r * PI);
}

double Caculate_circle_taxicab(const int& r)
{
	return static_cast<double>(2 * r * r);
}
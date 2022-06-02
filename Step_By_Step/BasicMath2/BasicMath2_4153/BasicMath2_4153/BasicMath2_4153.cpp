#include <iostream>
using namespace std;
void Function(const int& a, const int& b, const int& c);
void Swap2(int& a, int& b, int& c);
void Swap(int& num1, int& num2);

int main()
{
	while (true)
	{
		int a, b, c;
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;
		Swap2(a, b, c);
		Function(a, b, c);
	}

	return 0;
}

void Function(const int& a, const int& b, const int& c)
{
	if (a * a + b * b == c * c)
		cout << "right" << endl;
	else
		cout << "wrong" << endl;

}

void Swap2(int& a, int& b, int& c)
{
	if (a > b)
		Swap(a, b);

	if (b > c)
		Swap(b, c);
}

void Swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
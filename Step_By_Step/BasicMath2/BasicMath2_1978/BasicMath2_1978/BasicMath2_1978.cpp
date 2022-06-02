#include <iostream>
using namespace std;
bool Check_prime(const int& num);

int main()
{
	int how_many;
	cin >> how_many;
	int count = 0;
	for (int i = 0; i < how_many; i++)
	{
		int num;
		cin >> num;
		if (Check_prime(num))
			count++;
	}
	cout << count;
	return 0;
}

bool Check_prime(const int& num)
{
	if (num == 1)
		return false;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}
#include <iostream>
using namespace std;
void Function(int& num);

int main()
{
	int num;
	cin >> num;
	Function(num);

	return 0;
}

void Function(int& num)
{
	for (int i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num /= i;
			cout << i << endl;
			Function(num);
		}
	}
}
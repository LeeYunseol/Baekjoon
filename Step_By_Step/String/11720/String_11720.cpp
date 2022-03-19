#include <iostream>
using namespace std;

int main()
{
	int size;
	string num;

	cin >> size >> num;

	int sum = 0;
	for(int i = 0;  i< num.length() ; i++)
	{
		sum += num[i] - '0';
	}
	cout << sum;
	return 0;
}

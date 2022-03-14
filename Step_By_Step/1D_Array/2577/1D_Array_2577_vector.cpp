#include <iostream>
using namespace std;
#include <string>

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	int num = A * B * C;
	string s = to_string(num);
	
	int array[10];
	for (int i = 0; i < 10; i++)
	{
		array[i] = 0;
	}
	for (char c : s)
	{
		int i = c - '0';
		array[i]++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;;
	}
}


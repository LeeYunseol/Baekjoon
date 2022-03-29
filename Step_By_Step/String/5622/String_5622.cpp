// 이 문제 읽으면서 가장 처음에 든 생각이 그럼 전화번호에 0이 있으면 어떡하지..?

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string array[8] = { "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };
	string input;
	cin >> input;

	int sum = 0;

	for (int i = 0; i < input.length(); i++)
	{
		for (int j = 0; j < 8; j++)
		{
			string temp = array[j];
			for (int k = 0; k < temp.length(); k++)
			{
				if (input[i] == temp[k])
					sum += j + 3;
			}
		}
	}
	cout << sum;
	return 0;
}
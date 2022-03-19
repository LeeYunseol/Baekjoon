#include <iostream>
#include <string>
using namespace std;

int main()
{
	int how_many;
	cin >> how_many;
	// 처음에 틀린 이유는 output이 string이어야함.
	for (int i = 0; i < how_many; i++)
	{
		int num;
		string word;
		string output;
		cin >> num >> word;
		for (char c : word)
		{
			for (int i = 0; i < num ; i++)
			{
				output += c;
			}
		}
		// 계속 틀렸던 이유는 endl 안해줘서 틀렸던 거임
		cout << output<<endl;
	}

	return 0;
}
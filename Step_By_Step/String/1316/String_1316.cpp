#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool Check_group(string word);

int main()
{
	int how_many;
	cin >> how_many;
	int count = 0;
	for (int i = 0; i < how_many; i++)
	{
		string input;
		cin >> input;
		if (Check_group(input) == true)
			count++;
	}

	cout << count;

	return 0;
}

bool Check_group(string word)
{
	int array[26] = { 0 };
	for (int i = 0; i < word.length(); i++)
	{
		if (array[word[i] - 97] == 1)
			return false;

		else if (i != word.length() - 1 && word[i] != word[i + 1])
			array[word[i] - 97] = 1;
	}
	return true;
}
#include <iostream>
#include <string>
using namespace std;
void Set_lower(string& value);
int main()
{
	int tempArray[26] = { 0 };
	string word;
	cin >> word;
	Set_lower(word);

	for (int i = 0; i < word.length(); i++)
	{
		tempArray[word[i] - 97]++;
	}

	int max = 0;
	int index = 0;

	for (int i = 0; i < 26 ; i++)
	{
		if (max < tempArray[i])
		{
			max = tempArray[i];
			index = i;
		}
	}
	int count = 0;
	for (int i = 0; i < 26; i++)
	{
		if (tempArray[i] == max)
			count++;
	}
	
	if (count == 1)
		cout << (char)(index + 65);
	else
		cout << '?';
	return 0;
}

void Set_lower(string& value)
{
	for (int i = 0; i < value.length(); i++)
	{
		value[i] = tolower(value[i]);
	}
}
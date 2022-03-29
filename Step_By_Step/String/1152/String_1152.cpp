#include <iostream>
#include <string>
using namespace std;

int Count_word(string input);


int main()
{
	string word;
	// ★ 공백이 포함된 문자열 입력받는 방법이 다름.
	// getline(cin, str);
	getline(cin, word);

	int count = Count_word(word);
	cout << count << endl;
	return 0;
}

// 처음에 계속 틀렸던 이유는 아예 입력된 문자가 공백일 때를 생각하지를 못함.
int Count_word(string input)
{
	int count=1;
	for (int i = 0; i < input.length(); i++)
	{
		// 그냥 쌩 단어가 공백일때
		if (input.length() == 1 && input[i] == ' ')
		{
			count -= 1;
		}
		// 맨 처음에 공백인지 확인
		if ((i == 0 && input[i] == ' ') || (i == input.length() - 1 && input[i] == ' '))
			continue;
		else if(input[i] == ' ')
			count++;
	}
	return count;
}
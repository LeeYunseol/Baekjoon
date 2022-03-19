#include <iostream>
using namespace std;
#include <string>
int main()
{
	string word;
	cin >> word;

	// 숫자를 담을 배열을 만들자
	//int array[26] = { -1 }; 이거는 하나에 대해서만 채워주고 나머지는 0, 이 방법은 0이나 false에만 가능
	int array[26];
	// 특정 수로 다 채울려면 이렇게 해야한다.
	fill_n(array, 26, -1);

	// 자리를 나타내는 인덱스
	int index = 0;
	for (char c : word)
	{
		// 소문자 a는 97
		if (array[int(c) - 97] == -1)
		{
			array[int(c) - 97] = index;
		}
		index += 1;
	}

	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		cout << array[i] << " ";
	}
	return 0;
}
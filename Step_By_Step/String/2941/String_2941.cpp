#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 찾아보니 string 클래스의 멤버함수로서, str.find("찾는 문자") 로 사용
//반환값은 찾는 문자의 첫번째 인덱스값
//찾는 문자가 없을 경우는 string::npos를 리턴한다. (npos는 no position으로 쓰레기값 나옴)

int main()
{
	vector<string> croatia_alphabet = {"c=", "c-", "dz=" ,"d-" ,"lj" , "nj", "s=", "z="};
	string input;
	cin >> input;

	int index = 0;

	for (int i = 0; i < croatia_alphabet.size() ; i++)
	{
		while (true)
		{
			index = input.find(croatia_alphabet[i]);
			if (index == string::npos)
				break;
			input.replace(index, croatia_alphabet[i].length(), "@");
		}
	}
	cout << input.length();

	return 0;
}
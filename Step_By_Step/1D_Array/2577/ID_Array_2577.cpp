#include <iostream>
using namespace std;
#include <string>

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	int num = A * B * C;
	string s = to_string(num);
	// 저는 세 정수의 곱셈 num을 string으로 바꿔주어 하나씩 배열로 넣는 방법으로 풀었습니다.(벡터를 사용하지 않고)

	int array[10];
	// array의 값들을 다 0으로 초기화
	for (int i = 0; i < 10; i++)
	{
		array[i] = 0;
	}

	for (int i = 0; i < s.length(); i++)
	{
		if (s.substr(i,1).compare("0") == 0)
			array[0]++;
		if (s.substr(i, 1).compare("1") == 0)
			array[1]++;
		if (s.substr(i, 1).compare("2") == 0)
			array[2]++;
		if (s.substr(i, 1).compare("3") == 0)
			array[3]++;
		if (s.substr(i, 1).compare("4") == 0)
			array[4]++;
		if (s.substr(i, 1).compare("5") == 0)
			array[5]++;
		if (s.substr(i, 1).compare("6") == 0)
			array[6]++;
		if (s.substr(i, 1).compare("7") == 0)
			array[7]++;
		if (s.substr(i, 1).compare("8") == 0)
			array[8]++;
		if (s.substr(i, 1).compare("9") == 0)
			array[9]++;
	}


	for(int i=0 ; i <= 9 ; i++)
	{
		cout << array[i] << endl;
	}

}


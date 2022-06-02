#include <iostream>
using namespace std;

int main()
{
	int X;
	cin >> X;
	int index = 1;

	// 인덱스가 짝수일 때는 분자가 1부터 늘어남
	// 인덱스가 홀수일 때는 분모가 1부터 늘어남
	while (X > index)
	{
		X = X - index;
		index++;
	}
	// X가 7를 입력하면 index = 4, X = 1
	// X가 몇번째인지 알려주는 것으로 바뀜

	// 인덱스가 짝수
	if (index % 2 == 0)
		cout << X << "/" << index + 1 - X;
	// 인덱스가 홀수
	else
		cout << index + 1 - X << "/" << X;

	return 0;
}
#include <iostream>
using namespace std;

int Count(int num);

int main()
{
	// 1 : 한 칸 또, 힌트는 육각형     
	// 2 ~ 7 : 두 칸 
	// 8 ~ 19 : 세 칸
	// 20 ~ 37 : 네 칸
	// 38 ~ 61 : 다섯 칸
	// 62 ~ 
	int N;
	cin >> N;
	cout << Count(N);
	return 0;
}

int Count(int num)
{
	int count = 1, layer = 1, range = 1;
	while (true)
	{
		if (num <= range)
			break;
		range = range + layer * 6;//(육각형)
		layer++;
		count++;
	}
	return count;
}
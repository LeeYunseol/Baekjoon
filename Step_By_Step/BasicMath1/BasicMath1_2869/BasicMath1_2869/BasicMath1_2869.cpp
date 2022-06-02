#include <iostream>
using namespace std;

int Count_day(int a, int b, int v);

int main()
{
	int A, B, V;
	cin >> A >> B >> V;
	
	cout << Count_day(A, B, V);

	return 0;
}


int Count_day(int a, int b, int v)
{
	if ((v - a) % (a - b) != 0)
		return (v - a) / (a - b) + 2;
	else 
		return  (v - a) / (a - b) + 1;
	// 하루에 올라가는 길이는 a - b지만 만약 남은 길이가 a보다 적으면 한 번에 올라간다.
	// 처음에 while 사용하니깐 시간초과로 오류가 남

}
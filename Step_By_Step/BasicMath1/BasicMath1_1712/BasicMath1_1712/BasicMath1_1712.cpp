#include <iostream>
using namespace std;

// 이 문제의 핵심은 손익분기점이 존재하지 않을 때 -1을 출력하는 것
// 생각해보면 판매비용이 생산보다 작으면 문제 발생


int Break_even_point(int a, int b, int c);

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	cout << Break_even_point(A, B, C);

	return 0;
}

int Break_even_point(int a, int b, int c)
{
	if (b >= c)
		return -1;
	else
		return a / (c - b) + 1;
	// 계속 while문을 돌리면 값이 중간에 누락되는 것을 알았음
}
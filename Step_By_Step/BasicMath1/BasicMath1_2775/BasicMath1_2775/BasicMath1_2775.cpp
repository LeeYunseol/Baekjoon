#include <iostream>
#include <string>
using namespace std;
int Count(int k, int n);
// 이거 핵심은 (a,b) = (a-1, b) + (a, b-1)임 => 내가 생각해냄 :) 재귀로 풀면 되지 않을까
int main()
{
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int n, k;
		cin >> k >> n;
		cout << Count(k, n) << endl;
	}

	return 0;
}

int Count(int k, int n)
{
	// 0층이라면 
	if (k == 0)
		return n;
	// 1호는 전부 1임
	if (n == 1)
		return 1;
	else
		return Count(k - 1, n) + Count(k, n - 1);
}
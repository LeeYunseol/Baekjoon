#include <iostream>
#include <string>
using namespace std;
void Add(const string& a, const string& b);
// 중요한거는 char을 int로 바꿀려면 - '0' , 반대로 바꿀려면 + '0'
int main()
{
	string A, B;
	cin >> A >> B;
	Add(A, B);

	return 0;
}

void Add(const string& a, const string& b)
{
	 int a_size = a.length();
	 int b_size = b.length();
	 string answer = "";
	 int larger_than_10 = 0;
	while (a_size > 0 || b_size > 0)
	{
		// current 자리의 a 숫자
		int a_num = 0;
		if(a_size > 0)
			 a_num = a[--a_size] - '0';
		int b_num = 0;
		if (b_size > 0)
			b_num = b[--b_size] - '0';
		int add_num = larger_than_10 + a_num + b_num;
		larger_than_10 = add_num / 10;
		add_num %= 10;
		answer += add_num + '0';
	}
	if(larger_than_10 == 1)
		answer += "1";
	for (int i = answer.length()-1; i >= 0; i--)
	{
		cout << answer[i];
	}
}
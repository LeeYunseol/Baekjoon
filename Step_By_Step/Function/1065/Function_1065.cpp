#include <iostream>
using namespace std;

bool Check_hansoo(int num);

int main()
{
	int num;
	cin >> num;
	// array를 전부 같은 값으로 초기화하는 방법(그냥 초기화하면 쓰레기 값이 들어가 있음)
	bool array[1001] = { false };
	
	for (int i = 1; i <= num; i++)
	{
		array[i] = Check_hansoo(i);
	}

	int count = 0;
	for (int i = 1; i < 1001; i++)
	{
		if (array[i] == true)
			count++;
	}
	cout << count;

	return 0;
}
// 문제를 잘 읽어보니깐 결국 한 자릿수, 두 자릿수 숫자들은 모두 한수 !
bool Check_hansoo(int num)
{
	// 1의 자릿수
	int num_1 = num % 10;
	// 10의 자릿수
	int num_10 = (num / 10) % 10;
	// 100의 자릿수
	int num_100 = num / 100;
	
	// 1~9 거르기
	if (num_10 == 0 && num_100 == 0 && num_1 != 0)
		return true;
	// 10~99 거르기
	else if (num_100 == 0 && num_10 != 0)
		return true;
	else if ((num_100 - num_10) * 2 == (num_100 - num_1))
	{
		if ((num_10 - num_1) * 2 == (num_100 - num_1))
			return true;
	}
	// else return false 안해줬더니 계속 틀렸다고 나왔음. 
	// 해당이 안되면 default인 false를 유지하는 것이 아닌 쓰레기 값이 들어가는 것 같음
	else
		return false;
	
}

